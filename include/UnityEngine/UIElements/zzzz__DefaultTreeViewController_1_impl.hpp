#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultTreeViewController_1.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultTreeViewController_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeDataController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemData_1_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::TreeDataController_1<T>*& UnityEngine::UIElements::DefaultTreeViewController_1<T>::__cordl_internal_get_m_TreeDataController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TreeDataController;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TreeDataController_1<T>*> const&
UnityEngine::UIElements::DefaultTreeViewController_1<T>::__cordl_internal_get_m_TreeDataController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TreeDataController;
}
template <typename T> constexpr void UnityEngine::UIElements::DefaultTreeViewController_1<T>::__cordl_internal_set_m_TreeDataController(::UnityEngine::UIElements::TreeDataController_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TreeDataController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
template <typename T> inline int32_t UnityEngine::UIElements::DefaultTreeViewController_1<T>::GetParentId(int32_t id) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
template <typename T> inline bool UnityEngine::UIElements::DefaultTreeViewController_1<T>::HasChildren(int32_t id) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::DefaultTreeViewController_1<T>::GetChildrenIds(int32_t id) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, id);
}
/// @param childIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param rebuildTree: bool (default: true)
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::Move(int32_t id, int32_t newParentId, int32_t childIndex, bool rebuildTree) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, newParentId, childIndex, rebuildTree);
}
template <typename T> inline bool UnityEngine::UIElements::DefaultTreeViewController_1<T>::IsChildOf(int32_t childId, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), "IsChildOf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, childId, id);
}
/// @param rootIds: ::System::Collections::Generic::IEnumerable_1<int32_t>* (default: nullptr)
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::DefaultTreeViewController_1<T>::GetAllItemIds(::System::Collections::Generic::IEnumerable_1<int32_t>* rootIds) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, rootIds);
}
template <typename T> inline ::UnityEngine::UIElements::DefaultTreeViewController_1<T>* UnityEngine::UIElements::DefaultTreeViewController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::DefaultTreeViewController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultTreeViewController_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DefaultTreeViewController_1<T>::DefaultTreeViewController_1() {}
