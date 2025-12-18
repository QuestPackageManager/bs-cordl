#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/GizmoHook.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Hook_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__GizmoHook_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook.get_SetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<bool>* (::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_SetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b4e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>::get(),
                                                                               "get_SetState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook.get_GetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_GetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b4e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>::get(),
                                                                               "get_GetState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::*)(
    ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::System::Action_1<bool>*, ::System::Func_1<bool>*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58b4a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<bool>*& Meta::XR::ImmersiveDebugger::Manager::GizmoHook::__cordl_internal_get__SetState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SetState_k__BackingField;
}
constexpr ::System::Action_1<bool>* const& Meta::XR::ImmersiveDebugger::Manager::GizmoHook::__cordl_internal_get__SetState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SetState_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoHook::__cordl_internal_set__SetState_k__BackingField(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SetState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<bool>*& Meta::XR::ImmersiveDebugger::Manager::GizmoHook::__cordl_internal_get__GetState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GetState_k__BackingField;
}
constexpr ::System::Func_1<bool>* const& Meta::XR::ImmersiveDebugger::Manager::GizmoHook::__cordl_internal_get__GetState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GetState_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoHook::__cordl_internal_set__GetState_k__BackingField(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GetState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Action_1<bool>* Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_SetState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>::get(),
                                                                             "get_SetState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Func_1<bool>* Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_GetState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>::get(),
                                                                             "get_GetState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoHook::_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                   ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::System::Action_1<bool>* setState, ::System::Func_1<bool>* getState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberInfo, instanceHandle, attribute, setState, getState);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* Meta::XR::ImmersiveDebugger::Manager::GizmoHook::New_ctor(::System::Reflection::MemberInfo* memberInfo,
                                                                                                                    ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                                                    ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                                                                    ::System::Action_1<bool>* setState, ::System::Func_1<bool>* getState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(memberInfo, instanceHandle, attribute, setState, getState));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::GizmoHook() {}
