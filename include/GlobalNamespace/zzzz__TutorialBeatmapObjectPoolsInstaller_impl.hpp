#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialBeatmapObjectPoolsInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(&::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x59ff0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(&::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ff284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TutorialNoteController>& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__basicNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::TutorialNoteController> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__basicNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicNotePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_set__basicNotePrefab(::UnityW<::GlobalNamespace::TutorialNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____basicNotePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BombNoteController>& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__bombNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::BombNoteController> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__bombNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_set__bombNotePrefab(::UnityW<::GlobalNamespace::BombNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNotePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController>& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__obstaclePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__obstaclePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_set__obstaclePrefab(::UnityW<::GlobalNamespace::ObstacleController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclePrefab = value;
}
inline void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller* GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::TutorialBeatmapObjectPoolsInstaller() {}
