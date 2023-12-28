#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BeatLine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInstaller::*)()>(
    &::GlobalNamespace::BeatmapObjectsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x226f0c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInstaller::*)()>(&::GlobalNamespace::BeatmapObjectsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameNoteController*& GlobalNamespace::BeatmapObjectsInstaller::__get__normalBasicNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBasicNotePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameNoteController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__normalBasicNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBasicNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__normalBasicNotePrefab(::GlobalNamespace::GameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalBasicNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameNoteController*& GlobalNamespace::BeatmapObjectsInstaller::__get__proModeNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proModeNotePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameNoteController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__proModeNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proModeNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__proModeNotePrefab(::GlobalNamespace::GameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proModeNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameNoteController*& GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderHeadNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadNotePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameNoteController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderHeadNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__burstSliderHeadNotePrefab(::GlobalNamespace::GameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderHeadNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BurstSliderGameNoteController*& GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNotePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BurstSliderGameNoteController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__burstSliderNotePrefab(::GlobalNamespace::BurstSliderGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BurstSliderGameNoteController*& GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderFillPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderFillPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BurstSliderGameNoteController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderFillPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderFillPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__burstSliderFillPrefab(::GlobalNamespace::BurstSliderGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderFillPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BombNoteController*& GlobalNamespace::BeatmapObjectsInstaller::__get__bombNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombNoteController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__bombNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__bombNotePrefab(::GlobalNamespace::BombNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObstacleController*& GlobalNamespace::BeatmapObjectsInstaller::__get__obstaclePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__obstaclePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__obstaclePrefab(::GlobalNamespace::ObstacleController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstaclePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderController*& GlobalNamespace::BeatmapObjectsInstaller::__get__sliderShortPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderShortPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__sliderShortPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderShortPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__sliderShortPrefab(::GlobalNamespace::SliderController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderShortPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderController*& GlobalNamespace::BeatmapObjectsInstaller::__get__sliderMediumPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMediumPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__sliderMediumPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMediumPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__sliderMediumPrefab(::GlobalNamespace::SliderController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderMediumPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderController*& GlobalNamespace::BeatmapObjectsInstaller::__get__sliderLongPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderLongPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__sliderLongPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderLongPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__sliderLongPrefab(::GlobalNamespace::SliderController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderLongPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteLineConnectionController*& GlobalNamespace::BeatmapObjectsInstaller::__get__noteLineConnectionControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineConnectionControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteLineConnectionController*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__noteLineConnectionControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineConnectionControllerPrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__noteLineConnectionControllerPrefab(::GlobalNamespace::NoteLineConnectionController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteLineConnectionControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatLine*& GlobalNamespace::BeatmapObjectsInstaller::__get__beatLinePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLinePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLine*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__beatLinePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLinePrefab;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__beatLinePrefab(::GlobalNamespace::BeatLine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatLinePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::BeatmapObjectsInstaller::__get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& GlobalNamespace::BeatmapObjectsInstaller::__get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::BeatmapObjectsInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapObjectsInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectsInstaller* GlobalNamespace::BeatmapObjectsInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectsInstaller*>());
}
inline void GlobalNamespace::BeatmapObjectsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInstaller::BeatmapObjectsInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
