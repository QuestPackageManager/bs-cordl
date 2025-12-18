#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettings.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettings.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IDebugDisplaySettings::*)()>(
    &::UnityEngine::Rendering::IDebugDisplaySettings::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettings.ForEach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IDebugDisplaySettings::*)(
    ::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*)>(&::UnityEngine::Rendering::IDebugDisplaySettings::ForEach)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettings.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData* (
    ::UnityEngine::Rendering::IDebugDisplaySettings::*)(::UnityEngine::Rendering::IDebugDisplaySettingsData*)>(&::UnityEngine::Rendering::IDebugDisplaySettings::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b66bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IDebugDisplaySettings::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IDebugDisplaySettings::ForEach(::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* onExecute) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onExecute);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine::Rendering::IDebugDisplaySettings::Add(::UnityEngine::Rendering::IDebugDisplaySettingsData* newData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDebugDisplaySettings*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsData*, false>(this, ___internal_method, newData);
}
