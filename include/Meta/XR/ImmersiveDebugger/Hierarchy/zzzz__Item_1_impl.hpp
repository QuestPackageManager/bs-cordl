#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/Item_1.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_1_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr T& Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::__cordl_internal_get__owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
template <typename T> constexpr T const& Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::__cordl_internal_get__owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
template <typename T> constexpr void Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::__cordl_internal_set__owner(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____owner, value);
}
template <typename T> inline ::System::Object* Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::get_Owner() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::get_TypedOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>::get(),
                                                                             "get_TypedOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::SetOwner(T owner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>::get(), "SetOwner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::BuildHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, false>(this, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>* Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::Item_1() {}
