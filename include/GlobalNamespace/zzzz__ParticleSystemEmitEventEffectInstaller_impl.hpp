#pragma once
// IWYU pragma private; include "GlobalNamespace\ParticleSystemEmitEventEffectInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffectInstaller_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x599fea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::*)()>(&::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599ff44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>(), { ".ctor", {}, {} })));
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
  this->____particleSystemEventControllerPrefab = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller* GlobalNamespace::ParticleSystemEmitEventEffectInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::ParticleSystemEmitEventEffectInstaller() {}
