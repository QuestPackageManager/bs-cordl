#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveTypeCollectionInstallerSO.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeCollectionInstallerSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x37520f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37521c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>& GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::__cordl_internal_get__missionObjectiveTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveTypes;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>> const& GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::__cordl_internal_get__missionObjectiveTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveTypes;
}
constexpr void GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::__cordl_internal_set__missionObjectiveTypes(::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveTypes = value;
}
inline void GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO* GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO::MissionObjectiveTypeCollectionInstallerSO() {}
