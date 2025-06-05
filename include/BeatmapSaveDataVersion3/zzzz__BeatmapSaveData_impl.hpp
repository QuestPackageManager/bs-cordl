#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BasicEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BombNoteData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BpmChangeEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BurstSliderData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorBoostEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorNoteData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventsCollection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ObstacleData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__RotationEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__SliderData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__WaypointData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::BeatmapSaveData::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>*,
    ::BeatmapSaveDataVersion3::FxEventsCollection*, ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*, bool)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x27095c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 17>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bpmEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmEvents;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bpmEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_bpmEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bpmEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_rotationEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationEvents;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_rotationEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_rotationEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotationEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotes;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotes;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_colorNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bombNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotes;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bombNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotes;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_bombNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bombNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacles;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacles;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstacles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_sliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliders;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_sliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliders;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_burstSliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burstSliders;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_burstSliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burstSliders;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_burstSliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___burstSliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_waypoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_waypoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waypoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicBeatmapEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEvents;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicBeatmapEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicBeatmapEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorBoostBeatmapEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostBeatmapEvents;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorBoostBeatmapEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostBeatmapEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorBoostBeatmapEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightColorEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightColorEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxGroups;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightColorEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightRotationEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightRotationEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxGroups;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_lightRotationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightRotationEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightTranslationEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightTranslationEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_lightTranslationEventBoxGroups(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightTranslationEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_vfxEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfxEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_vfxEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfxEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vfxEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get__fxEventsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get__fxEventsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fxEventsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicEventTypesWithKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicEventTypesWithKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_basicEventTypesWithKeywords(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicEventTypesWithKeywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_useNormalEventsAsCompatibleEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNormalEventsAsCompatibleEvents;
}
constexpr bool const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_useNormalEventsAsCompatibleEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNormalEventsAsCompatibleEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_useNormalEventsAsCompatibleEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useNormalEventsAsCompatibleEvents = value;
}
inline void BeatmapSaveDataVersion3::BeatmapSaveData::_ctor(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* colorNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* bombNotes,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* obstacles, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* sliders,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* burstSliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* waypoints,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* basicBeatmapEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* colorBoostBeatmapEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* lightColorEventBoxGroups,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* lightRotationEventBoxGroups,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* vfxEventBoxGroups, ::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection,
    ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 17>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmEvents, rotationEvents, colorNotes, bombNotes, obstacles, sliders, burstSliders, waypoints, basicBeatmapEvents,
                                                          colorBoostBeatmapEvents, lightColorEventBoxGroups, lightRotationEventBoxGroups, lightTranslationEventBoxGroups, vfxEventBoxGroups,
                                                          fxEventsCollection, basicEventTypesWithKeywords, useNormalEventsAsCompatibleEvents);
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData* BeatmapSaveDataVersion3::BeatmapSaveData::New_ctor(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* colorNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* bombNotes,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* obstacles, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* sliders,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* burstSliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* waypoints,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* basicBeatmapEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* colorBoostBeatmapEvents,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* lightColorEventBoxGroups,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* lightRotationEventBoxGroups,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* vfxEventBoxGroups, ::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection,
    ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::BeatmapSaveData*>(
      bpmEvents, rotationEvents, colorNotes, bombNotes, obstacles, sliders, burstSliders, waypoints, basicBeatmapEvents, colorBoostBeatmapEvents, lightColorEventBoxGroups, lightRotationEventBoxGroups,
      lightTranslationEventBoxGroups, vfxEventBoxGroups, fxEventsCollection, basicEventTypesWithKeywords, useNormalEventsAsCompatibleEvents));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveData() {}
