#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__BasicEventConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__ObstacleConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__SliderConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__WaypointConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader____c;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader____c__DisplayClass1_0;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader____c__DisplayClass2_0;
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
class BeatmapObjectData;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
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
class __BeatmapDataLoader__BasicEventConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__ObstacleConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__SliderConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader__WaypointConverter;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader____c;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader____c__DisplayClass1_0;
}
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
class __BeatmapDataLoader____c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0);
// Type: ::ColorNoteConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::ColorNoteConverter*
class CORDL_TYPE __BeatmapDataLoader__ColorNoteConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Method Convert, addr 0x140cd48, size 0xfc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* n);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x140cd28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__ColorNoteConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorNoteConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__ColorNoteConverter(__BeatmapDataLoader__ColorNoteConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorNoteConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__ColorNoteConverter(__BeatmapDataLoader__ColorNoteConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::ObstacleConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::ObstacleConverter*
class CORDL_TYPE __BeatmapDataLoader__ObstacleConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Method Convert, addr 0x140ce44, size 0x10c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData* o);

  /// @brief Method GetHeightForObstacleType, addr 0x140d71c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType);

  /// @brief Method GetLayerForObstacleType, addr 0x140d70c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x140cd30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__ObstacleConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ObstacleConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__ObstacleConverter(__BeatmapDataLoader__ObstacleConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ObstacleConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__ObstacleConverter(__BeatmapDataLoader__ObstacleConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::WaypointConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::WaypointConverter*
class CORDL_TYPE __BeatmapDataLoader__WaypointConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Method Convert, addr 0x140cf50, size 0xd0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::WaypointData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData* waypointSaveData);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x140cd38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__WaypointConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__WaypointConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__WaypointConverter(__BeatmapDataLoader__WaypointConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__WaypointConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__WaypointConverter(__BeatmapDataLoader__WaypointConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::SliderConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::SliderConverter*
class CORDL_TYPE __BeatmapDataLoader__SliderConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Method Convert, addr 0x140d020, size 0x160, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData* s);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x140cd40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__SliderConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SliderConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__SliderConverter(__BeatmapDataLoader__SliderConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SliderConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__SliderConverter(__BeatmapDataLoader__SliderConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::BasicEventConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::BasicEventConverter*
class CORDL_TYPE __BeatmapDataLoader__BasicEventConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _canUseEnvironmentEventsAndShouldLoadDynamicEvents, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents,
                      put = __cordl_internal_set__canUseEnvironmentEventsAndShouldLoadDynamicEvents)) bool _canUseEnvironmentEventsAndShouldLoadDynamicEvents;

  /// @brief Field _spawnRotations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__spawnRotations, put = setStaticF__spawnRotations))::ArrayW<float_t, ::Array<float_t>*> _spawnRotations;

  /// @brief Field _specialEventsFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__specialEventsFilter,
                      put = __cordl_internal_set__specialEventsFilter))::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* _specialEventsFilter;

  /// @brief Method Convert, addr 0x140d49c, size 0x268, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*
  New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter,
           bool canUseEnvironmentEventsAndShouldLoadDynamicEvents);

  /// @brief Method SpawnRotationForEventValue, addr 0x140d794, size 0xb8, virtual false, abstract: false, final false
  static inline float_t SpawnRotationForEventValue(int32_t index);

  constexpr bool const& __cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents() const;

  constexpr bool& __cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents();

  constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*& __cordl_internal_get__specialEventsFilter();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*> const& __cordl_internal_get__specialEventsFilter() const;

  constexpr void __cordl_internal_set__canUseEnvironmentEventsAndShouldLoadDynamicEvents(bool value);

  constexpr void __cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* value);

  /// @brief Method .ctor, addr 0x140d46c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter,
                    bool canUseEnvironmentEventsAndShouldLoadDynamicEvents);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF__spawnRotations();

  static inline void setStaticF__spawnRotations(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BasicEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BasicEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BasicEventConverter(__BeatmapDataLoader__BasicEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BasicEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BasicEventConverter(__BeatmapDataLoader__BasicEventConverter const&) = delete;

  /// @brief Field _specialEventsFilter, offset: 0x18, size: 0x8, def value: None
  ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* ____specialEventsFilter;

  /// @brief Field _canUseEnvironmentEventsAndShouldLoadDynamicEvents, offset: 0x20, size: 0x1, def value: None
  bool ____canUseEnvironmentEventsAndShouldLoadDynamicEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter, ____specialEventsFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter, ____canUseEnvironmentEventsAndShouldLoadDynamicEvents) == 0x20, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::SpecialEventsFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::SpecialEventsFilter*
class CORDL_TYPE __BeatmapDataLoader__SpecialEventsFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventTypesToFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eventTypesToFilter,
                      put = __cordl_internal_set__eventTypesToFilter))::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* _eventTypesToFilter;

  /// @brief Method IsEventValid, addr 0x140d730, size 0x64, virtual false, abstract: false, final false
  inline bool IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*
  New_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get__eventTypesToFilter();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const& __cordl_internal_get__eventTypesToFilter() const;

  constexpr void __cordl_internal_set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  /// @brief Method .ctor, addr 0x140d180, size 0x2ec, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__SpecialEventsFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SpecialEventsFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__SpecialEventsFilter(__BeatmapDataLoader__SpecialEventsFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SpecialEventsFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__SpecialEventsFilter(__BeatmapDataLoader__SpecialEventsFilter const&) = delete;

  /// @brief Field _eventTypesToFilter, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* ____eventTypesToFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter, ____eventTypesToFilter) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c__DisplayClass1_0*
