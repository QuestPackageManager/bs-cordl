#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ScriptableRuntimeReflectionSystemSettings_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__IScriptableRuntimeReflectionSystem_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ScriptableRuntimeReflectionSystemWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_system
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2cf4364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get(),
        "set_Internal_ScriptableRuntimeReflectionSystemSettings_system", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* (*)()>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cf44ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get(),
                                    "get_Internal_ScriptableRuntimeReflectionSystemSettings_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cf4504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get(),
                                                 "ScriptingDirtyReflectionSystemInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::setStaticF_s_Instance(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(value));
}
inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get>();
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(
    ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get(),
      "set_Internal_ScriptableRuntimeReflectionSystemSettings_system", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get(),
                                  "get_Internal_ScriptableRuntimeReflectionSystemSettings_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*>::get(),
                                               "ScriptingDirtyReflectionSystemInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptableRuntimeReflectionSystemSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
