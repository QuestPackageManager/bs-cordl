#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/ActionManagerForAddon.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__SubManagerForAddon_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ActionManagerForAddon_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon.RegisterSpecialisedWidget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IMember*, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::RegisterSpecialisedWidget)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x58b7db4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon.get_TelemetryAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::get_TelemetryAnnotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58b801c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b8060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::RegisterSpecialisedWidget(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* member,
                                                                                                   ::System::Reflection::MemberInfo* memberInfo,
                                                                                                   ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute,
                                                                                                   ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, member, memberInfo, memberAttribute, handle);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::get_TelemetryAnnotation() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon* Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionManagerForAddon::ActionManagerForAddon() {}
