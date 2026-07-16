#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BeatmapLightshowSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapLightshowSaveData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BasicEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorBoostEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventsCollection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBoxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData.get_isEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::*)()>(&::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::get_isEmpty)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3759f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>(), { "get_isEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::*)()>(&::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>*& BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_basicBeatmapEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEvents;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* const&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_basicBeatmapEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basicBeatmapEvents = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>*& BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_colorBoostBeatmapEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostBeatmapEvents;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* const&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_colorBoostBeatmapEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostBeatmapEvents;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorBoostBeatmapEvents = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_lightColorEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* const&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_lightColorEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxGroups;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightColorEventBoxGroups = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_lightRotationEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* const&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_lightRotationEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_set_lightRotationEventBoxGroups(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightRotationEventBoxGroups = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_lightTranslationEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* const&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_lightTranslationEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_set_lightTranslationEventBoxGroups(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightTranslationEventBoxGroups = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>*& BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_vfxEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfxEventBoxGroups;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* const&
BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get_vfxEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfxEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vfxEventBoxGroups = value;
}
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get__fxEventsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection* const& BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_get__fxEventsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fxEventsCollection = value;
}
inline bool BeatmapSaveDataVersion3::BeatmapLightshowSaveData::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>(), { "get_isEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>());
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::BeatmapLightshowSaveData() {}
