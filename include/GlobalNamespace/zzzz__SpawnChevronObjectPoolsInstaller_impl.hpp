#pragma once
// IWYU pragma private; include "GlobalNamespace\SpawnChevronObjectPoolsInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnChevronObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(&::GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59a6258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(&::GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a62e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron>& GlobalNamespace::SpawnChevronObjectPoolsInstaller::__cordl_internal_get__spawnRotationChevronPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationChevronPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron> const& GlobalNamespace::SpawnChevronObjectPoolsInstaller::__cordl_internal_get__spawnRotationChevronPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationChevronPrefab;
}
constexpr void GlobalNamespace::SpawnChevronObjectPoolsInstaller::__cordl_internal_set__spawnRotationChevronPrefab(::UnityW<::GlobalNamespace::SpawnRotationChevron> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnRotationChevronPrefab = value;
}
inline void GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnChevronObjectPoolsInstaller* GlobalNamespace::SpawnChevronObjectPoolsInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnChevronObjectPoolsInstaller::SpawnChevronObjectPoolsInstaller() {}
