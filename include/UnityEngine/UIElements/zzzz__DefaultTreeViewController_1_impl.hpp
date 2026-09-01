#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DefaultTreeViewController_1.hpp"
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
  this->___m_TreeDataController = value;
}
template <typename T> inline ::UnityEngine::UIElements::TreeDataController_1<T>* UnityEngine::UIElements::DefaultTreeViewController_1<T>::get_treeDataController() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(), { "get_treeDataController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TreeDataController_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IList* UnityEngine::UIElements::DefaultTreeViewController_1<T>::get_itemsSource() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::set_itemsSource(::System::Collections::IList* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::SetRootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(),
                                                           { "SetRootItems", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
template <typename T> inline ::System::Object* UnityEngine::UIElements::DefaultTreeViewController_1<T>::GetItemForIndex(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Unity::Hierarchy::HierarchyNode UnityEngine::UIElements::DefaultTreeViewController_1<T>::_SetRootItems_b__6_0(::Unity::Hierarchy::HierarchyNode node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(),
                                                                                         { "<SetRootItems>b__6_0", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNode>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNode>(this, ___internal_method, node);
}
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::_SetRootItems_b__6_1(int32_t id, ::Unity::Hierarchy::HierarchyNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>(),
                                                           { "<SetRootItems>b__6_1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, node);
}
template <typename T> inline ::UnityEngine::UIElements::DefaultTreeViewController_1<T>* UnityEngine::UIElements::DefaultTreeViewController_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DefaultTreeViewController_1<T>::DefaultTreeViewController_1() {}
