#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion3/BeatmapDataLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BasicEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BeatmapDataItemConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BombNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BpmEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BurstSliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__ColorBoostEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__FloatVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__FloatVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__IndexFilterConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__IntVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__IntVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightColoBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightColorEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightRotationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightRotationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightTranslationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightTranslationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__ObstacleConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__RotationEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__SliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__WaypointConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader____c;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader____c__DisplayClass3_0;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader____c__DisplayClass4_0;
}
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace BeatmapSaveDataCommon {
struct ExecutionTime;
}
namespace BeatmapSaveDataVersion3 {
class BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
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
class FxEventBox;
}
namespace BeatmapSaveDataVersion3 {
class FxEventsCollection;
}
namespace BeatmapSaveDataVersion3 {
class IndexFilter;
}
namespace BeatmapSaveDataVersion3 {
class LightColorBaseData;
}
namespace BeatmapSaveDataVersion3 {
class LightColorEventBox;
}
namespace BeatmapSaveDataVersion3 {
class LightRotationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class LightRotationEventBox;
}
namespace BeatmapSaveDataVersion3 {
class LightTranslationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class LightTranslationEventBox;
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
namespace BeatmapSaveDataVersion4 {
class LightshowSaveData;
}
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
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
class BeatmapEventDataBox;
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
class BpmTimeProcessor;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class FloatFxBaseData;
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
class ILightGroup;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
class IntFxBaseData;
}
namespace GlobalNamespace {
class LightColorBaseData;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
namespace GlobalNamespace {
class LightTranslationBaseData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
struct __SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BasicEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BeatmapDataItemConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BombNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BpmEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__BurstSliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__ColorBoostEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__FloatVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__FloatVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__IndexFilterConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__IntVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__IntVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightColoBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightColorEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightRotationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightRotationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightTranslationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__LightTranslationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__ObstacleConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__RotationEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__SliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader__WaypointConverter;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader____c;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader____c__DisplayClass3_0;
}
namespace BeatmapDataLoaderVersion3 {
class __BeatmapDataLoader____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__RotationEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0);
// Type: ::BeatmapDataItemConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::BeatmapDataItemConverter*
class CORDL_TYPE __BeatmapDataLoader__BeatmapDataItemConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bpmTimeProcessor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmTimeProcessor, put = __cordl_internal_set__bpmTimeProcessor)) ::GlobalNamespace::BpmTimeProcessor* _bpmTimeProcessor;

  /// @brief Method BeatToTime, addr 0x26d2e9c, size 0x1c, virtual false, abstract: false, final false
  inline float_t BeatToTime(float_t beat);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::GlobalNamespace::BpmTimeProcessor*& __cordl_internal_get__bpmTimeProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BpmTimeProcessor*> const& __cordl_internal_get__bpmTimeProcessor() const;

  constexpr void __cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::BpmTimeProcessor* value);

  /// @brief Method .ctor, addr 0x26d2e10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BeatmapDataItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BeatmapDataItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BeatmapDataItemConverter(__BeatmapDataLoader__BeatmapDataItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BeatmapDataItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BeatmapDataItemConverter(__BeatmapDataLoader__BeatmapDataItemConverter const&) = delete;

  /// @brief Field _bpmTimeProcessor, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BpmTimeProcessor* ____bpmTimeProcessor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter, ____bpmTimeProcessor) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::BasicEventConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::BasicEventConverter*
class CORDL_TYPE __BeatmapDataLoader__BasicEventConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Field _specialEventsFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__specialEventsFilter,
                      put = __cordl_internal_set__specialEventsFilter)) ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* _specialEventsFilter;

  /// @brief Method Convert, addr 0x26d1328, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion3::BasicEventData* basicEventSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                                ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter);

  constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*& __cordl_internal_get__specialEventsFilter();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*> const& __cordl_internal_get__specialEventsFilter() const;

  constexpr void __cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* value);

  /// @brief Method .ctor, addr 0x26d12d4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter);

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
  ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* ____specialEventsFilter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13452 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter, ____specialEventsFilter) == 0x18, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::BombNoteConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::BombNoteConverter*
