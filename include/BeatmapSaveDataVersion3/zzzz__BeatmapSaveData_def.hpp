#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapSaveData)
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataVersion3 {
class BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
class BombNoteData;
}
namespace BeatmapSaveDataVersion3 {
class BpmChangeEventData;
}
namespace BeatmapSaveDataVersion3 {
class BurstSliderData;
}
namespace BeatmapSaveDataVersion3 {
class ColorBoostEventData;
}
namespace BeatmapSaveDataVersion3 {
class ColorNoteData;
}
namespace BeatmapSaveDataVersion3 {
class FxEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class FxEventsCollection;
}
namespace BeatmapSaveDataVersion3 {
class LightColorEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class LightRotationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class LightTranslationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class ObstacleData;
}
namespace BeatmapSaveDataVersion3 {
class RotationEventData;
}
namespace BeatmapSaveDataVersion3 {
class SliderData;
}
namespace BeatmapSaveDataVersion3 {
class WaypointData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BeatmapSaveData);
// Dependencies System.Object
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData
class CORDL_TYPE BeatmapSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fxEventsCollection, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__fxEventsCollection, put = __cordl_internal_set__fxEventsCollection)) ::BeatmapSaveDataVersion3::FxEventsCollection* _fxEventsCollection;

  /// @brief Field basicBeatmapEvents, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_basicBeatmapEvents,
                      put = __cordl_internal_set_basicBeatmapEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* basicBeatmapEvents;

  /// @brief Field basicEventTypesWithKeywords, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_basicEventTypesWithKeywords,
                      put = __cordl_internal_set_basicEventTypesWithKeywords)) ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords;

  /// @brief Field bombNotes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bombNotes, put = __cordl_internal_set_bombNotes)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* bombNotes;

  /// @brief Field bpmEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bpmEvents, put = __cordl_internal_set_bpmEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEvents;

  /// @brief Field burstSliders, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_burstSliders,
                      put = __cordl_internal_set_burstSliders)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* burstSliders;

  /// @brief Field colorBoostBeatmapEvents, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_colorBoostBeatmapEvents,
                      put = __cordl_internal_set_colorBoostBeatmapEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* colorBoostBeatmapEvents;

  /// @brief Field colorNotes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_colorNotes, put = __cordl_internal_set_colorNotes)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* colorNotes;

  /// @brief Field lightColorEventBoxGroups, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lightColorEventBoxGroups,
                      put = __cordl_internal_set_lightColorEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* lightColorEventBoxGroups;

  /// @brief Field lightRotationEventBoxGroups, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get_lightRotationEventBoxGroups,
      put = __cordl_internal_set_lightRotationEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* lightRotationEventBoxGroups;

  /// @brief Field lightTranslationEventBoxGroups, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get_lightTranslationEventBoxGroups,
      put = __cordl_internal_set_lightTranslationEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups;

  /// @brief Field obstacles, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacles, put = __cordl_internal_set_obstacles)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* obstacles;

  /// @brief Field rotationEvents, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rotationEvents,
                      put = __cordl_internal_set_rotationEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEvents;

  /// @brief Field sliders, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_sliders, put = __cordl_internal_set_sliders)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* sliders;

  /// @brief Field useNormalEventsAsCompatibleEvents, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_useNormalEventsAsCompatibleEvents, put = __cordl_internal_set_useNormalEventsAsCompatibleEvents)) bool useNormalEventsAsCompatibleEvents;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  /// @brief Field vfxEventBoxGroups, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_vfxEventBoxGroups,
                      put = __cordl_internal_set_vfxEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* vfxEventBoxGroups;

  /// @brief Field waypoints, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_waypoints, put = __cordl_internal_set_waypoints)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* waypoints;

  static inline ::BeatmapSaveDataVersion3::BeatmapSaveData*
  New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* colorNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* bombNotes,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* obstacles, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* sliders,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* burstSliders,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* waypoints,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* basicBeatmapEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* colorBoostBeatmapEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* lightColorEventBoxGroups,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* lightRotationEventBoxGroups,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* vfxEventBoxGroups, ::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection,
           ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents);

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection* const& __cordl_internal_get__fxEventsCollection() const;

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& __cordl_internal_get__fxEventsCollection();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* const& __cordl_internal_get_basicBeatmapEvents() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>*& __cordl_internal_get_basicBeatmapEvents();

  constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* const& __cordl_internal_get_basicEventTypesWithKeywords() const;

  constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*& __cordl_internal_get_basicEventTypesWithKeywords();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* const& __cordl_internal_get_bombNotes() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>*& __cordl_internal_get_bombNotes();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* const& __cordl_internal_get_bpmEvents() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*& __cordl_internal_get_bpmEvents();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* const& __cordl_internal_get_burstSliders() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>*& __cordl_internal_get_burstSliders();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* const& __cordl_internal_get_colorBoostBeatmapEvents() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>*& __cordl_internal_get_colorBoostBeatmapEvents();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* const& __cordl_internal_get_colorNotes() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>*& __cordl_internal_get_colorNotes();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* const& __cordl_internal_get_lightColorEventBoxGroups() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>*& __cordl_internal_get_lightColorEventBoxGroups();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* const& __cordl_internal_get_lightRotationEventBoxGroups() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>*& __cordl_internal_get_lightRotationEventBoxGroups();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* const& __cordl_internal_get_lightTranslationEventBoxGroups() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>*& __cordl_internal_get_lightTranslationEventBoxGroups();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* const& __cordl_internal_get_obstacles() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>*& __cordl_internal_get_obstacles();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* const& __cordl_internal_get_rotationEvents() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>*& __cordl_internal_get_rotationEvents();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* const& __cordl_internal_get_sliders() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>*& __cordl_internal_get_sliders();

  constexpr bool const& __cordl_internal_get_useNormalEventsAsCompatibleEvents() const;

  constexpr bool& __cordl_internal_get_useNormalEventsAsCompatibleEvents();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* const& __cordl_internal_get_vfxEventBoxGroups() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>*& __cordl_internal_get_vfxEventBoxGroups();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* const& __cordl_internal_get_waypoints() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>*& __cordl_internal_get_waypoints();

  constexpr void __cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value);

  constexpr void __cordl_internal_set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* value);

  constexpr void __cordl_internal_set_basicEventTypesWithKeywords(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* value);

  constexpr void __cordl_internal_set_bombNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* value);

  constexpr void __cordl_internal_set_bpmEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* value);

  constexpr void __cordl_internal_set_burstSliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* value);

  constexpr void __cordl_internal_set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* value);

  constexpr void __cordl_internal_set_colorNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* value);

  constexpr void __cordl_internal_set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* value);

  constexpr void __cordl_internal_set_lightRotationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* value);

  constexpr void __cordl_internal_set_lightTranslationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* value);

  constexpr void __cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* value);

  constexpr void __cordl_internal_set_rotationEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* value);

  constexpr void __cordl_internal_set_sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* value);

  constexpr void __cordl_internal_set_useNormalEventsAsCompatibleEvents(bool value);

  constexpr void __cordl_internal_set_version(::StringW value);

  constexpr void __cordl_internal_set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* value);

  constexpr void __cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* value);

  /// @brief Method .ctor, addr 0x270520c, size 0xfc, virtual false, abstract: false, final false
  inline void
  _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEvents,
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
        ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveData(BeatmapSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveData(BeatmapSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13390 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"3.3.0" };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field bpmEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* ___bpmEvents;

  /// @brief Field rotationEvents, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::RotationEventData*>* ___rotationEvents;

  /// @brief Field colorNotes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorNoteData*>* ___colorNotes;

  /// @brief Field bombNotes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BombNoteData*>* ___bombNotes;

  /// @brief Field obstacles, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ObstacleData*>* ___obstacles;

  /// @brief Field sliders, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::SliderData*>* ___sliders;

  /// @brief Field burstSliders, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BurstSliderData*>* ___burstSliders;

  /// @brief Field waypoints, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::WaypointData*>* ___waypoints;

  /// @brief Field basicBeatmapEvents, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BasicEventData*>* ___basicBeatmapEvents;

  /// @brief Field colorBoostBeatmapEvents, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::ColorBoostEventData*>* ___colorBoostBeatmapEvents;

  /// @brief Field lightColorEventBoxGroups, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>* ___lightColorEventBoxGroups;

  /// @brief Field lightRotationEventBoxGroups, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>* ___lightRotationEventBoxGroups;

  /// @brief Field lightTranslationEventBoxGroups, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>* ___lightTranslationEventBoxGroups;

  /// @brief Field vfxEventBoxGroups, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBoxGroup*>* ___vfxEventBoxGroups;

  /// @brief Field _fxEventsCollection, offset: 0x88, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::FxEventsCollection* ____fxEventsCollection;

  /// @brief Field basicEventTypesWithKeywords, offset: 0x90, size: 0x8, def value: None
  ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* ___basicEventTypesWithKeywords;

  /// @brief Field useNormalEventsAsCompatibleEvents, offset: 0x98, size: 0x1, def value: None
  bool ___useNormalEventsAsCompatibleEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___bpmEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___rotationEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___colorNotes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___bombNotes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___obstacles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___sliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___burstSliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___waypoints) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___basicBeatmapEvents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___colorBoostBeatmapEvents) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___lightColorEventBoxGroups) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___lightRotationEventBoxGroups) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___lightTranslationEventBoxGroups) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___vfxEventBoxGroups) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ____fxEventsCollection) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___basicEventTypesWithKeywords) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___useNormalEventsAsCompatibleEvents) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BeatmapSaveData, 0xa0>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData*, "BeatmapSaveDataVersion3", "BeatmapSaveData");
