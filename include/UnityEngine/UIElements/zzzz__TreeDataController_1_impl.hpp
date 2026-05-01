#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeDataController_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TreeDataController_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemData_1_def.hpp"
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>*&
UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_get_m_NodeToItemDataDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeToItemDataDictionary;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* const&
UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_get_m_NodeToItemDataDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeToItemDataDictionary;
}
template <typename T>
constexpr void UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_set_m_NodeToItemDataDictionary(
    ::System::Collections::Generic::Dictionary_2<::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_NodeToItemDataDictionary, value);
}
template <typename T>
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>*&
UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_get_m_ItemStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemStack;
}
template <typename T>
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>* const&
UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_get_m_ItemStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemStack;
}
template <typename T>
constexpr void UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_set_m_ItemStack(
    ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ItemStack, value);
}
template <typename T> constexpr ::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>*& UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_get_m_NodeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeStack;
}
template <typename T>
constexpr ::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>* const& UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_get_m_NodeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeStack;
}
template <typename T>
constexpr void UnityEngine::UIElements::TreeDataController_1<T>::__cordl_internal_set_m_NodeStack(::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_NodeStack, value);
}
template <typename T> inline T UnityEngine::UIElements::TreeDataController_1<T>::GetDataForNode(::Unity::Hierarchy::HierarchyNode node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeDataController_1<T>*>::get(), "GetDataForNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, node);
}
template <typename T>
inline void UnityEngine::UIElements::TreeDataController_1<T>::ConvertTreeViewItemDataToHierarchy(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* list,
                                                                                                 ::System::Func_2<::Unity::Hierarchy::HierarchyNode, ::Unity::Hierarchy::HierarchyNode>* createNode,
                                                                                                 ::System::Action_2<int32_t, ::Unity::Hierarchy::HierarchyNode>* updateDictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeDataController_1<T>*>::get(), "ConvertTreeViewItemDataToHierarchy",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Unity::Hierarchy::HierarchyNode, ::Unity::Hierarchy::HierarchyNode>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, ::Unity::Hierarchy::HierarchyNode>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, createNode, updateDictionary);
}
template <typename T>
inline void UnityEngine::UIElements::TreeDataController_1<T>::UpdateNodeToDataDictionary(::Unity::Hierarchy::HierarchyNode node, ::UnityEngine::UIElements::TreeViewItemData_1<T> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeDataController_1<T>*>::get(), "UpdateNodeToDataDictionary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TreeViewItemData_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, item);
}
template <typename T> inline void UnityEngine::UIElements::TreeDataController_1<T>::ClearNodeToDataDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeDataController_1<T>*>::get(),
                                                                             "ClearNodeToDataDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TreeDataController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeDataController_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::TreeDataController_1<T>* UnityEngine::UIElements::TreeDataController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TreeDataController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TreeDataController_1<T>::TreeDataController_1() {}
