#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnumTableViewDataSource_1_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "GlobalNamespace/zzzz__TextOnlyTableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
template <typename T> constexpr GlobalNamespace::EnumTableViewDataSource_1<T>::operator ::HMUI::__TableView__IDataSource*() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
template <typename T> constexpr ::GlobalNamespace::TextOnlyTableCell*& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cellPrefab;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextOnlyTableCell*> const& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cellPrefab;
}
template <typename T> constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__cellPrefab(::GlobalNamespace::TextOnlyTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr float_t& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cellHeight;
}
template <typename T> constexpr float_t const& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cellHeight;
}
template <typename T> constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__cellHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cellHeight = value;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____values;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____values;
}
template <typename T> constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__values(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline float_t GlobalNamespace::EnumTableViewDataSource_1<T>::CellSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                                                                             "CellSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                                                                             "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::HMUI::TableCell* GlobalNamespace::EnumTableViewDataSource_1<T>::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(this, ___internal_method, tableView, idx);
}
template <typename T> inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::GetIdForValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "GetIdForValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "GetLabelForId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id);
}
template <typename T> inline T GlobalNamespace::EnumTableViewDataSource_1<T>::GetValueForId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "GetValueForId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, id);
}
template <typename T> inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), "GetLabelForValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
template <typename T> inline ::GlobalNamespace::EnumTableViewDataSource_1<T>* GlobalNamespace::EnumTableViewDataSource_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnumTableViewDataSource_1<T>*>());
}
template <typename T> inline void GlobalNamespace::EnumTableViewDataSource_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::EnumTableViewDataSource_1<T>::EnumTableViewDataSource_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
