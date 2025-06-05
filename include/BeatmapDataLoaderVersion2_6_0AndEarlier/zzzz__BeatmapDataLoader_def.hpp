#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion2_6_0AndEarlier/BeatmapDataLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeAndRotationConverter_def.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_BasicEventConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_ObstacleConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_SliderConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_WaypointConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader___c;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader___c__DisplayClass1_0;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader___c__DisplayClass2_0;
}
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveDataItem;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveData;
}
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
struct ObstacleType;
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
namespace BeatmapSaveDataVersion4 {
class LightshowSaveData;
}
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
class IBeatmapLightEventConverter;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class RotationTimeProcessor;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class WaypointData;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_BasicEventConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_ObstacleConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_SliderConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader_WaypointConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader___c;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader___c__DisplayClass1_0;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class BeatmapDataLoader___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0);
// Dependencies BeatToTimeAndRotationConverter
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/ColorNoteConverter
class CORDL_TYPE BeatmapDataLoader_ColorNoteConverter : public ::GlobalNamespace::BeatToTimeAndRotationConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x27165a0, size 0x18c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* n);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                          ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x2716580, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_ColorNoteConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_ColorNoteConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_ColorNoteConverter(BeatmapDataLoader_ColorNoteConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_ColorNoteConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_ColorNoteConverter(BeatmapDataLoader_ColorNoteConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies BeatToTimeAndRotationConverter
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/ObstacleConverter
class CORDL_TYPE BeatmapDataLoader_ObstacleConverter : public ::GlobalNamespace::BeatToTimeAndRotationConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x271672c, size 0x180, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData* o);

  /// @brief Method GetHeightForObstacleType, addr 0x2717018, size 0x14, virtual false, abstract: false, final false
  static inline int32_t GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType);

  /// @brief Method GetLayerForObstacleType, addr 0x2717008, size 0x10, virtual false, abstract: false, final false
  static inline int32_t GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                         ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x2716588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_ObstacleConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_ObstacleConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_ObstacleConverter(BeatmapDataLoader_ObstacleConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_ObstacleConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_ObstacleConverter(BeatmapDataLoader_ObstacleConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13526 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies BeatToTimeAndRotationConverter
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/WaypointConverter
class CORDL_TYPE BeatmapDataLoader_WaypointConverter : public ::GlobalNamespace::BeatToTimeAndRotationConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x27168ac, size 0x110, virtual false, abstract: false, final false
  inline ::GlobalNamespace::WaypointData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData* waypointSaveData);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                         ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x2716590, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_WaypointConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_WaypointConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_WaypointConverter(BeatmapDataLoader_WaypointConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_WaypointConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_WaypointConverter(BeatmapDataLoader_WaypointConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13527 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies BeatToTimeAndRotationConverter
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/SliderConverter
class CORDL_TYPE BeatmapDataLoader_SliderConverter : public ::GlobalNamespace::BeatToTimeAndRotationConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x27169bc, size 0x1c4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData* s);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                       ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x2716598, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_SliderConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_SliderConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_SliderConverter(BeatmapDataLoader_SliderConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_SliderConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_SliderConverter(BeatmapDataLoader_SliderConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13528 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies BeatToTimeConverter
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/BasicEventConverter
class CORDL_TYPE BeatmapDataLoader_BasicEventConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  /// @brief Field _canUseEnvironmentEventsAndShouldLoadDynamicEvents, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents,
                      put = __cordl_internal_set__canUseEnvironmentEventsAndShouldLoadDynamicEvents)) bool _canUseEnvironmentEventsAndShouldLoadDynamicEvents;

  /// @brief Field _specialEventsFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__specialEventsFilter,
                      put = __cordl_internal_set__specialEventsFilter)) ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* _specialEventsFilter;

  /// @brief Method Convert, addr 0x2716eac, size 0x154, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*
  New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter,
           bool canUseEnvironmentEventsAndShouldLoadDynamicEvents);

  constexpr bool const& __cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents() const;

  constexpr bool& __cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents();

  constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* const& __cordl_internal_get__specialEventsFilter() const;

  constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*& __cordl_internal_get__specialEventsFilter();

  constexpr void __cordl_internal_set__canUseEnvironmentEventsAndShouldLoadDynamicEvents(bool value);

  constexpr void __cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* value);

  /// @brief Method .ctor, addr 0x2716e7c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter,
                    bool canUseEnvironmentEventsAndShouldLoadDynamicEvents);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_BasicEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BasicEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_BasicEventConverter(BeatmapDataLoader_BasicEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BasicEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_BasicEventConverter(BeatmapDataLoader_BasicEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13529 };

  /// @brief Field _specialEventsFilter, offset: 0x18, size: 0x8, def value: None
  ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* ____specialEventsFilter;

  /// @brief Field _canUseEnvironmentEventsAndShouldLoadDynamicEvents, offset: 0x20, size: 0x1, def value: None
  bool ____canUseEnvironmentEventsAndShouldLoadDynamicEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter, ____specialEventsFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter, ____canUseEnvironmentEventsAndShouldLoadDynamicEvents) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter, 0x28>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies System.Object
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/SpecialEventsFilter
class CORDL_TYPE BeatmapDataLoader_SpecialEventsFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventTypesToFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eventTypesToFilter,
                      put = __cordl_internal_set__eventTypesToFilter)) ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* _eventTypesToFilter;

  /// @brief Method IsEventValid, addr 0x271702c, size 0x64, virtual false, abstract: false, final false
  inline bool IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*
  New_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* const& __cordl_internal_get__eventTypesToFilter() const;

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get__eventTypesToFilter();

  constexpr void __cordl_internal_set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  /// @brief Method .ctor, addr 0x2716b80, size 0x2fc, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_SpecialEventsFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_SpecialEventsFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_SpecialEventsFilter(BeatmapDataLoader_SpecialEventsFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_SpecialEventsFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_SpecialEventsFilter(BeatmapDataLoader_SpecialEventsFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13530 };

  /// @brief Field _eventTypesToFilter, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* ____eventTypesToFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter, ____eventTypesToFilter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies System.Object
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/<>c
class CORDL_TYPE BeatmapDataLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* __9__3_0;

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJson>b__3_0, addr 0x27170f4, size 0x20, virtual false, abstract: false, final false
  inline bool _GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* note);

  /// @brief Method .ctor, addr 0x27170ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c(BeatmapDataLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c(BeatmapDataLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies BeatmapDifficulty, BeatmapLevelDataVersion, System.Object
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/<>c__DisplayClass1_0
class CORDL_TYPE BeatmapDataLoader___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson)) ::StringW beatmapJson;

  /// @brief Field beatmapLevelDataVersion, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapLevelDataVersion, put = __cordl_internal_set_beatmapLevelDataVersion)) ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field defaultLightshowSaveDataJson, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLightshowSaveDataJson, put = __cordl_internal_set_defaultLightshowSaveDataJson)) ::StringW defaultLightshowSaveDataJson;

  /// @brief Field environmentInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentInfo, put = __cordl_internal_set_environmentInfo)) ::GlobalNamespace::IEnvironmentInfo* environmentInfo;

  /// @brief Field lightEventConverter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lightEventConverter, put = __cordl_internal_set_lightEventConverter)) ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter;

  /// @brief Field loadingForDesignatedEnvironment, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_loadingForDesignatedEnvironment, put = __cordl_internal_set_loadingForDesignatedEnvironment)) bool loadingForDesignatedEnvironment;

  /// @brief Field playerSpecificSettings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field startBpm, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_startBpm, put = __cordl_internal_set_startBpm)) float_t startBpm;

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0* New_ctor();

  /// @brief Method <GetBeatmapDataFromSaveDataJsonAsync>b__0, addr 0x2717114, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapData* _GetBeatmapDataFromSaveDataJsonAsync_b__0();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& __cordl_internal_get_beatmapLevelDataVersion() const;

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion& __cordl_internal_get_beatmapLevelDataVersion();

  constexpr ::StringW const& __cordl_internal_get_defaultLightshowSaveDataJson() const;

  constexpr ::StringW& __cordl_internal_get_defaultLightshowSaveDataJson();

  constexpr ::GlobalNamespace::IEnvironmentInfo* const& __cordl_internal_get_environmentInfo() const;

  constexpr ::GlobalNamespace::IEnvironmentInfo*& __cordl_internal_get_environmentInfo();

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& __cordl_internal_get_lightEventConverter() const;

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& __cordl_internal_get_lightEventConverter();

  constexpr bool const& __cordl_internal_get_loadingForDesignatedEnvironment() const;

  constexpr bool& __cordl_internal_get_loadingForDesignatedEnvironment();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr float_t const& __cordl_internal_get_startBpm() const;

  constexpr float_t& __cordl_internal_get_startBpm();

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  constexpr void __cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value);

  constexpr void __cordl_internal_set_defaultLightshowSaveDataJson(::StringW value);

  constexpr void __cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value);

  constexpr void __cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set_loadingForDesignatedEnvironment(bool value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_startBpm(float_t value);

  /// @brief Method .ctor, addr 0x2715418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c__DisplayClass1_0(BeatmapDataLoader___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c__DisplayClass1_0(BeatmapDataLoader___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13532 };

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  /// @brief Field defaultLightshowSaveDataJson, offset: 0x18, size: 0x8, def value: None
  ::StringW ___defaultLightshowSaveDataJson;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field startBpm, offset: 0x24, size: 0x4, def value: None
  float_t ___startBpm;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x28, size: 0x1, def value: None
  bool ___loadingForDesignatedEnvironment;

  /// @brief Field environmentInfo, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* ___environmentInfo;

  /// @brief Field beatmapLevelDataVersion, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion ___beatmapLevelDataVersion;

  /// @brief Field playerSpecificSettings, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field lightEventConverter, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLightEventConverter* ___lightEventConverter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___beatmapJson) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___defaultLightshowSaveDataJson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___startBpm) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___loadingForDesignatedEnvironment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___playerSpecificSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, ___lightEventConverter) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0, 0x50>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies System.Object
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader/<>c__DisplayClass2_0
class CORDL_TYPE BeatmapDataLoader___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson)) ::StringW beatmapJson;

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0, addr 0x271714c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* _GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  /// @brief Method .ctor, addr 0x271550c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c__DisplayClass2_0(BeatmapDataLoader___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c__DisplayClass2_0(BeatmapDataLoader___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13533 };

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0, ___beatmapJson) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Dependencies System.Object
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion2_6_0AndEarlier.BeatmapDataLoader
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using BasicEventConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter;

  using ColorNoteConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter;

  using ObstacleConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter;

  using SliderConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter;

  using SpecialEventsFilter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter;

  using WaypointConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter;

  using __c = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c;

  using __c__DisplayClass1_0 = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0;

  /// @brief Method BeatmapSaveDataAreSorted, addr 0x27163a4, size 0x1dc, virtual false, abstract: false, final false
  static inline bool BeatmapSaveDataAreSorted(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>* beatmapSaveData);

  /// @brief Method ConvertBeatmapSaveDataPreV2_5_0Inline, addr 0x2716394, size 0x10, virtual false, abstract: false, final false
  static inline void ConvertBeatmapSaveDataPreV2_5_0Inline(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJson, addr 0x2715514, size 0x1b4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapSaveDataJson);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJsonAsync, addr 0x2715420, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataFromSaveData, addr 0x2715808, size 0xb8c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData*
  GetBeatmapDataFromSaveData(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData,
                             ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
                             ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                             ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataFromSaveDataJson, addr 0x27156c8, size 0x140, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveDataJson(::StringW beatmapJson, ::StringW defaultLightshowSaveDataJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                               float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                               ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                               ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataFromSaveDataJsonAsync, addr 0x27152d0, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*
  GetBeatmapDataFromSaveDataJsonAsync(::StringW beatmapJson, ::StringW defaultLightshowSaveDataJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm,
                                      bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader* New_ctor();

  /// @brief Method .ctor, addr 0x2717000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader(BeatmapDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader(BeatmapDataLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13534 };

  /// @brief Field kDefaultNumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultNumberOfLines{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/BasicEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/ColorNoteConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/ObstacleConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/SliderConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/SpecialEventsFilter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/WaypointConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/<>c");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/<>c__DisplayClass1_0");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/<>c__DisplayClass2_0");
