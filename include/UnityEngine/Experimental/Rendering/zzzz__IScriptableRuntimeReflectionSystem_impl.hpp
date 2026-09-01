#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Rendering\IScriptableRuntimeReflectionSystem.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__IScriptableRuntimeReflectionSystem_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem.TickRealtimeProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::*)()>(
    &::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::TickRealtimeProbes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::TickRealtimeProbes() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
