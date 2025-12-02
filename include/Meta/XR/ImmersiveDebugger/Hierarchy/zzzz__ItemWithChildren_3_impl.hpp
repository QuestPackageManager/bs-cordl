#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/ItemWithChildren_3.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_1_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__ItemWithChildren_3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename TargetType, typename ChildType, typename ChildTargetType>
constexpr ::System::Collections::Generic::List_1<ChildType>*& Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::__cordl_internal_get__children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
constexpr ::System::Collections::Generic::List_1<ChildType>* const&
Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::__cordl_internal_get__children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
constexpr void
Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::__cordl_internal_set__children(::System::Collections::Generic::List_1<ChildType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____children, value);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::CompareChildren(ChildTargetType lhs, ChildTargetType rhs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lhs, rhs);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline ::ArrayW<ChildTargetType, ::Array<ChildTargetType>*> Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::FetchExpectedChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<ChildTargetType, ::Array<ChildTargetType>*>, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline int32_t Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ComputeNumberOfChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::MarkChildrenDirty() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(),
                                  "MarkChildrenDirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ClearDirtyChildren() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(),
                                  "ClearDirtyChildren", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline ChildType Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::GetChild(ChildTargetType target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(), "GetChild",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ChildTargetType>::get() })));
  return ::cordl_internals::RunMethodRethrow<ChildType, false>(this, ___internal_method, target);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ClearChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::BuildChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::BuildChildrenInternal() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(),
                                  "BuildChildrenInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ComputeNeedsRefresh() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType> inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*
Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>());
}
// Ctor Parameters []
template <typename TargetType, typename ChildType, typename ChildTargetType>
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ItemWithChildren_3() {}
