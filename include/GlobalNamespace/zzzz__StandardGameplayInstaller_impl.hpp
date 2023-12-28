#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__StandardGameplayInstaller_def.hpp"
#include "GlobalNamespace/zzzz__StandardGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardGameplayInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardGameplayInstaller::*)()>(
    &::GlobalNamespace::StandardGameplayInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x22731f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardGameplayInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardGameplayInstaller::*)()>(&::GlobalNamespace::StandardGameplayInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2273564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardGameplaySceneSetupData*& GlobalNamespace::StandardGameplayInstaller::__get__standardSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardSceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardGameplaySceneSetupData*> const& GlobalNamespace::StandardGameplayInstaller::__get__standardSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardSceneSetupData;
}
constexpr void GlobalNamespace::StandardGameplayInstaller::__set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::StandardGameplayInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardGameplayInstaller* GlobalNamespace::StandardGameplayInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardGameplayInstaller*>());
}
inline void GlobalNamespace::StandardGameplayInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardGameplayInstaller::StandardGameplayInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
