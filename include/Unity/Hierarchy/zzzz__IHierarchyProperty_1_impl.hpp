#pragma once
// IWYU pragma private; include "Unity/Hierarchy/IHierarchyProperty_1.hpp"
#include "Unity/Hierarchy/zzzz__IHierarchyProperty_1_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
template <typename T> inline T Unity::Hierarchy::IHierarchyProperty_1<T>::GetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::IHierarchyProperty_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, node);
}
template <typename T> inline void Unity::Hierarchy::IHierarchyProperty_1<T>::SetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node, T value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::IHierarchyProperty_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, value);
}
