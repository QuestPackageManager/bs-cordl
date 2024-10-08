#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeData_1.hpp"
#include "UnityEngine/UIElements/zzzz__TreeData_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemData_1_def.hpp"
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::TreeData_1<T>::get_rootItemIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "get_rootItemIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TreeData_1<T>::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* rootItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootItems);
}
template <typename T> inline ::UnityEngine::UIElements::TreeViewItemData_1<T> UnityEngine::UIElements::TreeData_1<T>::GetDataForId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "GetDataForId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TreeViewItemData_1<T>, false>(this, ___internal_method, id);
}
template <typename T> inline int32_t UnityEngine::UIElements::TreeData_1<T>::GetParentId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "GetParentId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
template <typename T> inline void UnityEngine::UIElements::TreeData_1<T>::Move(int32_t id, int32_t newParentId, int32_t childIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "Move", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, newParentId, childIndex);
}
template <typename T> inline bool UnityEngine::UIElements::TreeData_1<T>::HasAncestor(int32_t childId, int32_t ancestorId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "HasAncestor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, childId, ancestorId);
}
template <typename T> inline void UnityEngine::UIElements::TreeData_1<T>::AddItemToParent(::UnityEngine::UIElements::TreeViewItemData_1<T> item, int32_t parentId, int32_t childIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "AddItemToParent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, parentId, childIndex);
}
template <typename T> inline void UnityEngine::UIElements::TreeData_1<T>::RemoveFromParent(int32_t id, int32_t parentId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "RemoveFromParent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, parentId);
}
template <typename T> inline void UnityEngine::UIElements::TreeData_1<T>::UpdateParentTree(::UnityEngine::UIElements::TreeViewItemData_1<T> current) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "UpdateParentTree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, current);
}
template <typename T> inline void UnityEngine::UIElements::TreeData_1<T>::RefreshTree(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* rootItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "RefreshTree", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootItems);
}
template <typename T>
inline void UnityEngine::UIElements::TreeData_1<T>::BuildTree(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items, bool isRoot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeData_1<T>>::get(), "BuildTree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items, isRoot);
}
// Ctor Parameters [CppParam { name: "m_RootItemIds", ty: "::System::Collections::Generic::IList_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Tree", ty:
// "::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::UIElements::TreeViewItemData_1<T>>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_ParentIds", ty:
// "::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_ChildrenIds", ty:
// "::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T>
constexpr ::UnityEngine::UIElements::TreeData_1<T>::TreeData_1(::System::Collections::Generic::IList_1<int32_t>* m_RootItemIds,
                                                               ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_Tree,
                                                               ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_ParentIds,
                                                               ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* m_ChildrenIds) noexcept {
  this->m_RootItemIds = m_RootItemIds;
  this->m_Tree = m_Tree;
  this->m_ParentIds = m_ParentIds;
  this->m_ChildrenIds = m_ChildrenIds;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TreeData_1<T>::TreeData_1() {}
