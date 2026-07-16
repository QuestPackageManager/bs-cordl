#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/ScriptableRuntimeReflectionSystemSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ScriptableRuntimeReflectionSystemSettings_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__IScriptableRuntimeReflectionSystem_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ScriptableRuntimeReflectionSystemWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_system
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6b2d558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>(),
                         { "set_Internal_ScriptableRuntimeReflectionSystemSettings_system", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* (*)()>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b2d6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>(),
                                                                                           { "get_Internal_ScriptableRuntimeReflectionSystemSettings_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b2d70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>(), { "ScriptingDirtyReflectionSystemInstance", {}, {} })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::setStaticF_s_Instance(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "s_Instance",
                                    ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>(
      std::forward<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(value));
}
inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "s_Instance",
                                           ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>();
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(
    ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>(),
                          { "set_Internal_ScriptableRuntimeReflectionSystemSettings_system", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>(),
                                                                                         { "get_Internal_ScriptableRuntimeReflectionSystemSettings_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>(), { "ScriptingDirtyReflectionSystemInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptableRuntimeReflectionSystemSettings() {}
