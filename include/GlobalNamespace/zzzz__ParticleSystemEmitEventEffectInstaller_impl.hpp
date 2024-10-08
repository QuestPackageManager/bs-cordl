#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEmitEventEffectInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffectInstaller_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3b1d6b8;

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
  constexpr static std::size_t addrs = 0x3b1d760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ParticleSystemEventController>& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__cordl_internal_get__particleSystemEventControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::ParticleSystemEventController> const& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__cordl_internal_get__particleSystemEventControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerPrefab;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__cordl_internal_set__particleSystemEventControllerPrefab(::UnityW<::GlobalNamespace::ParticleSystemEventController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystemEventControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__cordl_internal_get__particleSystemEventControllerInitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerInitialSize;
}
constexpr int32_t const& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__cordl_internal_get__particleSystemEventControllerInitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerInitialSize;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__cordl_internal_set__particleSystemEventControllerInitialSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemEventControllerInitialSize = value;
}
inline void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller* GlobalNamespace::ParticleSystemEmitEventEffectInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>());
}
inline void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::ParticleSystemEmitEventEffectInstaller() {}
