#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffectInstaller_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23b0214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b02bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ParticleSystemEventController*& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystemEventControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParticleSystemEventController*> const&
GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystemEventControllerPrefab;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__set__particleSystemEventControllerPrefab(::GlobalNamespace::ParticleSystemEventController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystemEventControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerInitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystemEventControllerInitialSize;
}
constexpr int32_t const& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerInitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystemEventControllerInitialSize;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__set__particleSystemEventControllerInitialSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____particleSystemEventControllerInitialSize = value;
}
inline void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller* GlobalNamespace::ParticleSystemEmitEventEffectInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>());
}
inline void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::ParticleSystemEmitEventEffectInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
