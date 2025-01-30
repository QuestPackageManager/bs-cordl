#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapSaveData)
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class EventData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class NoteData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ObstacleData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class SliderData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class SpecialEventKeywordFiltersData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class WaypointData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData);
// Dependencies System.Object
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData
class CORDL_TYPE BeatmapSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _events, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__events, put = __cordl_internal_set__events)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* _events;

  /// @brief Field _notes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__notes, put = __cordl_internal_set__notes)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* _notes;

  /// @brief Field _obstacles, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacles,
                      put = __cordl_internal_set__obstacles)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* _obstacles;

  /// @brief Field _sliders, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sliders, put = __cordl_internal_set__sliders)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* _sliders;

  /// @brief Field _specialEventsKeywordFilters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__specialEventsKeywordFilters,
                      put = __cordl_internal_set__specialEventsKeywordFilters)) ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* _specialEventsKeywordFilters;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::StringW _version;

  /// @brief Field _waypoints, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__waypoints,
                      put = __cordl_internal_set__waypoints)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* _waypoints;

  __declspec(property(get = get_events)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events;

  __declspec(property(get = get_notes)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* notes;

  __declspec(property(get = get_obstacles)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* obstacles;

  __declspec(property(get = get_sliders)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* sliders;

  __declspec(property(get = get_specialEventsKeywordFilters)) ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* specialEventsKeywordFilters;

  __declspec(property(get = get_version)) ::StringW version;

  __declspec(property(get = get_waypoints)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* waypoints;

  /// @brief Method ConvertBeatmapSaveDataPreV2_5_0Inline, addr 0x2708e04, size 0x33c, virtual false, abstract: false, final false
  inline void ConvertBeatmapSaveDataPreV2_5_0Inline();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events,
                                                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* notes,
                                                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* sliders,
                                                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* waypoints,
                                                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* obstacles,
                                                                                   ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* specialEventsKeywordFilters);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* const& __cordl_internal_get__events() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*& __cordl_internal_get__events();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* const& __cordl_internal_get__notes() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>*& __cordl_internal_get__notes();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* const& __cordl_internal_get__obstacles() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>*& __cordl_internal_get__obstacles();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* const& __cordl_internal_get__sliders() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>*& __cordl_internal_get__sliders();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* const& __cordl_internal_get__specialEventsKeywordFilters() const;

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*& __cordl_internal_get__specialEventsKeywordFilters();

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* const& __cordl_internal_get__waypoints() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>*& __cordl_internal_get__waypoints();

  constexpr void __cordl_internal_set__events(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* value);

  constexpr void __cordl_internal_set__notes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* value);

  constexpr void __cordl_internal_set__obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* value);

  constexpr void __cordl_internal_set__sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* value);

  constexpr void __cordl_internal_set__specialEventsKeywordFilters(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* value);

  constexpr void __cordl_internal_set__version(::StringW value);

  constexpr void __cordl_internal_set__waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* value);

  /// @brief Method .ctor, addr 0x2708d74, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* notes,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* sliders,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* waypoints,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* obstacles,
                    ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* specialEventsKeywordFilters);

  /// @brief Method get_events, addr 0x2708d44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* get_events();

  /// @brief Method get_notes, addr 0x2708d4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* get_notes();

  /// @brief Method get_obstacles, addr 0x2708d64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* get_obstacles();

  /// @brief Method get_sliders, addr 0x2708d54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* get_sliders();

  /// @brief Method get_specialEventsKeywordFilters, addr 0x2708d6c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* get_specialEventsKeywordFilters();

  /// @brief Method get_version, addr 0x2708d3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  /// @brief Method get_waypoints, addr 0x2708d5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* get_waypoints();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13427 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"2.6.0" };

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field _events, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* ____events;

  /// @brief Field _notes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>* ____notes;

  /// @brief Field _sliders, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>* ____sliders;

  /// @brief Field _waypoints, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>* ____waypoints;

  /// @brief Field _obstacles, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>* ____obstacles;

  /// @brief Field _specialEventsKeywordFilters, offset: 0x40, size: 0x8, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* ____specialEventsKeywordFilters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, ____events) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, ____notes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, ____sliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, ____waypoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, ____obstacles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, ____specialEventsKeywordFilters) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, 0x48>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData");
