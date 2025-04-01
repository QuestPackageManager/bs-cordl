#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitSetupInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppInitSetupInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitSetupInstaller::*)()>(&::GlobalNamespace::AppInitSetupInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2713cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitSetupInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitSetupInstaller::*)()>(&::GlobalNamespace::AppInitSetupInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2713d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInitSetupInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitSetupInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInitSetupInstaller* GlobalNamespace::AppInitSetupInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AppInitSetupInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitSetupInstaller::AppInitSetupInstaller() {}
