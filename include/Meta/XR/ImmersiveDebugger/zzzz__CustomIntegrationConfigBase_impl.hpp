#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfigBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfigBase_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ICustomIntegrationConfig_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a56efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a56f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase.GetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::GetCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a56f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a56f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::GetCamera() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase* Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig"
constexpr Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::operator ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig"
constexpr ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig* Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::i___Meta__XR__ImmersiveDebugger__ICustomIntegrationConfig() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::CustomIntegrationConfigBase() {}
