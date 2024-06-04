#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/LightshowSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BasicEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorBoostEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__FloatFxEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__FxEventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__IndexFilter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightTranslationEventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightTranslationEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Waypoint_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion4::LightshowSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion4::LightshowSaveData::*)()>(&::BeatmapSaveDataVersion4::LightshowSaveData::_ctor)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x14f7454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr void
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_waypoints(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waypoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypointsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypointsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypointsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypointsData;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_waypointsData(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waypointsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_basicEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventsData;
}
constexpr void
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_basicEventsData(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicEventsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEvents;
}
constexpr void
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_colorBoostEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorBoostEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEventsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEventsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEventsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEventsData;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_colorBoostEventsData(
    ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorBoostEventsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_eventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroups;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_eventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroups;
}
constexpr void
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_eventBoxGroups(::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_indexFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFilters;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_indexFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFilters;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_indexFilters(::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indexFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*>&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightColorEventBoxes(
    ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightColorEventBoxes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*>&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEvents;
}
constexpr void
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightColorEvents(::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightColorEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox, ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*>&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox, ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightRotationEventBoxes(
    ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox, ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightRotationEventBoxes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*>&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightRotationEvents(
    ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightRotationEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox, ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*>&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox, ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightTranslationEventBoxes(
    ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox, ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightTranslationEventBoxes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*>&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightTranslationEvents(
    ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightTranslationEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_fxEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fxEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_fxEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fxEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_fxEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fxEventBoxes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_floatFxEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floatFxEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_floatFxEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floatFxEvents;
}
constexpr void
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_floatFxEvents(::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___floatFxEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventTypesWithKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*> const&
BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventTypesWithKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_basicEventTypesWithKeywords(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicEventTypesWithKeywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_useNormalEventsAsCompatibleEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNormalEventsAsCompatibleEvents;
}
constexpr bool const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_useNormalEventsAsCompatibleEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNormalEventsAsCompatibleEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_useNormalEventsAsCompatibleEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useNormalEventsAsCompatibleEvents = value;
}
inline ::BeatmapSaveDataVersion4::LightshowSaveData* BeatmapSaveDataVersion4::LightshowSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion4::LightshowSaveData*>());
}
inline void BeatmapSaveDataVersion4::LightshowSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::LightshowSaveData::LightshowSaveData() {}
