#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectsInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BeatLine_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInstaller::*)()>(&::GlobalNamespace::BeatmapObjectsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x59f44d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInstaller*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectsInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInstaller::*)()>(&::GlobalNamespace::BeatmapObjectsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f4914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameNoteController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__normalBasicNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBasicNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__normalBasicNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBasicNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__normalBasicNotePrefab(::UnityW<::GlobalNamespace::GameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalBasicNotePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GameNoteController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__proModeNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proModeNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__proModeNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proModeNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__proModeNotePrefab(::UnityW<::GlobalNamespace::GameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proModeNotePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GameNoteController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__burstSliderHeadNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__burstSliderHeadNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__burstSliderHeadNotePrefab(::UnityW<::GlobalNamespace::GameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burstSliderHeadNotePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__burstSliderNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__burstSliderNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__burstSliderNotePrefab(::UnityW<::GlobalNamespace::BurstSliderGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burstSliderNotePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BombNoteController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__bombNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::BombNoteController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__bombNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__bombNotePrefab(::UnityW<::GlobalNamespace::BombNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNotePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__obstaclePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__obstaclePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__obstaclePrefab(::UnityW<::GlobalNamespace::ObstacleController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sliderShortPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderShortPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SliderController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sliderShortPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderShortPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__sliderShortPrefab(::UnityW<::GlobalNamespace::SliderController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderShortPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sliderMediumPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMediumPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SliderController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sliderMediumPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMediumPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__sliderMediumPrefab(::UnityW<::GlobalNamespace::SliderController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderMediumPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderController>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sliderLongPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderLongPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SliderController> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sliderLongPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderLongPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__sliderLongPrefab(::UnityW<::GlobalNamespace::SliderController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderLongPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatLine>& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__beatLinePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLinePrefab;
}
constexpr ::UnityW<::GlobalNamespace::BeatLine> const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__beatLinePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLinePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__beatLinePrefab(::UnityW<::GlobalNamespace::BeatLine> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatLinePrefab = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
inline void GlobalNamespace::BeatmapObjectsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectsInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectsInstaller* GlobalNamespace::BeatmapObjectsInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectsInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInstaller::BeatmapObjectsInstaller() {}
