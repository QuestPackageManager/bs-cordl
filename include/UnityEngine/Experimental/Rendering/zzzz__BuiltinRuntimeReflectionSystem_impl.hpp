#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/BuiltinRuntimeReflectionSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__BuiltinRuntimeReflectionSystem_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__IScriptableRuntimeReflectionSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem.TickRealtimeProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::*)()>(
    &::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::TickRealtimeProbes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b2d4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "TickRealtimeProbes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::*)()>(
    &::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b2d508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b2d50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem.BuiltinUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::BuiltinUpdate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b2d4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "BuiltinUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem.Internal_BuiltinRuntimeReflectionSystem_New
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* (*)()>(
    &::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2d510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "Internal_BuiltinRuntimeReflectionSystem_New", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::*)()>(
    &::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b2d554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::TickRealtimeProbes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "TickRealtimeProbes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::BuiltinUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "BuiltinUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { "Internal_BuiltinRuntimeReflectionSystem_New", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*>());
}
/// @brief Convert operator to "::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem"
constexpr UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::operator ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*() noexcept {
  return static_cast<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem"
constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*
UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::i___UnityEngine__Experimental__Rendering__IScriptableRuntimeReflectionSystem() noexcept {
  return static_cast<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::BuiltinRuntimeReflectionSystem() {}