class CORDL_TYPE __BeatmapDataLoader__BombNoteConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf188, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::BombNoteData* bombNoteSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26cf004, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BombNoteConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BombNoteConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BombNoteConverter(__BeatmapDataLoader__BombNoteConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BombNoteConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BombNoteConverter(__BeatmapDataLoader__BombNoteConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13454 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::BpmEventConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::BpmEventConverter*
class CORDL_TYPE __BeatmapDataLoader__BpmEventConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf6bc, size 0x90, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BPMChangeBeatmapEventData* Convert(::BeatmapSaveDataVersion3::BpmChangeEventData* bpmChangeEventSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26cf694, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BpmEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BpmEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BpmEventConverter(__BeatmapDataLoader__BpmEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BpmEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BpmEventConverter(__BeatmapDataLoader__BpmEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::ColorBoostEventConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::ColorBoostEventConverter*
class CORDL_TYPE __BeatmapDataLoader__ColorBoostEventConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d13f4, size 0x90, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion3::ColorBoostEventData* colorBoostEventSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26d1300, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__ColorBoostEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorBoostEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__ColorBoostEventConverter(__BeatmapDataLoader__ColorBoostEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorBoostEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__ColorBoostEventConverter(__BeatmapDataLoader__ColorBoostEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::ColorNoteConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::ColorNoteConverter*
class CORDL_TYPE __BeatmapDataLoader__ColorNoteConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf0cc, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::ColorNoteData* colorNoteSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26cefdc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::IntVfxEventBoxConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::IntVfxEventBoxConverter*
class CORDL_TYPE __BeatmapDataLoader__IntVfxEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fxEventsCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fxEventsCollection, put = __cordl_internal_set__fxEventsCollection)) ::BeatmapSaveDataVersion3::FxEventsCollection* _fxEventsCollection;

  /// @brief Method Convert, addr 0x26d289c, size 0x56c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroup);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter* New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& __cordl_internal_get__fxEventsCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::FxEventsCollection*> const& __cordl_internal_get__fxEventsCollection() const;

  constexpr void __cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value);

  /// @brief Method .ctor, addr 0x26d2308, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__IntVfxEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__IntVfxEventBoxConverter(__BeatmapDataLoader__IntVfxEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__IntVfxEventBoxConverter(__BeatmapDataLoader__IntVfxEventBoxConverter const&) = delete;

  /// @brief Field _fxEventsCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::FxEventsCollection* ____fxEventsCollection;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter, ____fxEventsCollection) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::FloatVfxEventBoxConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::FloatVfxEventBoxConverter*
class CORDL_TYPE __BeatmapDataLoader__FloatVfxEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fxEventsCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fxEventsCollection, put = __cordl_internal_set__fxEventsCollection)) ::BeatmapSaveDataVersion3::FxEventsCollection* _fxEventsCollection;

  /// @brief Method Convert, addr 0x26d2330, size 0x56c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroup);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter* New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& __cordl_internal_get__fxEventsCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::FxEventsCollection*> const& __cordl_internal_get__fxEventsCollection() const;

  constexpr void __cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value);

  /// @brief Method .ctor, addr 0x26d22e0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__FloatVfxEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__FloatVfxEventBoxConverter(__BeatmapDataLoader__FloatVfxEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__FloatVfxEventBoxConverter(__BeatmapDataLoader__FloatVfxEventBoxConverter const&) = delete;

  /// @brief Field _fxEventsCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::FxEventsCollection* ____fxEventsCollection;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter, ____fxEventsCollection) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::IntVfxBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::IntVfxBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__IntVfxBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d3254, size 0x104, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IntFxBaseData* Convert(int32_t vfxEventBaseData, ::BeatmapSaveDataVersion3::FxEventsCollection* collection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__IntVfxBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__IntVfxBaseDataConvertor(__BeatmapDataLoader__IntVfxBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__IntVfxBaseDataConvertor(__BeatmapDataLoader__IntVfxBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13460 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::FloatVfxBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::FloatVfxBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__FloatVfxBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d3358, size 0x120, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::FloatFxBaseData* Convert(int32_t vfxEventBaseData, ::BeatmapSaveDataVersion3::FxEventsCollection* collection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__FloatVfxBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__FloatVfxBaseDataConvertor(__BeatmapDataLoader__FloatVfxBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__FloatVfxBaseDataConvertor(__BeatmapDataLoader__FloatVfxBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13461 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::IndexFilterConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::IndexFilterConverter*
class CORDL_TYPE __BeatmapDataLoader__IndexFilterConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d2eb8, size 0x39c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IndexFilter* Convert(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, int32_t groupSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__IndexFilterConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IndexFilterConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__IndexFilterConverter(__BeatmapDataLoader__IndexFilterConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IndexFilterConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__IndexFilterConverter(__BeatmapDataLoader__IndexFilterConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13462 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::LightColorEventBoxConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::LightColorEventBoxConverter*
class CORDL_TYPE __BeatmapDataLoader__LightColorEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d1484, size 0x344, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::LightColorEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter* New_ctor();

  /// @brief Method .ctor, addr 0x26d356c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightColorEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColorEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightColorEventBoxConverter(__BeatmapDataLoader__LightColorEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColorEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightColorEventBoxConverter(__BeatmapDataLoader__LightColorEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::LightColoBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::LightColoBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightColoBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d3478, size 0xf4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightColorBaseData* Convert(::BeatmapSaveDataVersion3::LightColorBaseData* saveData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightColoBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColoBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightColoBaseDataConvertor(__BeatmapDataLoader__LightColoBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColoBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightColoBaseDataConvertor(__BeatmapDataLoader__LightColoBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13464 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::LightRotationEventBoxConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::LightRotationEventBoxConverter*
class CORDL_TYPE __BeatmapDataLoader__LightRotationEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d17c8, size 0x58c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::LightRotationEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter* New_ctor();

  /// @brief Method .ctor, addr 0x26d3638, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightRotationEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightRotationEventBoxConverter(__BeatmapDataLoader__LightRotationEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightRotationEventBoxConverter(__BeatmapDataLoader__LightRotationEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::LightRotationBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::LightRotationBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightRotationBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d3574, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightRotationBaseData* Convert(::BeatmapSaveDataVersion3::LightRotationBaseData* saveData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightRotationBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightRotationBaseDataConvertor(__BeatmapDataLoader__LightRotationBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightRotationBaseDataConvertor(__BeatmapDataLoader__LightRotationBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::LightTranslationEventBoxConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::LightTranslationEventBoxConverter*
class CORDL_TYPE __BeatmapDataLoader__LightTranslationEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d1d54, size 0x58c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::LightTranslationEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter* New_ctor();

  /// @brief Method .ctor, addr 0x26d36dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightTranslationEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightTranslationEventBoxConverter(__BeatmapDataLoader__LightTranslationEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightTranslationEventBoxConverter(__BeatmapDataLoader__LightTranslationEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::LightTranslationBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::LightTranslationBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightTranslationBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26d3640, size 0x9c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightTranslationBaseData* Convert(::BeatmapSaveDataVersion3::LightTranslationBaseData* saveData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightTranslationBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightTranslationBaseDataConvertor(__BeatmapDataLoader__LightTranslationBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightTranslationBaseDataConvertor(__BeatmapDataLoader__LightTranslationBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13468 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::ObstacleConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::ObstacleConverter*
class CORDL_TYPE __BeatmapDataLoader__ObstacleConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf1ec, size 0x130, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::ObstacleData* obstacleSaveData);

  /// @brief Method GetNoteLineLayer, addr 0x26d36e4, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteLineLayer GetNoteLineLayer(int32_t lineLayer);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26cf02c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::RotationEventConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::RotationEventConverter*
class CORDL_TYPE __BeatmapDataLoader__RotationEventConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf774, size 0xa4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SpawnRotationBeatmapEventData* Convert(::BeatmapSaveDataVersion3::RotationEventData* rotationEventSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__RotationEventConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method SpawnRotationEventType, addr 0x26d36f8, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType SpawnRotationEventType(::BeatmapSaveDataCommon::ExecutionTime executionTime);

  /// @brief Method .ctor, addr 0x26cf74c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__RotationEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__RotationEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__RotationEventConverter(__BeatmapDataLoader__RotationEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__RotationEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__RotationEventConverter(__BeatmapDataLoader__RotationEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__RotationEventConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::SliderConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::SliderConverter*
class CORDL_TYPE __BeatmapDataLoader__SliderConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf31c, size 0x174, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::SliderData* sliderSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26cf054, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::BurstSliderConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::BurstSliderConverter*
class CORDL_TYPE __BeatmapDataLoader__BurstSliderConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf490, size 0x138, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::BurstSliderData* sliderSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26cf07c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BurstSliderConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BurstSliderConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BurstSliderConverter(__BeatmapDataLoader__BurstSliderConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BurstSliderConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BurstSliderConverter(__BeatmapDataLoader__BurstSliderConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::SpecialEventsFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::SpecialEventsFilter*
class CORDL_TYPE __BeatmapDataLoader__SpecialEventsFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventTypesToFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eventTypesToFilter,
                      put = __cordl_internal_set__eventTypesToFilter)) ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* _eventTypesToFilter;

  /// @brief Method IsEventValid, addr 0x26d2e38, size 0x64, virtual false, abstract: false, final false
  inline bool IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* New_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                                                ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get__eventTypesToFilter();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const& __cordl_internal_get__eventTypesToFilter() const;

  constexpr void __cordl_internal_set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  /// @brief Method .ctor, addr 0x26d0ffc, size 0x2d8, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter, ____eventTypesToFilter) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::WaypointConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::WaypointConverter*
class CORDL_TYPE __BeatmapDataLoader__WaypointConverter : public ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x26cf5c8, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::WaypointData* waypointSaveData);

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x26cf0a4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c*
class CORDL_TYPE __BeatmapDataLoader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* __9__5_0;

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJson>b__5_0, addr 0x26d376c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0(::BeatmapSaveDataVersion3::BurstSliderData* bs);

  /// @brief Method .ctor, addr 0x26d3764, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* getStaticF___9__5_0();

  static inline void setStaticF___9(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c__DisplayClass3_0*
class CORDL_TYPE __BeatmapDataLoader____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson)) ::StringW beatmapJson;

  /// @brief Field beatmapLevelDataVersion, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapLevelDataVersion, put = __cordl_internal_set_beatmapLevelDataVersion)) ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field defaultLightshowJson, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLightshowJson, put = __cordl_internal_set_defaultLightshowJson)) ::StringW defaultLightshowJson;

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

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0* New_ctor();

  /// @brief Method <GetBeatmapDataFromSaveDataJsonAsync>b__0, addr 0x26d3788, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapData* _GetBeatmapDataFromSaveDataJsonAsync_b__0();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& __cordl_internal_get_beatmapLevelDataVersion() const;

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion& __cordl_internal_get_beatmapLevelDataVersion();

  constexpr ::StringW const& __cordl_internal_get_defaultLightshowJson() const;

  constexpr ::StringW& __cordl_internal_get_defaultLightshowJson();

  constexpr ::GlobalNamespace::IEnvironmentInfo*& __cordl_internal_get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentInfo*> const& __cordl_internal_get_environmentInfo() const;

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& __cordl_internal_get_lightEventConverter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLightEventConverter*> const& __cordl_internal_get_lightEventConverter() const;

  constexpr bool const& __cordl_internal_get_loadingForDesignatedEnvironment() const;

  constexpr bool& __cordl_internal_get_loadingForDesignatedEnvironment();

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr float_t const& __cordl_internal_get_startBpm() const;

  constexpr float_t& __cordl_internal_get_startBpm();

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  constexpr void __cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value);

  constexpr void __cordl_internal_set_defaultLightshowJson(::StringW value);

  constexpr void __cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value);

  constexpr void __cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set_loadingForDesignatedEnvironment(bool value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_startBpm(float_t value);

  /// @brief Method .ctor, addr 0x26cdf0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader____c__DisplayClass3_0(__BeatmapDataLoader____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader____c__DisplayClass3_0(__BeatmapDataLoader____c__DisplayClass3_0 const&) = delete;

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  /// @brief Field defaultLightshowJson, offset: 0x18, size: 0x8, def value: None
  ::StringW ___defaultLightshowJson;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___beatmapJson) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___defaultLightshowJson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___startBpm) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___loadingForDesignatedEnvironment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___playerSpecificSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0, ___lightEventConverter) == 0x48, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c__DisplayClass4_0*
