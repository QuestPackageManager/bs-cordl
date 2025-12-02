#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/ExampleCustomIntegrationConfig.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfigBase_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ExampleCustomIntegrationConfig_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig.GetCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::*)()>(
    &::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::GetCamera)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x582e8cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::*)()>(
    &::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x582e93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::GetCamera() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig* Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::ExampleCustomIntegrationConfig() {}
