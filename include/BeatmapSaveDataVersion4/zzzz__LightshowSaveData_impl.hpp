#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4\LightshowSaveData.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BasicEvent_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorBoostEvent_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroup_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__FloatFxEvent_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__FxEventBox_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__IndexFilter_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEventBox_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEvent_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEventBox_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEvent_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightTranslationEventBox_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightTranslationEvent_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Waypoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion4::LightshowSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion4::LightshowSaveData::*)()>(&::BeatmapSaveDataVersion4::LightshowSaveData::_ctor)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x375dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), { ".ctor", {}, {} })));
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
  this->___version = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_waypoints(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___waypoints = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypointsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypointsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_waypointsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypointsData;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_waypointsData(::ArrayW<::BeatmapSaveDataVersion4::Waypoint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___waypointsData = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_basicEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basicEvents = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventsData;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_basicEventsData(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basicEventsData = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_colorBoostEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorBoostEvents = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEventsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEventsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_colorBoostEventsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostEventsData;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_colorBoostEventsData(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorBoostEventsData = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_eventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroups;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_eventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroups;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_eventBoxGroups(::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventBoxGroups = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::IndexFilter>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_indexFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFilters;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::IndexFilter> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_indexFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFilters;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_indexFilters(::ArrayW<::BeatmapSaveDataVersion4::IndexFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexFilters = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightColorEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightColorEventBoxes = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightColorEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightColorEvents(::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightColorEvents = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightRotationEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightRotationEventBoxes = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightRotationEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightRotationEvents(::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightRotationEvents = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightTranslationEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightTranslationEventBoxes = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_lightTranslationEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_lightTranslationEvents(::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightTranslationEvents = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FxEventBox>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_fxEventBoxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fxEventBoxes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FxEventBox> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_fxEventBoxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fxEventBoxes;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_fxEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::FxEventBox> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fxEventBoxes = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent>& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_floatFxEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floatFxEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent> const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_floatFxEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floatFxEvents;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_floatFxEvents(::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___floatFxEvents = value;
}
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventTypesWithKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* const& BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_get_basicEventTypesWithKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr void BeatmapSaveDataVersion4::LightshowSaveData::__cordl_internal_set_basicEventTypesWithKeywords(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basicEventTypesWithKeywords = value;
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
inline void BeatmapSaveDataVersion4::LightshowSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion4::LightshowSaveData* BeatmapSaveDataVersion4::LightshowSaveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion4::LightshowSaveData*>());
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::LightshowSaveData::LightshowSaveData() {}
