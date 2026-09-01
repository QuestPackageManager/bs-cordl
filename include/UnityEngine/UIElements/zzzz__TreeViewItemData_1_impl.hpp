#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TreeViewItemData_1.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemData_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
template <typename T> inline int32_t UnityEngine::UIElements::TreeViewItemData_1<T>::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewItemData_1<T>>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::TreeViewItemData_1<T>::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewItemData_1<T>>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* UnityEngine::UIElements::TreeViewItemData_1<T>::get_children() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewItemData_1<T>>(), { "get_children", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "m_Children", ty: "::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::TreeViewItemData_1<T>::TreeViewItemData_1(int32_t _id_k__BackingField, T m_Data,
                                                                               ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_Children) noexcept {
  this->_id_k__BackingField = _id_k__BackingField;
  this->m_Data = m_Data;
  this->m_Children = m_Children;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TreeViewItemData_1<T>::TreeViewItemData_1() {}
