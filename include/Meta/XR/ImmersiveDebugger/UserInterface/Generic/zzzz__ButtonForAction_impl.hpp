#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ButtonForAction.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonForAction_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ActionHook_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction.get_Action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::ActionHook* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5842018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>::get(), "get_Action",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction.set_Action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::*)(
    ::Meta::XR::ImmersiveDebugger::Manager::ActionHook*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::set_Action)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x583ebc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>::get(), "set_Action", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5842020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hook)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::get_Action() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>::get(), "get_Action",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::set_Action(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>::get(), "set_Action", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction::ButtonForAction() {}
