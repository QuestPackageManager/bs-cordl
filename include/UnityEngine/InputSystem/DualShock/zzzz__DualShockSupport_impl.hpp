#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/DualShockSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__DualShockSupport_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockSupport.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::DualShock::DualShockSupport::Initialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65a61a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockSupport*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::DualShock::DualShockSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockSupport*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::DualShock::DualShockSupport::DualShockSupport() {}
