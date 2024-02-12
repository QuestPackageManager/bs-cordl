#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstallerData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelNoTransitionInstaller.get_standardLevelNoTransitionInstallerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> (
    ::GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(&::GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23473a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                                                 "get_standardLevelNoTransitionInstallerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelNoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelNoTransitionInstaller::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x23473b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(
    &::GlobalNamespace::StandardLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23479d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& GlobalNamespace::StandardLevelNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& GlobalNamespace::StandardLevelNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr void GlobalNamespace::StandardLevelNoTransitionInstaller::__cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>& GlobalNamespace::StandardLevelNoTransitionInstaller::__cordl_internal_get__standardLevelNoTransitionInstallerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelNoTransitionInstallerData;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> const&
GlobalNamespace::StandardLevelNoTransitionInstaller::__cordl_internal_get__standardLevelNoTransitionInstallerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelNoTransitionInstallerData;
}
constexpr void
GlobalNamespace::StandardLevelNoTransitionInstaller::__cordl_internal_set__standardLevelNoTransitionInstallerData(::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelNoTransitionInstallerData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                                               "get_standardLevelNoTransitionInstallerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::StandardLevelNoTransitionInstaller* GlobalNamespace::StandardLevelNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelNoTransitionInstaller*>());
}
inline void GlobalNamespace::StandardLevelNoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelNoTransitionInstaller::StandardLevelNoTransitionInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
