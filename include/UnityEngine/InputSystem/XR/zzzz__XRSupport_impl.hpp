#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRSupport_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRSupport.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::XR::XRSupport::Initialize)> {
  constexpr static std::size_t size = 0xad8;
  constexpr static std::size_t addrs = 0x6585c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRSupport*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::XR::XRSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRSupport*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRSupport::XRSupport() {}
