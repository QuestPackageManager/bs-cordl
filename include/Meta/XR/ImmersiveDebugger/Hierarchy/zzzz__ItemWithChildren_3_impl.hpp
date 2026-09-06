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
  this->____children = value;
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::CompareChildren(ChildTargetType lhs, ChildTargetType rhs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lhs, rhs);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline ::ArrayW<ChildTargetType> Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::FetchExpectedChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<ChildTargetType>>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline int32_t Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ComputeNumberOfChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::MarkChildrenDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), { "MarkChildrenDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ClearDirtyChildren() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), { "ClearDirtyChildren", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline ChildType Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::GetChild(ChildTargetType target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(),
                                                           { "GetChild", {}, { ::i2c::type_of<ChildTargetType>() } })));
  return ::cordl_internals::RunMethodRethrow<ChildType>(this, ___internal_method, target);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ClearChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::BuildChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::BuildChildrenInternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), { "BuildChildrenInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ComputeNeedsRefresh() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType> inline void Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TargetType, typename ChildType, typename ChildTargetType>
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*
Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>*>());
}
// Ctor Parameters []
template <typename TargetType, typename ChildType, typename ChildTargetType>
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>::ItemWithChildren_3() {}
