#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyUnmanaged_1.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyId_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyUnmanaged_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyId_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "Unity/Hierarchy/zzzz__IHierarchyProperty_1_def.hpp"
template <typename T> inline void Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy, ::ByRef<::Unity::Hierarchy::HierarchyPropertyId> property) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyPropertyId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hierarchy, property);
}
template <typename T> inline void Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::SetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, value);
}
template <typename T> inline T Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::GetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, node);
}
template <typename T> inline bool Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Equals(::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline ::StringW Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Unity_Hierarchy_IHierarchyProperty_T__GetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(), "Unity.Hierarchy.IHierarchyProperty<T>.GetValue",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, node);
}
template <typename T> inline void Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Unity_Hierarchy_IHierarchyProperty_T__SetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node, T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>::get(),
                                               "Unity.Hierarchy.IHierarchyProperty<T>.SetValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, value);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>"
template <typename T> constexpr Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*
Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::i___System__IEquatable_1___Unity__Hierarchy__HierarchyPropertyUnmanaged_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::Unity::Hierarchy::IHierarchyProperty_1<T>"
template <typename T> constexpr Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::operator ::Unity::Hierarchy::IHierarchyProperty_1<T>*() {
  return static_cast<::Unity::Hierarchy::IHierarchyProperty_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Hierarchy::IHierarchyProperty_1<T>"
template <typename T> constexpr ::Unity::Hierarchy::IHierarchyProperty_1<T>* Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::i___Unity__Hierarchy__IHierarchyProperty_1_T_() {
  return static_cast<::Unity::Hierarchy::IHierarchyProperty_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Property", ty:
// "::Unity::Hierarchy::HierarchyPropertyId", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::HierarchyPropertyUnmanaged_1(::Unity::Hierarchy::Hierarchy* m_Hierarchy, ::Unity::Hierarchy::HierarchyPropertyId m_Property) noexcept {
  this->m_Hierarchy = m_Hierarchy;
  this->m_Property = m_Property;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::HierarchyPropertyUnmanaged_1() {}
