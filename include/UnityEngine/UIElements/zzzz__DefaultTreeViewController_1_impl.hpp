#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultTreeViewController_1.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultTreeViewController_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeDataController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemData_1_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::TreeDataController_1<T>*& UnityEngine::UIElements::DefaultTreeViewController_1<T>::__cordl_internal_get_m_TreeDataController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TreeDataController;
}
template <typename T> constexpr ::UnityEngine::UIElements::TreeDataController_1<T>* const& UnityEngine::UIElements::DefaultTreeViewController_1<T>::__cordl_internal_get_m_TreeDataController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TreeDataController;
}
template <typename T> constexpr void UnityEngine::UIElements::DefaultTreeViewController_1<T>::__cordl_internal_set_m_TreeDataController(::UnityEngine::UIElements::TreeDataController_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_TreeDataController, value);
}
template <typename T> inline ::UnityEngine::UIElements::TreeDataController_1<T>* UnityEngine::UIElements::DefaultTreeViewController_1<T>::get_treeDataController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(),
                                                                             "get_treeDataController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TreeDataController_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IList* UnityEngine::UIElements::DefaultTreeViewController_1<T>::get_itemsSource() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::set_itemsSource(::System::Collections::IList* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::SetRootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), "SetRootItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
template <typename T> inline ::System::Object* UnityEngine::UIElements::DefaultTreeViewController_1<T>::GetItemForIndex(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Hierarchy::HierarchyNode UnityEngine::UIElements::DefaultTreeViewController_1<T>::_SetRootItems_b__6_0(::Unity::Hierarchy::HierarchyNode node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), "<SetRootItems>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNode, false>(this, ___internal_method, node);
}
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::_SetRootItems_b__6_1(int32_t id, ::Unity::Hierarchy::HierarchyNode node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), "<SetRootItems>b__6_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, node);
}
template <typename T> inline ::UnityEngine::UIElements::DefaultTreeViewController_1<T>* UnityEngine::UIElements::DefaultTreeViewController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DefaultTreeViewController_1<T>::DefaultTreeViewController_1() {}
