#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnChevronObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(
    &::GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23b55c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(
    &::GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b5648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SpawnRotationChevron*& GlobalNamespace::SpawnChevronObjectPoolsInstaller::__get__spawnRotationChevronPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationChevronPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SpawnRotationChevron*> const& GlobalNamespace::SpawnChevronObjectPoolsInstaller::__get__spawnRotationChevronPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationChevronPrefab;
}
constexpr void GlobalNamespace::SpawnChevronObjectPoolsInstaller::__set__spawnRotationChevronPrefab(::GlobalNamespace::SpawnRotationChevron* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnRotationChevronPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnChevronObjectPoolsInstaller* GlobalNamespace::SpawnChevronObjectPoolsInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>());
}
inline void GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnChevronObjectPoolsInstaller::SpawnChevronObjectPoolsInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
