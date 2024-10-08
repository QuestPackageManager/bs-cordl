#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumTableViewDataSource_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnumTableViewDataSource_1_def.hpp"
#include "GlobalNamespace/zzzz__TextOnlyTableCell_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
template <typename T> constexpr GlobalNamespace::EnumTableViewDataSource_1<T>::operator ::HMUI::__TableView__IDataSource*() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::__TableView__IDataSource"
template <typename T> constexpr ::HMUI::__TableView__IDataSource* GlobalNamespace::EnumTableViewDataSource_1<T>::i___HMUI____TableView__IDataSource() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename T> constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_set__values(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline float_t GlobalNamespace::EnumTableViewDataSource_1<T>::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "CellSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, idx);
}
template <typename T> inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                                                                             "NumberOfCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::UnityW<::HMUI::TableCell> GlobalNamespace::EnumTableViewDataSource_1<T>::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "CellForIdx", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>, false>(this, ___internal_method, tableView, idx);
}
template <typename T> inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::GetIdForValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "GetIdForValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "GetLabelForId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id);
}
template <typename T> inline T GlobalNamespace::EnumTableViewDataSource_1<T>::GetValueForId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "GetValueForId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, id);
}
template <typename T> inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForValue(T value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
template <typename T> inline ::GlobalNamespace::EnumTableViewDataSource_1<T>* GlobalNamespace::EnumTableViewDataSource_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnumTableViewDataSource_1<T>*>());
}
template <typename T> inline void GlobalNamespace::EnumTableViewDataSource_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::EnumTableViewDataSource_1<T>::EnumTableViewDataSource_1() {}
