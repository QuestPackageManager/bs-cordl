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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<bool>* (::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_SetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a623bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(), { "get_SetState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook.get_GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<bool>* (::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_GetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a623c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(), { "get_GetState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::*)(
    ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::System::Action_1<bool>*, ::System::Func_1<bool>*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a61fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<::System::Func_1<bool>*>() } })));
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
  this->____SetState_k__BackingField = value;
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
  this->____GetState_k__BackingField = value;
}
inline ::System::Action_1<bool>* Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_SetState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(), { "get_SetState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<bool>*>(this, ___internal_method);
}
inline ::System::Func_1<bool>* Meta::XR::ImmersiveDebugger::Manager::GizmoHook::get_GetState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(), { "get_GetState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoHook::_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                   ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::System::Action_1<bool>* setState, ::System::Func_1<bool>* getState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                           ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberInfo, instanceHandle, attribute, setState, getState);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* Meta::XR::ImmersiveDebugger::Manager::GizmoHook::New_ctor(::System::Reflection::MemberInfo* memberInfo,
                                                                                                                    ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                                                    ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                                                                    ::System::Action_1<bool>* setState, ::System::Func_1<bool>* getState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(memberInfo, instanceHandle, attribute, setState, getState));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook::GizmoHook() {}
