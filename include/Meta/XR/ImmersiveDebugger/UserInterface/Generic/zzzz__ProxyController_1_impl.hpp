#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\ProxyController_1.hpp"
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
  this->____Target_k__BackingField = value;
}
template <typename ControllerType> inline ControllerType Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::get_Target() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>(), { "get_Target", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<ControllerType>(this, ___internal_method);
}
template <typename ControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::set_Target(ControllerType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>(),
                                                                                         { "set_Target", {}, { ::i2c::type_of<ControllerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename ControllerType>
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::Fill(
    ControllerType target, ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* targets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>(),
          { "Fill",
            {},
            { ::i2c::type_of<ControllerType>(),
              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, targets);
}
template <typename ControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::Fill() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename ControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename ControllerType>
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>());
}
// Ctor Parameters []
template <typename ControllerType> constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>::ProxyController_1() {}
