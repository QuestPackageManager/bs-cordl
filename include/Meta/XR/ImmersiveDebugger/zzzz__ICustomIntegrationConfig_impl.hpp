#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/ICustomIntegrationConfig.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ICustomIntegrationConfig_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig.GetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig::*)()>(
    &::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig::GetCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig::GetCamera() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
