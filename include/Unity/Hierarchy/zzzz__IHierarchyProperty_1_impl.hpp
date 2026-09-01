#pragma once
// IWYU pragma private; include "Unity\Hierarchy\IHierarchyProperty_1.hpp"
#include "Unity/Hierarchy/zzzz__IHierarchyProperty_1_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
template <typename T> inline T Unity::Hierarchy::IHierarchyProperty_1<T>::GetValue(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::IHierarchyProperty_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, node);
}
template <typename T> inline void Unity::Hierarchy::IHierarchyProperty_1<T>::SetValue(::by_ref<::Unity::Hierarchy::HierarchyNode> node, T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::IHierarchyProperty_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, value);
}
