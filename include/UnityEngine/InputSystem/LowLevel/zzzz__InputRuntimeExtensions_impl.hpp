#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\InputRuntimeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputRuntimeExtensions_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
template <typename TCommand>
inline int64_t UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions::DeviceCommand(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, int32_t deviceId, ::by_ref<TCommand> command) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions*>(),
                                              { "DeviceCommand",
                                                { ::i2c::class_of<TCommand>() },
                                                { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<TCommand>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TCommand>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, runtime, deviceId, command);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions::InputRuntimeExtensions() {}
