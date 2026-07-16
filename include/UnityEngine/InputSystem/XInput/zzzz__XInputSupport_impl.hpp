#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputSupport_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputSupport.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::XInput::XInputSupport::Initialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6586ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputSupport*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::XInput::XInputSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputSupport*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputSupport::XInputSupport() {}
