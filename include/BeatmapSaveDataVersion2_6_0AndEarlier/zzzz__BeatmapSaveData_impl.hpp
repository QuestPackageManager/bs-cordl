#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier\BeatmapSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__EventData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__NoteData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ObstacleData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SliderData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventKeywordFiltersData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__WaypointData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_events
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_events", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_notes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_notes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_notes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_sliders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_sliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_sliders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_waypoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_waypoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_waypoints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_obstacles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_obstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_obstacles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_specialEventsKeywordFilters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_specialEventsKeywordFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_specialEventsKeywordFilters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>*, ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*)>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x375f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>*>(),
                                                                 ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.ConvertBeatmapSaveDataPreV2_5_0Inline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0Inline)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x375f8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "ConvertBeatmapSaveDataPreV2_5_0Inline", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____events;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* const&
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____events;
}
constexpr void
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_set__events(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____events = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>*& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__notes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notes;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* const&
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__notes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notes;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_set__notes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notes = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>*& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__sliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliders;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* const&
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__sliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliders;
}
constexpr void
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_set__sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliders = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>*& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__waypoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waypoints;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* const&
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__waypoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waypoints;
}
constexpr void
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_set__waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waypoints = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>*& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* const&
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr void
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_set__obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacles = value;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__specialEventsKeywordFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsKeywordFilters;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* const&
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_get__specialEventsKeywordFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsKeywordFilters;
}
constexpr void
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__cordl_internal_set__specialEventsKeywordFilters(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specialEventsKeywordFilters = value;
}
inline ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_events() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_events", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_notes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_notes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_sliders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_sliders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_waypoints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_waypoints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_obstacles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_obstacles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>*>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_specialEventsKeywordFilters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "get_specialEventsKeywordFilters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events,
                                                                          ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* notes,
                                                                          ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* sliders,
                                                                          ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* waypoints,
                                                                          ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* obstacles,
                                                                          ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* specialEventsKeywordFilters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>*>(),
                                                               ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events, notes, sliders, waypoints, obstacles, specialEventsKeywordFilters);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0Inline() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(), { "ConvertBeatmapSaveDataPreV2_5_0Inline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*
BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events,
                                                                 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* notes,
                                                                 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* sliders,
                                                                 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* waypoints,
                                                                 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* obstacles,
                                                                 ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* specialEventsKeywordFilters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(events, notes, sliders, waypoints, obstacles, specialEventsKeywordFilters));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapSaveData() {}