class CORDL_TYPE __BeatmapDataLoader____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson))::StringW beatmapJson;

  /// @brief Field defaultLightshowSaveDataJson, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLightshowSaveDataJson, put = __cordl_internal_set_defaultLightshowSaveDataJson))::StringW defaultLightshowSaveDataJson;

  /// @brief Field environmentInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentInfo, put = __cordl_internal_set_environmentInfo))::GlobalNamespace::IEnvironmentInfo* environmentInfo;

  /// @brief Field loadingForDesignatedEnvironment, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_loadingForDesignatedEnvironment, put = __cordl_internal_set_loadingForDesignatedEnvironment)) bool loadingForDesignatedEnvironment;

  /// @brief Field playerSpecificSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field startBpm, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_startBpm, put = __cordl_internal_set_startBpm)) float_t startBpm;

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0* New_ctor();

  /// @brief Method <GetBeatmapDataFromSaveDataJsonAsync>b__0, addr 0x140d8e0, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapData* _GetBeatmapDataFromSaveDataJsonAsync_b__0();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr ::StringW const& __cordl_internal_get_defaultLightshowSaveDataJson() const;

  constexpr ::StringW& __cordl_internal_get_defaultLightshowSaveDataJson();

  constexpr ::GlobalNamespace::IEnvironmentInfo*& __cordl_internal_get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentInfo*> const& __cordl_internal_get_environmentInfo() const;

  constexpr bool const& __cordl_internal_get_loadingForDesignatedEnvironment() const;

  constexpr bool& __cordl_internal_get_loadingForDesignatedEnvironment();

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr float_t const& __cordl_internal_get_startBpm() const;

  constexpr float_t& __cordl_internal_get_startBpm();

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  constexpr void __cordl_internal_set_defaultLightshowSaveDataJson(::StringW value);

  constexpr void __cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value);

  constexpr void __cordl_internal_set_loadingForDesignatedEnvironment(bool value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_startBpm(float_t value);

  /// @brief Method .ctor, addr 0x140bad8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader____c__DisplayClass1_0(__BeatmapDataLoader____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader____c__DisplayClass1_0(__BeatmapDataLoader____c__DisplayClass1_0 const&) = delete;

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

  /// @brief Field playerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, ___beatmapJson) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, ___defaultLightshowSaveDataJson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, ___startBpm) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, ___loadingForDesignatedEnvironment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, ___environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0, ___playerSpecificSettings) == 0x38, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c__DisplayClass2_0*
class CORDL_TYPE __BeatmapDataLoader____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson))::StringW beatmapJson;

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0, addr 0x140d8fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* _GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  /// @brief Method .ctor, addr 0x140bbd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader____c__DisplayClass2_0(__BeatmapDataLoader____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader____c__DisplayClass2_0(__BeatmapDataLoader____c__DisplayClass2_0 const&) = delete;

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0, ___beatmapJson) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c*
class CORDL_TYPE __BeatmapDataLoader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* __9__3_0;

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJson>b__3_0, addr 0x140d970, size 0x20, virtual false, abstract: false, final false
  inline bool _GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* note);

  /// @brief Method .ctor, addr 0x140d968, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader____c(__BeatmapDataLoader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader____c(__BeatmapDataLoader____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
// Type: BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using BasicEventConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter;

  using ColorNoteConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter;

  using ObstacleConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter;

  using SliderConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter;

  using SpecialEventsFilter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter;

  using WaypointConverter = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter;

  using __c = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c;

  using __c__DisplayClass1_0 = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0;

  /// @brief Method BeatmapSaveDataAreSorted, addr 0x140cb60, size 0x1c8, virtual false, abstract: false, final false
  static inline bool BeatmapSaveDataAreSorted(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>* beatmapSaveData);

  /// @brief Method ConvertBeatmapSaveDataPreV2_5_0Inline, addr 0x140cb50, size 0x10, virtual false, abstract: false, final false
  static inline void ConvertBeatmapSaveDataPreV2_5_0Inline(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJson, addr 0x140bbd8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapSaveDataJson);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJsonAsync, addr 0x140bae0, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataFromSaveData, addr 0x140c068, size 0xae8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveData(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData,
                                                                           ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData,
                                                                           ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
                                                                           ::GlobalNamespace::EnvironmentKeywords* environmentKeywords,
                                                                           ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method GetBeatmapDataFromSaveDataJson, addr 0x140bd90, size 0x2d8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveDataJson(::StringW beatmapJson, ::StringW defaultLightshowSaveDataJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                               float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method GetBeatmapDataFromSaveDataJsonAsync, addr 0x140b9a4, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*
  GetBeatmapDataFromSaveDataJsonAsync(::StringW beatmapJson, ::StringW defaultLightshowSaveDataJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm,
                                      bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  static inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader* New_ctor();

  /// @brief Method .ctor, addr 0x140d704, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field kDefaultNumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultNumberOfLines{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/BasicEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/ColorNoteConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/ObstacleConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/SliderConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/SpecialEventsFilter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/WaypointConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/<>c");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/<>c__DisplayClass1_0");
NEED_NO_BOX(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0*, "BeatmapDataLoaderVersion2_6_0AndEarlier", "BeatmapDataLoader/<>c__DisplayClass2_0");