class CORDL_TYPE __BeatmapDataLoader____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson)) ::StringW beatmapJson;

  static inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0, addr 0x26d37c0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* _GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  /// @brief Method .ctor, addr 0x26ce000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader____c__DisplayClass4_0(__BeatmapDataLoader____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader____c__DisplayClass4_0(__BeatmapDataLoader____c__DisplayClass4_0 const&) = delete;

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0, ___beatmapJson) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Type: BeatmapDataLoaderVersion3::BeatmapDataLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion3::BeatmapDataLoader*
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using BasicEventConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter;

  using BeatmapDataItemConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter;

  using BombNoteConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter;

  using BpmEventConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter;

  using BurstSliderConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter;

  using ColorBoostEventConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter;

  using ColorNoteConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter;

  using FloatVfxBaseDataConvertor = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor;

  using FloatVfxEventBoxConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter;

  using IndexFilterConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter;

  using IntVfxBaseDataConvertor = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor;

  using IntVfxEventBoxConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter;

  using LightColoBaseDataConvertor = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor;

  using LightColorEventBoxConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter;

  using LightRotationBaseDataConvertor = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor;

  using LightRotationEventBoxConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter;

  using LightTranslationBaseDataConvertor = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor;

  using LightTranslationEventBoxConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter;

  using ObstacleConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter;

  using RotationEventConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__RotationEventConverter;

  using SliderConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter;

  using SpecialEventsFilter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter;

  using WaypointConverter = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter;

  using __c = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c;

  using __c__DisplayClass3_0 = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0;

  /// @brief Method ConvertBasicEvents, addr 0x26cf818, size 0x638, virtual false, abstract: false, final false
  static inline void ConvertBasicEvents(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                        ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  /// @brief Method ConvertEventBoxGroups, addr 0x26cfe50, size 0x11ac, virtual false, abstract: false, final false
  static inline void ConvertEventBoxGroups(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                           ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJson, addr 0x26ce008, size 0x1d4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJsonAsync, addr 0x26cdf14, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataFromSaveData, addr 0x26ce314, size 0xcc8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveData(
      ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
      float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, ::System::Diagnostics::Stopwatch* stopwatch);

  /// @brief Method GetBeatmapDataFromSaveDataJson, addr 0x26ce1dc, size 0x138, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveDataJson(::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                               float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                               ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                               ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataFromSaveDataJsonAsync, addr 0x26cddc4, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*
  GetBeatmapDataFromSaveDataJsonAsync(::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm,
                                      bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader* New_ctor();

  /// @brief Method .ctor, addr 0x26d2e08, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13478 };

  /// @brief Field kDefaultNumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultNumberOfLines{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BasicEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BeatmapDataItemConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BombNoteConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BpmEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BurstSliderConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/ColorBoostEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/ColorNoteConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/FloatVfxBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/FloatVfxEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/IndexFilterConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/IntVfxBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/IntVfxEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightColoBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightColorEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightRotationBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightRotationEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightTranslationBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightTranslationEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/ObstacleConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__RotationEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__RotationEventConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/RotationEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/SliderConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/SpecialEventsFilter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/WaypointConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/<>c");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/<>c__DisplayClass3_0");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/<>c__DisplayClass4_0");
