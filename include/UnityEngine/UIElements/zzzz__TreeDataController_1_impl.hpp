#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TreeDataController_1.hpp"
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
  this->___m_NodeToItemDataDictionary = value;
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
  this->___m_ItemStack = value;
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
  this->___m_NodeStack = value;
}
template <typename T> inline T UnityEngine::UIElements::TreeDataController_1<T>::GetDataForNode(::Unity::Hierarchy::HierarchyNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeDataController_1<T>*>(), { "GetDataForNode", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNode>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, node);
}
template <typename T>
inline void UnityEngine::UIElements::TreeDataController_1<T>::ConvertTreeViewItemDataToHierarchy(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* list,
                                                                                                 ::System::Func_2<::Unity::Hierarchy::HierarchyNode, ::Unity::Hierarchy::HierarchyNode>* createNode,
                                                                                                 ::System::Action_2<int32_t, ::Unity::Hierarchy::HierarchyNode>* updateDictionary) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeDataController_1<T>*>(),
                                                           { "ConvertTreeViewItemDataToHierarchy",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>(),
                                                               ::i2c::type_of<::System::Func_2<::Unity::Hierarchy::HierarchyNode, ::Unity::Hierarchy::HierarchyNode>*>(),
                                                               ::i2c::type_of<::System::Action_2<int32_t, ::Unity::Hierarchy::HierarchyNode>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, createNode, updateDictionary);
}
template <typename T>
inline void UnityEngine::UIElements::TreeDataController_1<T>::UpdateNodeToDataDictionary(::Unity::Hierarchy::HierarchyNode node, ::UnityEngine::UIElements::TreeViewItemData_1<T> item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeDataController_1<T>*>(),
                          { "UpdateNodeToDataDictionary", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNode>(), ::i2c::type_of<::UnityEngine::UIElements::TreeViewItemData_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, item);
}
template <typename T> inline void UnityEngine::UIElements::TreeDataController_1<T>::ClearNodeToDataDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeDataController_1<T>*>(), { "ClearNodeToDataDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TreeDataController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeDataController_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::TreeDataController_1<T>* UnityEngine::UIElements::TreeDataController_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TreeDataController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TreeDataController_1<T>::TreeDataController_1() {}
