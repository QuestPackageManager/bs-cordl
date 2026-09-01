#pragma once
// IWYU pragma private; include "GlobalNamespace\MainMenuMissionInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuMissionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainMenuMissionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuMissionInstaller::*)()>(&::GlobalNamespace::MainMenuMissionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x591ef70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuMissionInstaller*>(), { ::i2c::class_of<::GlobalNamespace::MainMenuMissionInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuMissionInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuMissionInstaller::*)()>(&::GlobalNamespace::MainMenuMissionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591f008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuMissionInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& GlobalNamespace::MainMenuMissionInstaller::__cordl_internal_get__missionNodesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& GlobalNamespace::MainMenuMissionInstaller::__cordl_internal_get__missionNodesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr void GlobalNamespace::MainMenuMissionInstaller::__cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNodesManager = value;
}
inline void GlobalNamespace::MainMenuMissionInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainMenuMissionInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuMissionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuMissionInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainMenuMissionInstaller* GlobalNamespace::MainMenuMissionInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainMenuMissionInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuMissionInstaller::MainMenuMissionInstaller() {}
