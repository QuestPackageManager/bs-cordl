#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\ButtonForAction.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonForAction_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ActionHook_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction.get_Action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::ActionHook* (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a57fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>(), { "get_Action", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction.set_Action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::*)(::Meta::XR::ImmersiveDebugger::Manager::ActionHook*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::set_Action)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a54b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>(),
                                                                                           { "set_Action", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a57fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionHook*& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::__cordl_internal_get__hook() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hook;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::__cordl_internal_get__hook() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hook;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::__cordl_internal_set__hook(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hook = value;
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::get_Action() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>(), { "get_Action", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::set_Action(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>(),
                                                                                         { "set_Action", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::ButtonForAction() {}
