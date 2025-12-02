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
class BeatmapDataLoader_BasicEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BeatmapDataItemConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BombNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BpmEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BurstSliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_ColorBoostEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_FloatVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_FloatVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_IndexFilterConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_IntVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_IntVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightColoBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightColorEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightRotationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightRotationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightTranslationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightTranslationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_ObstacleConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_SliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_WaypointConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader___c;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader___c__DisplayClass3_0;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader___c__DisplayClass4_0;
}
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
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
class RotationTimeProcessor;
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
class BeatmapDataLoader_BasicEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BeatmapDataItemConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BombNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BpmEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_BurstSliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_ColorBoostEventConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_ColorNoteConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_FloatVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_FloatVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_IndexFilterConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_IntVfxBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_IntVfxEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightColoBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightColorEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightRotationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightRotationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightTranslationBaseDataConvertor;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_LightTranslationEventBoxConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_ObstacleConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_SliderConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_SpecialEventsFilter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader_WaypointConverter;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader___c;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader___c__DisplayClass3_0;
}
namespace BeatmapDataLoaderVersion3 {
class BeatmapDataLoader___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0);
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/BeatmapDataItemConverter
class CORDL_TYPE BeatmapDataLoader_BeatmapDataItemConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bpmTimeProcessor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmTimeProcessor, put = __cordl_internal_set__bpmTimeProcessor)) ::GlobalNamespace::BpmTimeProcessor* _bpmTimeProcessor;

  /// @brief Field _rotationTimeProcessor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationTimeProcessor, put = __cordl_internal_set__rotationTimeProcessor)) ::GlobalNamespace::RotationTimeProcessor* _rotationTimeProcessor;

  /// @brief Method BeatToRotation, addr 0x363f6a0, size 0x18, virtual false, abstract: false, final false
  inline int32_t BeatToRotation(float_t beat);

  /// @brief Method BeatToTime, addr 0x363f688, size 0x18, virtual false, abstract: false, final false
  inline float_t BeatToTime(float_t beat);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                                  ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  constexpr ::GlobalNamespace::BpmTimeProcessor* const& __cordl_internal_get__bpmTimeProcessor() const;

  constexpr ::GlobalNamespace::BpmTimeProcessor*& __cordl_internal_get__bpmTimeProcessor();

  constexpr ::GlobalNamespace::RotationTimeProcessor* const& __cordl_internal_get__rotationTimeProcessor() const;

  constexpr ::GlobalNamespace::RotationTimeProcessor*& __cordl_internal_get__rotationTimeProcessor();

  constexpr void __cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::BpmTimeProcessor* value);

  constexpr void __cordl_internal_set__rotationTimeProcessor(::GlobalNamespace::RotationTimeProcessor* value);

  /// @brief Method .ctor, addr 0x363f610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_BeatmapDataItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BeatmapDataItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_BeatmapDataItemConverter(BeatmapDataLoader_BeatmapDataItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BeatmapDataItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_BeatmapDataItemConverter(BeatmapDataLoader_BeatmapDataItemConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15407 };

  /// @brief Field _bpmTimeProcessor, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BpmTimeProcessor* ____bpmTimeProcessor;

  /// @brief Field _rotationTimeProcessor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RotationTimeProcessor* ____rotationTimeProcessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter, ____bpmTimeProcessor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter, ____rotationTimeProcessor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/BasicEventConverter
class CORDL_TYPE BeatmapDataLoader_BasicEventConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Field _specialEventsFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__specialEventsFilter,
                      put = __cordl_internal_set__specialEventsFilter)) ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* _specialEventsFilter;

  /// @brief Method Convert, addr 0x363dc10, size 0xc4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion3::BasicEventData* basicEventSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                             ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                                                                                             ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter);

  constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* const& __cordl_internal_get__specialEventsFilter() const;

  constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*& __cordl_internal_get__specialEventsFilter();

  constexpr void __cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* value);

  /// @brief Method .ctor, addr 0x363dbfc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15406 };

  /// @brief Field _specialEventsFilter, offset: 0x20, size: 0x8, def value: None
  ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* ____specialEventsFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter, ____specialEventsFilter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter, 0x28>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/BombNoteConverter
