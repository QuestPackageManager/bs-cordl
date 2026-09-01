#pragma once
// IWYU pragma private; include "Unity\Hierarchy\HierarchyPropertyUnmanaged_1.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyId_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyUnmanaged_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyId_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "Unity/Hierarchy/zzzz__IHierarchyProperty_1_def.hpp"
template <typename T> inline void Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchy, property);
}
template <typename T> inline void Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::SetValue(::by_ref<::Unity::Hierarchy::HierarchyNode> node, T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(),
                                                                                         { "SetValue", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, value);
}
template <typename T> inline T Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::GetValue(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(), { "GetValue", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, node);
}
template <typename T> inline bool Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Equals(::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline ::StringW Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline T Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Unity_Hierarchy_IHierarchyProperty_T__GetValue(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(),
                                                           { "Unity.Hierarchy.IHierarchyProperty<T>.GetValue", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, node);
}
template <typename T> inline void Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::Unity_Hierarchy_IHierarchyProperty_T__SetValue(::by_ref<::Unity::Hierarchy::HierarchyNode> node, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(),
                                              { "Unity.Hierarchy.IHierarchyProperty<T>.SetValue", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, value);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>"
template <typename T> constexpr Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*
Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::i___System__IEquatable_1___Unity__Hierarchy__HierarchyPropertyUnmanaged_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Hierarchy::IHierarchyProperty_1<T>"
template <typename T> constexpr Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::operator ::Unity::Hierarchy::IHierarchyProperty_1<T>*() {
  return static_cast<::Unity::Hierarchy::IHierarchyProperty_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Hierarchy::IHierarchyProperty_1<T>"
template <typename T> constexpr ::Unity::Hierarchy::IHierarchyProperty_1<T>* Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>::i___Unity__Hierarchy__IHierarchyProperty_1_T_() {
  return static_cast<::Unity::Hierarchy::IHierarchyProperty_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
