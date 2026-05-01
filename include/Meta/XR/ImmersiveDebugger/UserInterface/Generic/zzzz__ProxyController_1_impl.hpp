#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ProxyController_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ProxyController_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename ControllerType> constexpr ControllerType& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::__cordl_internal_get__Target_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Target_k__BackingField;
}
template <typename ControllerType>
constexpr ControllerType const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::__cordl_internal_get__Target_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Target_k__BackingField;
}
template <typename ControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::__cordl_internal_set__Target_k__BackingField(ControllerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____Target_k__BackingField, value);
}
template <typename ControllerType> inline ControllerType Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::get_Target() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>::get(),
                                               "get_Target", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<ControllerType, false>(this, ___internal_method);
}
template <typename ControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::set_Target(ControllerType value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>::get(), "set_Target",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ControllerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename ControllerType>
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::Fill(
    ControllerType target, ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* targets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>::get(), "Fill",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ControllerType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, targets);
}
template <typename ControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::Fill() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename ControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename ControllerType>
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>());
}
// Ctor Parameters []
template <typename ControllerType> constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::ProxyController_1() {}