class CORDL_TYPE BeatmapDataLoader_BombNoteConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363bdbc, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::BombNoteData* bombNoteSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                           ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363bcbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_BombNoteConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BombNoteConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_BombNoteConverter(BeatmapDataLoader_BombNoteConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BombNoteConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_BombNoteConverter(BeatmapDataLoader_BombNoteConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/BpmEventConverter
class CORDL_TYPE BeatmapDataLoader_BpmEventConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363c334, size 0xa0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BPMChangeBeatmapEventData* Convert(::BeatmapSaveDataVersion3::BpmChangeEventData* bpmChangeEventSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                           ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363c32c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_BpmEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BpmEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_BpmEventConverter(BeatmapDataLoader_BpmEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BpmEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_BpmEventConverter(BeatmapDataLoader_BpmEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15409 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/ColorBoostEventConverter
class CORDL_TYPE BeatmapDataLoader_ColorBoostEventConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363dcd4, size 0xa0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion3::ColorBoostEventData* colorBoostEventSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                                  ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363dc08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_ColorBoostEventConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_ColorBoostEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_ColorBoostEventConverter(BeatmapDataLoader_ColorBoostEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_ColorBoostEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_ColorBoostEventConverter(BeatmapDataLoader_ColorBoostEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15410 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/ColorNoteConverter
class CORDL_TYPE BeatmapDataLoader_ColorNoteConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363bce4, size 0xd8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::ColorNoteData* colorNoteSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                            ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363bcb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/IntVfxEventBoxConverter
class CORDL_TYPE BeatmapDataLoader_IntVfxEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fxEventsCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fxEventsCollection, put = __cordl_internal_set__fxEventsCollection)) ::BeatmapSaveDataVersion3::FxEventsCollection* _fxEventsCollection;

  /// @brief Method Convert, addr 0x363f0c0, size 0x54c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroup);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter* New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection* const& __cordl_internal_get__fxEventsCollection() const;

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& __cordl_internal_get__fxEventsCollection();

  constexpr void __cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value);

  /// @brief Method .ctor, addr 0x363eb6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_IntVfxEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_IntVfxEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_IntVfxEventBoxConverter(BeatmapDataLoader_IntVfxEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_IntVfxEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_IntVfxEventBoxConverter(BeatmapDataLoader_IntVfxEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15412 };

  /// @brief Field _fxEventsCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::FxEventsCollection* ____fxEventsCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter, ____fxEventsCollection) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/FloatVfxEventBoxConverter
class CORDL_TYPE BeatmapDataLoader_FloatVfxEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fxEventsCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fxEventsCollection, put = __cordl_internal_set__fxEventsCollection)) ::BeatmapSaveDataVersion3::FxEventsCollection* _fxEventsCollection;

  /// @brief Method Convert, addr 0x363eb74, size 0x54c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroup);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter* New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection* const& __cordl_internal_get__fxEventsCollection() const;

  constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& __cordl_internal_get__fxEventsCollection();

  constexpr void __cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value);

  /// @brief Method .ctor, addr 0x363eb64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_FloatVfxEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_FloatVfxEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_FloatVfxEventBoxConverter(BeatmapDataLoader_FloatVfxEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_FloatVfxEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_FloatVfxEventBoxConverter(BeatmapDataLoader_FloatVfxEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15413 };

  /// @brief Field _fxEventsCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::FxEventsCollection* ____fxEventsCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter, ____fxEventsCollection) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/IntVfxBaseDataConvertor
class CORDL_TYPE BeatmapDataLoader_IntVfxBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363fa7c, size 0x104, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IntFxBaseData* Convert(int32_t vfxEventBaseData, ::BeatmapSaveDataVersion3::FxEventsCollection* collection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_IntVfxBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_IntVfxBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_IntVfxBaseDataConvertor(BeatmapDataLoader_IntVfxBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_IntVfxBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_IntVfxBaseDataConvertor(BeatmapDataLoader_IntVfxBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/FloatVfxBaseDataConvertor
class CORDL_TYPE BeatmapDataLoader_FloatVfxBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363fb80, size 0x120, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::FloatFxBaseData* Convert(int32_t vfxEventBaseData, ::BeatmapSaveDataVersion3::FxEventsCollection* collection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_FloatVfxBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_FloatVfxBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_FloatVfxBaseDataConvertor(BeatmapDataLoader_FloatVfxBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_FloatVfxBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_FloatVfxBaseDataConvertor(BeatmapDataLoader_FloatVfxBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15415 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/IndexFilterConverter
class CORDL_TYPE BeatmapDataLoader_IndexFilterConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363f6b8, size 0x3c4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IndexFilter* Convert(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, int32_t groupSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_IndexFilterConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_IndexFilterConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_IndexFilterConverter(BeatmapDataLoader_IndexFilterConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_IndexFilterConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_IndexFilterConverter(BeatmapDataLoader_IndexFilterConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/LightColorEventBoxConverter
class CORDL_TYPE BeatmapDataLoader_LightColorEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363dd74, size 0x320, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::LightColorEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter* New_ctor();

  /// @brief Method .ctor, addr 0x363fd68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_LightColorEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightColorEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_LightColorEventBoxConverter(BeatmapDataLoader_LightColorEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightColorEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_LightColorEventBoxConverter(BeatmapDataLoader_LightColorEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/LightColoBaseDataConvertor
class CORDL_TYPE BeatmapDataLoader_LightColoBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363fca0, size 0xc8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightColorBaseData* Convert(::BeatmapSaveDataVersion3::LightColorBaseData* saveData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_LightColoBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightColoBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_LightColoBaseDataConvertor(BeatmapDataLoader_LightColoBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightColoBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_LightColoBaseDataConvertor(BeatmapDataLoader_LightColoBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/LightRotationEventBoxConverter
class CORDL_TYPE BeatmapDataLoader_LightRotationEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363e094, size 0x568, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::LightRotationEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter* New_ctor();

  /// @brief Method .ctor, addr 0x363fe1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_LightRotationEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightRotationEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_LightRotationEventBoxConverter(BeatmapDataLoader_LightRotationEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightRotationEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_LightRotationEventBoxConverter(BeatmapDataLoader_LightRotationEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15419 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/LightRotationBaseDataConvertor
class CORDL_TYPE BeatmapDataLoader_LightRotationBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363fd6c, size 0xb0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightRotationBaseData* Convert(::BeatmapSaveDataVersion3::LightRotationBaseData* saveData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_LightRotationBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightRotationBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_LightRotationBaseDataConvertor(BeatmapDataLoader_LightRotationBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightRotationBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_LightRotationBaseDataConvertor(BeatmapDataLoader_LightRotationBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15420 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/LightTranslationEventBoxConverter
class CORDL_TYPE BeatmapDataLoader_LightTranslationEventBoxConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363e5fc, size 0x568, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::LightTranslationEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter* New_ctor();

  /// @brief Method .ctor, addr 0x363feb0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_LightTranslationEventBoxConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightTranslationEventBoxConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_LightTranslationEventBoxConverter(BeatmapDataLoader_LightTranslationEventBoxConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightTranslationEventBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_LightTranslationEventBoxConverter(BeatmapDataLoader_LightTranslationEventBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/LightTranslationBaseDataConvertor
class CORDL_TYPE BeatmapDataLoader_LightTranslationBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363fe20, size 0x90, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightTranslationBaseData* Convert(::BeatmapSaveDataVersion3::LightTranslationBaseData* saveData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_LightTranslationBaseDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightTranslationBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_LightTranslationBaseDataConvertor(BeatmapDataLoader_LightTranslationBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_LightTranslationBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_LightTranslationBaseDataConvertor(BeatmapDataLoader_LightTranslationBaseDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/ObstacleConverter
class CORDL_TYPE BeatmapDataLoader_ObstacleConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363be40, size 0x118, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::ObstacleData* obstacleSaveData);

  /// @brief Method GetNoteLineLayer, addr 0x363feb4, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteLineLayer GetNoteLineLayer(int32_t lineLayer);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                           ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363bcc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/SliderConverter
class CORDL_TYPE BeatmapDataLoader_SliderConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363bf58, size 0x190, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::SliderData* sliderSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                         ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363bccc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/BurstSliderConverter
class CORDL_TYPE BeatmapDataLoader_BurstSliderConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363c0e8, size 0x15c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::BurstSliderData* sliderSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                              ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363bcd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader_BurstSliderConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BurstSliderConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader_BurstSliderConverter(BeatmapDataLoader_BurstSliderConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader_BurstSliderConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader_BurstSliderConverter(BeatmapDataLoader_BurstSliderConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15425 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/SpecialEventsFilter
class CORDL_TYPE BeatmapDataLoader_SpecialEventsFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventTypesToFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eventTypesToFilter,
                      put = __cordl_internal_set__eventTypesToFilter)) ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* _eventTypesToFilter;

  /// @brief Method IsEventValid, addr 0x363f618, size 0x70, virtual false, abstract: false, final false
  inline bool IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* New_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                                             ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* const& __cordl_internal_get__eventTypesToFilter() const;

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get__eventTypesToFilter();

  constexpr void __cordl_internal_set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  /// @brief Method .ctor, addr 0x363d9cc, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15426 };

  /// @brief Field _eventTypesToFilter, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* ____eventTypesToFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter, ____eventTypesToFilter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDataLoaderVersion3.BeatmapDataLoader::BeatmapDataItemConverter
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/WaypointConverter
class CORDL_TYPE BeatmapDataLoader_WaypointConverter : public ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x363c244, size 0xe8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion3::WaypointData* waypointSaveData);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter* New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                           ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  /// @brief Method .ctor, addr 0x363bcdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/<>c
class CORDL_TYPE BeatmapDataLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* __9__5_0;

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJson>b__5_0, addr 0x363ff20, size 0x18, virtual false, abstract: false, final false
  inline int32_t _GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0(::BeatmapSaveDataVersion3::BurstSliderData* bs);

  /// @brief Method .ctor, addr 0x363ff1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* getStaticF___9__5_0();

  static inline void setStaticF___9(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15428 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies BeatmapDifficulty, BeatmapLevelDataVersion, System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/<>c__DisplayClass3_0
class CORDL_TYPE BeatmapDataLoader___c__DisplayClass3_0 : public ::System::Object {
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

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0* New_ctor();

  /// @brief Method <GetBeatmapDataFromSaveDataJsonAsync>b__0, addr 0x363ff38, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapData* _GetBeatmapDataFromSaveDataJsonAsync_b__0();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& __cordl_internal_get_beatmapLevelDataVersion() const;

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion& __cordl_internal_get_beatmapLevelDataVersion();

  constexpr ::StringW const& __cordl_internal_get_defaultLightshowJson() const;

  constexpr ::StringW& __cordl_internal_get_defaultLightshowJson();

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

  constexpr void __cordl_internal_set_defaultLightshowJson(::StringW value);

  constexpr void __cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value);

  constexpr void __cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set_loadingForDesignatedEnvironment(bool value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_startBpm(float_t value);

  /// @brief Method .ctor, addr 0x363ac84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c__DisplayClass3_0(BeatmapDataLoader___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c__DisplayClass3_0(BeatmapDataLoader___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15429 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___beatmapJson) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___defaultLightshowJson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___startBpm) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___loadingForDesignatedEnvironment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___playerSpecificSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, ___lightEventConverter) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0, 0x50>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader/<>c__DisplayClass4_0
class CORDL_TYPE BeatmapDataLoader___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson)) ::StringW beatmapJson;

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0, addr 0x363ff70, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* _GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  /// @brief Method .ctor, addr 0x363adb0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c__DisplayClass4_0(BeatmapDataLoader___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c__DisplayClass4_0(BeatmapDataLoader___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15430 };

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0, ___beatmapJson) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
// Dependencies System.Object
namespace BeatmapDataLoaderVersion3 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion3.BeatmapDataLoader
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using BasicEventConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter;

  using BeatmapDataItemConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter;

  using BombNoteConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter;

  using BpmEventConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter;

  using BurstSliderConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter;

  using ColorBoostEventConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter;

  using ColorNoteConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter;

  using FloatVfxBaseDataConvertor = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor;

  using FloatVfxEventBoxConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter;

  using IndexFilterConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter;

  using IntVfxBaseDataConvertor = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor;

  using IntVfxEventBoxConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter;

  using LightColoBaseDataConvertor = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor;

  using LightColorEventBoxConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter;

  using LightRotationBaseDataConvertor = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor;

  using LightRotationEventBoxConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter;

  using LightTranslationBaseDataConvertor = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor;

  using LightTranslationEventBoxConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter;

  using ObstacleConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter;

  using SliderConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter;

  using SpecialEventsFilter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter;

  using WaypointConverter = ::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter;

  using __c = ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c;

  using __c__DisplayClass3_0 = ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0;

  /// @brief Method ConvertBasicEvents, addr 0x363c3d4, size 0x5b4, virtual false, abstract: false, final false
  static inline void ConvertBasicEvents(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                        ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  /// @brief Method ConvertEventBoxGroups, addr 0x363c988, size 0x1044, virtual false, abstract: false, final false
  static inline void ConvertEventBoxGroups(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                           ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJson, addr 0x363adb4, size 0x1ec, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJsonAsync, addr 0x363ac88, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataFromSaveData, addr 0x363b0e4, size 0xbd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveData(
      ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
      float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, ::System::Diagnostics::Stopwatch* stopwatch);

  /// @brief Method GetBeatmapDataFromSaveDataJson, addr 0x363afa0, size 0x144, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveDataJson(::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                               float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                               ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                               ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataFromSaveDataJsonAsync, addr 0x363aaf8, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*
  GetBeatmapDataFromSaveDataJsonAsync(::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm,
                                      bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  static inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader* New_ctor();

  /// @brief Method .ctor, addr 0x363f60c, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15431 };

  /// @brief Field kDefaultNumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultNumberOfLines{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion3::BeatmapDataLoader, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion3
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BasicEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BeatmapDataItemConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BombNoteConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BpmEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/BurstSliderConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/ColorBoostEventConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/ColorNoteConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/FloatVfxBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/FloatVfxEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/IndexFilterConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/IntVfxBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/IntVfxEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightColoBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightColorEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightRotationBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightRotationEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightTranslationBaseDataConvertor");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/LightTranslationEventBoxConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/ObstacleConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/SliderConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/SpecialEventsFilter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/WaypointConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/<>c");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/<>c__DisplayClass3_0");
NEED_NO_BOX(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0*, "BeatmapDataLoaderVersion3", "BeatmapDataLoader/<>c__DisplayClass4_0");
