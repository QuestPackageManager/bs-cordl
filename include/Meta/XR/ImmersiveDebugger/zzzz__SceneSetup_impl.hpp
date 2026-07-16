#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/SceneSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__SceneSetup_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::SceneSetup.OnLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::SceneSetup::OnLoad)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a40b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::SceneSetup*>(), { "OnLoad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::SceneSetup.SetupImmersiveDebugger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::SceneSetup::SetupImmersiveDebugger)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5a40bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::SceneSetup*>(), { "SetupImmersiveDebugger", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::SceneSetup::OnLoad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::SceneSetup*>(), { "OnLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::SceneSetup::SetupImmersiveDebugger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::SceneSetup*>(), { "SetupImmersiveDebugger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::SceneSetup::SceneSetup() {}
