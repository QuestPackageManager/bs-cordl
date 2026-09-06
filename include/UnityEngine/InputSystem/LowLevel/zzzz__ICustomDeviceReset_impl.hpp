#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/ICustomDeviceReset.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ICustomDeviceReset_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset::*)()>(&::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::ICustomDeviceReset::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
