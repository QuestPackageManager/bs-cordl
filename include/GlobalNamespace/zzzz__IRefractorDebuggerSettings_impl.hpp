#pragma once
// IWYU pragma private; include "GlobalNamespace/IRefractorDebuggerSettings.hpp"
#include "GlobalNamespace/zzzz__IRefractorDebuggerSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IRefractorDebuggerSettings.get_addMissingLightActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IRefractorDebuggerSettings::*)()>(
    &::GlobalNamespace::IRefractorDebuggerSettings::get_addMissingLightActions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRefractorDebuggerSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRefractorDebuggerSettings*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IRefractorDebuggerSettings.InvokeLightRetargetEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IRefractorDebuggerSettings::*)(int32_t, int32_t)>(
    &::GlobalNamespace::IRefractorDebuggerSettings::InvokeLightRetargetEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRefractorDebuggerSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRefractorDebuggerSettings*>::get(), 1));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IRefractorDebuggerSettings::get_addMissingLightActions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRefractorDebuggerSettings*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::IRefractorDebuggerSettings::InvokeLightRetargetEvent(int32_t lightId, int32_t refractId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRefractorDebuggerSettings*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, refractId);
}
