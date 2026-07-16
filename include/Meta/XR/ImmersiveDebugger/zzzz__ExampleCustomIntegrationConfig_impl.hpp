#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/ExampleCustomIntegrationConfig.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfigBase_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ExampleCustomIntegrationConfig_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig.GetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::*)()>(
    &::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::GetCamera)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a4257c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::*)()>(
    &::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a425ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::GetCamera() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig* Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig::ExampleCustomIntegrationConfig() {}
