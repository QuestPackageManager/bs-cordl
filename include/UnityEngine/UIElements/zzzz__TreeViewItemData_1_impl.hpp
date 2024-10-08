#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewItemData_1.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemData_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
template <typename T> inline int32_t UnityEngine::UIElements::TreeViewItemData_1<T>::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::TreeViewItemData_1<T>::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(),
                                                                             "get_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* UnityEngine::UIElements::TreeViewItemData_1<T>::get_children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(),
                                                                             "get_children", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::TreeViewItemData_1<T>::get_hasChildren() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(),
                                                                             "get_hasChildren", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TreeViewItemData_1<T>::InsertChild(::UnityEngine::UIElements::TreeViewItemData_1<T> child, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(), "InsertChild", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, child, index);
}
template <typename T> inline void UnityEngine::UIElements::TreeViewItemData_1<T>::RemoveChild(int32_t childId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(), "RemoveChild",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, childId);
}
template <typename T> inline int32_t UnityEngine::UIElements::TreeViewItemData_1<T>::GetChildIndex(int32_t itemId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(), "GetChildIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, itemId);
}
template <typename T> inline void UnityEngine::UIElements::TreeViewItemData_1<T>::ReplaceChild(::UnityEngine::UIElements::TreeViewItemData_1<T> newChild) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(), "ReplaceChild", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newChild);
}
// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "T", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "m_Children", ty: "::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T>
constexpr ::UnityEngine::UIElements::TreeViewItemData_1<T>::TreeViewItemData_1(int32_t _id_k__BackingField, T m_Data,
                                                                               ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_Children) noexcept {
  this->_id_k__BackingField = _id_k__BackingField;
  this->m_Data = m_Data;
  this->m_Children = m_Children;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TreeViewItemData_1<T>::TreeViewItemData_1() {}
