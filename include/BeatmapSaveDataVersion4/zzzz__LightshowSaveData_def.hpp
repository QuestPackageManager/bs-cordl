#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LightshowSaveData)
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataVersion4 {
struct BasicEvent;
}
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
namespace BeatmapSaveDataVersion4 {
class BeatmapBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct ColorBoostEvent;
}
namespace BeatmapSaveDataVersion4 {
class EventBoxGroup;
}
namespace BeatmapSaveDataVersion4 {
struct FloatFxEvent;
}
namespace BeatmapSaveDataVersion4 {
struct FxEventBox;
}
namespace BeatmapSaveDataVersion4 {
struct IndexFilter;
}
namespace BeatmapSaveDataVersion4 {
struct LightColorEventBox;
}
namespace BeatmapSaveDataVersion4 {
struct LightColorEvent;
}
namespace BeatmapSaveDataVersion4 {
struct LightRotationEventBox;
}
namespace BeatmapSaveDataVersion4 {
struct LightRotationEvent;
}
namespace BeatmapSaveDataVersion4 {
struct LightTranslationEventBox;
}
namespace BeatmapSaveDataVersion4 {
struct LightTranslationEvent;
}
namespace BeatmapSaveDataVersion4 {
struct Waypoint;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
class LightshowSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion4::LightshowSaveData);
// Type: BeatmapSaveDataVersion4::LightshowSaveData
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion4::LightshowSaveData*
class CORDL_TYPE LightshowSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field basicEventTypesWithKeywords, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_basicEventTypesWithKeywords,
                      put = __cordl_internal_set_basicEventTypesWithKeywords))::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords;

  /// @brief Field basicEvents, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_basicEvents,
                      put = __cordl_internal_set_basicEvents))::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> basicEvents;

  /// @brief Field basicEventsData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_basicEventsData,
                      put = __cordl_internal_set_basicEventsData))::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> basicEventsData;

  /// @brief Field colorBoostEvents, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_colorBoostEvents,
                      put = __cordl_internal_set_colorBoostEvents))::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> colorBoostEvents;

  /// @brief Field colorBoostEventsData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_colorBoostEventsData,
                      put = __cordl_internal_set_colorBoostEventsData))::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> colorBoostEventsData;

  /// @brief Field eventBoxGroups, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_eventBoxGroups,
                      put = __cordl_internal_set_eventBoxGroups))::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*> eventBoxGroups;

  /// @brief Field floatFxEvents, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_floatFxEvents,
                      put = __cordl_internal_set_floatFxEvents))::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*> floatFxEvents;

  /// @brief Field fxEventBoxes, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_fxEventBoxes,
                      put = __cordl_internal_set_fxEventBoxes))::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*> fxEventBoxes;

  /// @brief Field indexFilters, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_indexFilters,
                      put = __cordl_internal_set_indexFilters))::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*> indexFilters;

  /// @brief Field lightColorEventBoxes, offset 0x58, size 0x8
  __declspec(
      property(get = __cordl_internal_get_lightColorEventBoxes,
               put = __cordl_internal_set_lightColorEventBoxes))::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*> lightColorEventBoxes;

  /// @brief Field lightColorEvents, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lightColorEvents,
                      put = __cordl_internal_set_lightColorEvents))::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*> lightColorEvents;

  /// @brief Field lightRotationEventBoxes, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lightRotationEventBoxes,
                      put = __cordl_internal_set_lightRotationEventBoxes))::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox,
                                                                                   ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*> lightRotationEventBoxes;

  /// @brief Field lightRotationEvents, offset 0x70, size 0x8
  __declspec(
      property(get = __cordl_internal_get_lightRotationEvents,
               put = __cordl_internal_set_lightRotationEvents))::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*> lightRotationEvents;

  /// @brief Field lightTranslationEventBoxes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_lightTranslationEventBoxes,
                      put = __cordl_internal_set_lightTranslationEventBoxes))::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox,
                                                                                      ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*> lightTranslationEventBoxes;

  /// @brief Field lightTranslationEvents, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get_lightTranslationEvents,
      put = __cordl_internal_set_lightTranslationEvents))::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*> lightTranslationEvents;

  /// @brief Field useNormalEventsAsCompatibleEvents, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_useNormalEventsAsCompatibleEvents, put = __cordl_internal_set_useNormalEventsAsCompatibleEvents)) bool useNormalEventsAsCompatibleEvents;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  /// @brief Field waypoints, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_waypoints,
                      put = __cordl_internal_set_waypoints))::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> waypoints;

  /// @brief Field waypointsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_waypointsData,
                      put = __cordl_internal_set_waypointsData))::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> waypointsData;

  static inline ::BeatmapSaveDataVersion4::LightshowSaveData* New_ctor();

  constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*& __cordl_internal_get_basicEventTypesWithKeywords();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*> const& __cordl_internal_get_basicEventTypesWithKeywords() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> const& __cordl_internal_get_basicEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>& __cordl_internal_get_basicEvents();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> const& __cordl_internal_get_basicEventsData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>& __cordl_internal_get_basicEventsData();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> const& __cordl_internal_get_colorBoostEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>& __cordl_internal_get_colorBoostEvents();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> const& __cordl_internal_get_colorBoostEventsData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>& __cordl_internal_get_colorBoostEventsData();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*> const& __cordl_internal_get_eventBoxGroups() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*>& __cordl_internal_get_eventBoxGroups();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*> const& __cordl_internal_get_floatFxEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*>& __cordl_internal_get_floatFxEvents();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*> const& __cordl_internal_get_fxEventBoxes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*>& __cordl_internal_get_fxEventBoxes();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*> const& __cordl_internal_get_indexFilters() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*>& __cordl_internal_get_indexFilters();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*> const& __cordl_internal_get_lightColorEventBoxes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*>& __cordl_internal_get_lightColorEventBoxes();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*> const& __cordl_internal_get_lightColorEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*>& __cordl_internal_get_lightColorEvents();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox, ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*> const& __cordl_internal_get_lightRotationEventBoxes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox, ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*>& __cordl_internal_get_lightRotationEventBoxes();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*> const& __cordl_internal_get_lightRotationEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*>& __cordl_internal_get_lightRotationEvents();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox, ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*> const& __cordl_internal_get_lightTranslationEventBoxes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox, ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*>& __cordl_internal_get_lightTranslationEventBoxes();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*> const& __cordl_internal_get_lightTranslationEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*>& __cordl_internal_get_lightTranslationEvents();

  constexpr bool const& __cordl_internal_get_useNormalEventsAsCompatibleEvents() const;

  constexpr bool& __cordl_internal_get_useNormalEventsAsCompatibleEvents();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const& __cordl_internal_get_waypoints() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& __cordl_internal_get_waypoints();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> const& __cordl_internal_get_waypointsData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*>& __cordl_internal_get_waypointsData();

  constexpr void __cordl_internal_set_basicEventTypesWithKeywords(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* value);

  constexpr void __cordl_internal_set_basicEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> value);

  constexpr void __cordl_internal_set_basicEventsData(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> value);

  constexpr void __cordl_internal_set_colorBoostEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> value);

  constexpr void __cordl_internal_set_colorBoostEventsData(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> value);

  constexpr void __cordl_internal_set_eventBoxGroups(::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*> value);

  constexpr void __cordl_internal_set_floatFxEvents(::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*> value);

  constexpr void __cordl_internal_set_fxEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*> value);

  constexpr void __cordl_internal_set_indexFilters(::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*> value);

  constexpr void __cordl_internal_set_lightColorEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*> value);

  constexpr void __cordl_internal_set_lightColorEvents(::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*> value);

  constexpr void __cordl_internal_set_lightRotationEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox, ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*> value);

  constexpr void __cordl_internal_set_lightRotationEvents(::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*> value);

  constexpr void __cordl_internal_set_lightTranslationEventBoxes(::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox, ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*> value);

  constexpr void __cordl_internal_set_lightTranslationEvents(::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*> value);

  constexpr void __cordl_internal_set_useNormalEventsAsCompatibleEvents(bool value);

  constexpr void __cordl_internal_set_version(::StringW value);

  constexpr void __cordl_internal_set_waypoints(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value);

  constexpr void __cordl_internal_set_waypointsData(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> value);

  /// @brief Method .ctor, addr 0x13ff950, size 0x63c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightshowSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightshowSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightshowSaveData(LightshowSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightshowSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightshowSaveData(LightshowSaveData const&) = delete;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field waypoints, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> ___waypoints;

  /// @brief Field waypointsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> ___waypointsData;

  /// @brief Field basicEvents, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> ___basicEvents;

  /// @brief Field basicEventsData, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> ___basicEventsData;

  /// @brief Field colorBoostEvents, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> ___colorBoostEvents;

  /// @brief Field colorBoostEventsData, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> ___colorBoostEventsData;

  /// @brief Field eventBoxGroups, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::EventBoxGroup*, ::Array<::BeatmapSaveDataVersion4::EventBoxGroup*>*> ___eventBoxGroups;

  /// @brief Field indexFilters, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::IndexFilter, ::Array<::BeatmapSaveDataVersion4::IndexFilter>*> ___indexFilters;

  /// @brief Field lightColorEventBoxes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::LightColorEventBox, ::Array<::BeatmapSaveDataVersion4::LightColorEventBox>*> ___lightColorEventBoxes;

  /// @brief Field lightColorEvents, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::LightColorEvent, ::Array<::BeatmapSaveDataVersion4::LightColorEvent>*> ___lightColorEvents;

  /// @brief Field lightRotationEventBoxes, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEventBox, ::Array<::BeatmapSaveDataVersion4::LightRotationEventBox>*> ___lightRotationEventBoxes;

  /// @brief Field lightRotationEvents, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::LightRotationEvent, ::Array<::BeatmapSaveDataVersion4::LightRotationEvent>*> ___lightRotationEvents;

  /// @brief Field lightTranslationEventBoxes, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEventBox, ::Array<::BeatmapSaveDataVersion4::LightTranslationEventBox>*> ___lightTranslationEventBoxes;

  /// @brief Field lightTranslationEvents, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::LightTranslationEvent, ::Array<::BeatmapSaveDataVersion4::LightTranslationEvent>*> ___lightTranslationEvents;

  /// @brief Field fxEventBoxes, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::FxEventBox, ::Array<::BeatmapSaveDataVersion4::FxEventBox>*> ___fxEventBoxes;

  /// @brief Field floatFxEvents, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::FloatFxEvent, ::Array<::BeatmapSaveDataVersion4::FloatFxEvent>*> ___floatFxEvents;

  /// @brief Field basicEventTypesWithKeywords, offset: 0x98, size: 0x8, def value: None
  ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* ___basicEventTypesWithKeywords;

  /// @brief Field useNormalEventsAsCompatibleEvents, offset: 0xa0, size: 0x1, def value: None
  bool ___useNormalEventsAsCompatibleEvents;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"4.0.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::LightshowSaveData, 0xa8>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___waypoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___waypointsData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___basicEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___basicEventsData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___colorBoostEvents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___colorBoostEventsData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___eventBoxGroups) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___indexFilters) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___lightColorEventBoxes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___lightColorEvents) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___lightRotationEventBoxes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___lightRotationEvents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___lightTranslationEventBoxes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___lightTranslationEvents) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___fxEventBoxes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___floatFxEvents) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___basicEventTypesWithKeywords) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightshowSaveData, ___useNormalEventsAsCompatibleEvents) == 0xa0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
NEED_NO_BOX(::BeatmapSaveDataVersion4::LightshowSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::LightshowSaveData*, "BeatmapSaveDataVersion4", "LightshowSaveData");
