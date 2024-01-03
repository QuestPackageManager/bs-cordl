#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_3_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_4_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "GlobalNamespace/zzzz__IntVfxBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__WaypointData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__BeatmapEventType;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapLightshowSaveData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__Axis;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BombNoteData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BpmChangeEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BurstSliderData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorBoostEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorNoteData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__EaseType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__EnvironmentColorType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__EventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__ExecutionTime;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__FxEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__FxEventBox;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__FxEventType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__FxEventsCollection;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__IndexFilter;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorEventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationEventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationEventBox;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__NoteColorType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ObstacleData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__RotationEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__TransitionType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__WaypointData;
}
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
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
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
template <typename T, typename TType, typename TParam> class DataConvertorWithCustomTypeAndParam_3;
}
namespace GlobalNamespace {
template <typename T, typename TParam> class DataConvertor_2;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class FloatFxBaseData;
}
namespace GlobalNamespace {
class FloatFxBeatmapEventDataBox;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
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
class IntVfxBeatmapEventDataBox;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class LightColorBaseData;
}
namespace GlobalNamespace {
class LightColorBeatmapEventDataBox;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
namespace GlobalNamespace {
class LightRotationBeatmapEventDataBox;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace GlobalNamespace {
class LightTranslationBaseData;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataBox;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
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
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class WaypointData;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BasicEventConvertor;
}
namespace GlobalNamespace {
template <typename TBase, typename TIn, typename TOut> class __BeatmapDataLoader__BeatmapDataItemConvertor_3;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BombNoteConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BpmEventConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BpmTimeProcessor;
}
namespace GlobalNamespace {
struct __BeatmapDataLoader__BpmTimeProcessor__BpmChangeData;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BurstSliderConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__ColorBoostEventConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__ColorNoteConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__FloatVfxBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__FloatVfxEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__IndexFilterConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__IntVfxBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__IntVfxEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightColoBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightColorEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightEventBoxGroupConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightRotationBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightRotationEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightTranslationBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightTranslationEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__ObstacleConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__RotationEventConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__SliderConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__SpecialEventsFilter;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__VfxEventBoxGroupConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__WaypointConvertor;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__EventBox__DistributionParamType;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__LightRotationBaseData__RotationDirection;
}
namespace GlobalNamespace {
struct __SliderData__Type;
}
namespace GlobalNamespace {
struct __SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BasicEventConvertor;
}
namespace GlobalNamespace {
template <typename TBase, typename TIn, typename TOut> class __BeatmapDataLoader__BeatmapDataItemConvertor_3;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BombNoteConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BpmEventConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BpmTimeProcessor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__BurstSliderConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__ColorBoostEventConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__ColorNoteConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__FloatVfxBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__FloatVfxEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__IndexFilterConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__IntVfxBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__IntVfxEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightColoBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightColorEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightEventBoxGroupConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightRotationBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightRotationEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightTranslationBaseDataConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__LightTranslationEventBoxConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__ObstacleConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__RotationEventConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__SliderConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__SpecialEventsFilter;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__VfxEventBoxGroupConvertor;
}
namespace GlobalNamespace {
class __BeatmapDataLoader__WaypointConvertor;
}
namespace GlobalNamespace {
struct __BeatmapDataLoader__BpmTimeProcessor__BpmChangeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataLoader);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__FloatVfxBaseDataConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__FloatVfxEventBoxConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__IntVfxBaseDataConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__IntVfxEventBoxConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__SliderConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData);
// Type: ::BpmChangeData
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4261))
// CS Name: ::BeatmapDataLoader::BpmTimeProcessor::BpmChangeData
struct CORDL_TYPE __BeatmapDataLoader__BpmTimeProcessor__BpmChangeData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2333ea0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm);

  // Ctor Parameters [CppParam { name: "bpmChangeStartTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpmChangeStartBpmTime", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BeatmapDataLoader__BpmTimeProcessor__BpmChangeData(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BpmTimeProcessor__BpmChangeData();

  /// @brief Field bpmChangeStartTime, offset: 0x0, size: 0x4, def value: None
  float_t bpmChangeStartTime;

  /// @brief Field bpmChangeStartBpmTime, offset: 0x4, size: 0x4, def value: None
  float_t bpmChangeStartBpmTime;

  /// @brief Field bpm, offset: 0x8, size: 0x4, def value: None
  float_t bpm;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData, bpmChangeStartTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData, bpmChangeStartBpmTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData, bpm) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BpmTimeProcessor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4262))
// CS Name: ::BeatmapDataLoader::BpmTimeProcessor*
class CORDL_TYPE __BeatmapDataLoader__BpmTimeProcessor : public ::System::Object {
public:
  // Declarations
  using BpmChangeData = ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData;

  /// @brief Field _bpmChangeDataList, offset 0x10, size 0x8
  __declspec(property(get = __get__bpmChangeDataList,
                      put = __set__bpmChangeDataList))::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>* _bpmChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset 0x18, size 0x4
  __declspec(property(get = __get_currentBpmChangesDataIdx, put = __set_currentBpmChangesDataIdx)) int32_t currentBpmChangesDataIdx;

  /// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConvertor"
  constexpr operator ::GlobalNamespace::IBeatToTimeConvertor*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatToTimeConvertor"
  constexpr ::GlobalNamespace::IBeatToTimeConvertor* i___GlobalNamespace__IBeatToTimeConvertor() noexcept;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>*& __get__bpmChangeDataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>*> const&
  __get__bpmChangeDataList() const;

  constexpr void __set__bpmChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>* value);

  constexpr int32_t& __get_currentBpmChangesDataIdx();

  constexpr int32_t const& __get_currentBpmChangesDataIdx() const;

  constexpr void __set_currentBpmChangesDataIdx(int32_t value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*
  New_ctor(float_t startBpm, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEventsSaveData);

  /// @brief Method .ctor, addr 0x2332094, size 0x2b4, virtual false, abstract: false, final false
  inline void _ctor(float_t startBpm, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEventsSaveData);

  /// @brief Method ConvertBeatToTime, addr 0x2333eac, size 0x108, virtual true, abstract: false, final true
  inline float_t ConvertBeatToTime(float_t beat);

  /// @brief Method Reset, addr 0x2332834, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BpmTimeProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BpmTimeProcessor(__BeatmapDataLoader__BpmTimeProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BpmTimeProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BpmTimeProcessor(__BeatmapDataLoader__BpmTimeProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BpmTimeProcessor();

public:
  /// @brief Field _bpmChangeDataList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>* ____bpmChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentBpmChangesDataIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor, ____bpmChangeDataList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor, ___currentBpmChangesDataIdx) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataItemConvertor`3
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TBase, typename TIn, typename TOut>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 1156 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4264))
// CS Name: ::BeatmapDataLoader::BeatmapDataItemConvertor`3<TBase,TIn,TOut>*
class CORDL_TYPE __BeatmapDataLoader__BeatmapDataItemConvertor_3 : public ::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut> {
public:
  // Declarations
  /// @brief Field _bpmTimeProcessor, offset 0x10, size 0x8
  __declspec(property(get = __get__bpmTimeProcessor, put = __set__bpmTimeProcessor))::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* _bpmTimeProcessor;

  constexpr ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*& __get__bpmTimeProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*> const& __get__bpmTimeProcessor() const;

  constexpr void __set__bpmTimeProcessor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method BeatToTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t BeatToTime(float_t beat);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BeatmapDataItemConvertor_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BeatmapDataItemConvertor_3(__BeatmapDataLoader__BeatmapDataItemConvertor_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BeatmapDataItemConvertor_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BeatmapDataItemConvertor_3(__BeatmapDataLoader__BeatmapDataItemConvertor_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BeatmapDataItemConvertor_3();

public:
  /// @brief Field _bpmTimeProcessor, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* ____bpmTimeProcessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::BasicEventConvertor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4264)), TypeDefinitionIndex(TypeDefinitionIndex(14784)), TypeDefinitionIndex(TypeDefinitionIndex(14727)),
// TypeDefinitionIndex(TypeDefinitionIndex(14721)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 937 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4263)) CS
// Name: ::BeatmapDataLoader::BasicEventConvertor*
class CORDL_TYPE __BeatmapDataLoader__BasicEventConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*,
                                                                                ::GlobalNamespace::BasicBeatmapEventData*> {
public:
  // Declarations
  /// @brief Field _specialEventsFilter, offset 0x18, size 0x8
  __declspec(property(get = __get__specialEventsFilter, put = __set__specialEventsFilter))::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* _specialEventsFilter;

  constexpr ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*& __get__specialEventsFilter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*> const& __get__specialEventsFilter() const;

  constexpr void __set__specialEventsFilter(::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor,
                                                                                      ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter);

  /// @brief Method .ctor, addr 0x23328ec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter);

  /// @brief Method Convert, addr 0x2333fb4, size 0xd4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData* basicEventSaveData);

  /// @brief Method ConvertFromBeatmapSaveDataBeatmapEventType, addr 0x23340ec, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BasicBeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType beatmapEventType);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BasicEventConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BasicEventConvertor(__BeatmapDataLoader__BasicEventConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BasicEventConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BasicEventConvertor(__BeatmapDataLoader__BasicEventConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BasicEventConvertor();

public:
  /// @brief Field _specialEventsFilter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* ____specialEventsFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor, ____specialEventsFilter) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BombNoteConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14751)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 941 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14759)), TypeDefinitionIndex(TypeDefinitionIndex(4264)), TypeDefinitionIndex(TypeDefinitionIndex(14821))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4265)) CS Name: ::BeatmapDataLoader::BombNoteConvertor*
class CORDL_TYPE __BeatmapDataLoader__BombNoteConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*,
                                                                                ::GlobalNamespace::NoteData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x233267c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x23340f0, size 0x74, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData* bombNoteSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BombNoteConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BombNoteConvertor(__BeatmapDataLoader__BombNoteConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BombNoteConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BombNoteConvertor(__BeatmapDataLoader__BombNoteConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BombNoteConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BpmEventConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14729)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 938 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14727)), TypeDefinitionIndex(TypeDefinitionIndex(4264)), TypeDefinitionIndex(TypeDefinitionIndex(14786))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4266)) CS Name: ::BeatmapDataLoader::BpmEventConvertor*
class CORDL_TYPE __BeatmapDataLoader__BpmEventConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*,
                                                                                ::GlobalNamespace::BPMChangeBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x233283c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x2334164, size 0xa4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BPMChangeBeatmapEventData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData* bpmChangeEventSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BpmEventConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BpmEventConvertor(__BeatmapDataLoader__BpmEventConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BpmEventConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BpmEventConvertor(__BeatmapDataLoader__BpmEventConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BpmEventConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorBoostEventConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4264)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 939 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14730)), TypeDefinitionIndex(TypeDefinitionIndex(14727)), TypeDefinitionIndex(TypeDefinitionIndex(14785))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4267)) CS Name: ::BeatmapDataLoader::ColorBoostEventConvertor*
class CORDL_TYPE __BeatmapDataLoader__ColorBoostEventConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*,
                                                                                ::GlobalNamespace::ColorBoostBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x2332950, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x2334208, size 0xa8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ColorBoostBeatmapEventData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData* colorBoostEventSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorBoostEventConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__ColorBoostEventConvertor(__BeatmapDataLoader__ColorBoostEventConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorBoostEventConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__ColorBoostEventConvertor(__BeatmapDataLoader__ColorBoostEventConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__ColorBoostEventConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorNoteConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14751)), TypeDefinitionIndex(TypeDefinitionIndex(14759)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst:
// 943 }), TypeDefinitionIndex(TypeDefinitionIndex(4264)), TypeDefinitionIndex(TypeDefinitionIndex(14820))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4268)) CS Name:
// ::BeatmapDataLoader::ColorNoteConvertor*
class CORDL_TYPE __BeatmapDataLoader__ColorNoteConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*,
                                                                                ::GlobalNamespace::NoteData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x2332624, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x23342b0, size 0xa8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData* colorNoteSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorNoteConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__ColorNoteConvertor(__BeatmapDataLoader__ColorNoteConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ColorNoteConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__ColorNoteConvertor(__BeatmapDataLoader__ColorNoteConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__ColorNoteConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapEventDataBoxDistributionParamTypeConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4269))
// CS Name: ::BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor*
class CORDL_TYPE __BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x2334358, size 0x8c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType Convert(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType distributionParamType);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor(__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor(__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightEventBoxGroupConvertor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4270))
// CS Name: ::BeatmapDataLoader::LightEventBoxGroupConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightEventBoxGroupConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _convertors, offset 0x10, size 0x8
  __declspec(property(get = __get__convertors, put = __set__convertors))::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*>* _convertors;

  /// @brief Field _lightGroups, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroups, put = __set__lightGroups))::GlobalNamespace::IEnvironmentLightGroups* _lightGroups;

  constexpr ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*>*& __get__convertors();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*>*> const& __get__convertors() const;

  constexpr void __set__convertors(::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*>* value);

  constexpr ::GlobalNamespace::IEnvironmentLightGroups*& __get__lightGroups();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentLightGroups*> const& __get__lightGroups() const;

  constexpr void __set__lightGroups(::GlobalNamespace::IEnvironmentLightGroups* value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor* New_ctor(::GlobalNamespace::IEnvironmentLightGroups* lightGroups);

  /// @brief Method .ctor, addr 0x2332a50, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IEnvironmentLightGroups* lightGroups);

  /// @brief Method Convert, addr 0x2332ba8, size 0x55c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup* eventBoxGroupSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightEventBoxGroupConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightEventBoxGroupConvertor(__BeatmapDataLoader__LightEventBoxGroupConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightEventBoxGroupConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightEventBoxGroupConvertor(__BeatmapDataLoader__LightEventBoxGroupConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightEventBoxGroupConvertor();

public:
  /// @brief Field _convertors, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*>* ____convertors;

  /// @brief Field _lightGroups, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentLightGroups* ____lightGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor, ____convertors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor, ____lightGroups) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VfxEventBoxGroupConvertor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4271))
// CS Name: ::BeatmapDataLoader::VfxEventBoxGroupConvertor*
class CORDL_TYPE __BeatmapDataLoader__VfxEventBoxGroupConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _convertors, offset 0x10, size 0x8
  __declspec(property(get = __get__convertors, put = __set__convertors))::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<
      ::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, ::GlobalNamespace::ILightGroup*>* _convertors;

  /// @brief Field _lightGroups, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroups, put = __set__lightGroups))::GlobalNamespace::IEnvironmentLightGroups* _lightGroups;

  constexpr ::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType,
                                                                     ::GlobalNamespace::ILightGroup*>*&
  __get__convertors();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<
      ::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, ::GlobalNamespace::ILightGroup*>*> const&
  __get__convertors() const;

  constexpr void __set__convertors(::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType,
                                                                                            ::GlobalNamespace::ILightGroup*>* value);

  constexpr ::GlobalNamespace::IEnvironmentLightGroups*& __get__lightGroups();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentLightGroups*> const& __get__lightGroups() const;

  constexpr void __set__lightGroups(::GlobalNamespace::IEnvironmentLightGroups* value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor* New_ctor(::GlobalNamespace::IEnvironmentLightGroups* lightGroups,
                                                                                            ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection);

  /// @brief Method .ctor, addr 0x2333200, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IEnvironmentLightGroups* lightGroups, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection);

  /// @brief Method Convert, addr 0x2333334, size 0x560, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup* eventBoxGroupSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__VfxEventBoxGroupConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__VfxEventBoxGroupConvertor(__BeatmapDataLoader__VfxEventBoxGroupConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__VfxEventBoxGroupConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__VfxEventBoxGroupConvertor(__BeatmapDataLoader__VfxEventBoxGroupConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__VfxEventBoxGroupConvertor();

public:
  /// @brief Field _convertors, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, ::GlobalNamespace::ILightGroup*>*
      ____convertors;

  /// @brief Field _lightGroups, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentLightGroups* ____lightGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor, ____convertors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor, ____lightGroups) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IntVfxEventBoxConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14798)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4297), inst: 1158 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4297)), TypeDefinitionIndex(TypeDefinitionIndex(4301)), TypeDefinitionIndex(TypeDefinitionIndex(4310)), TypeDefinitionIndex(TypeDefinitionIndex(14508))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4272))
// CS Name: ::BeatmapDataLoader::IntVfxEventBoxConvertor*
class CORDL_TYPE __BeatmapDataLoader__IntVfxEventBoxConvertor
    : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*, ::GlobalNamespace::IntVfxBeatmapEventDataBox*,
                                                    ::GlobalNamespace::ILightGroup*> {
public:
  // Declarations
  /// @brief Field _fxEventsCollection, offset 0x10, size 0x8
  __declspec(property(get = __get__fxEventsCollection, put = __set__fxEventsCollection))::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* _fxEventsCollection;

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*& __get__fxEventsCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*> const& __get__fxEventsCollection() const;

  constexpr void __set__fxEventsCollection(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__IntVfxEventBoxConvertor* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection);

  /// @brief Method .ctor, addr 0x2334ca4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection);

  /// @brief Method Convert, addr 0x2334d00, size 0x540, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IntVfxBeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroup);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxEventBoxConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__IntVfxEventBoxConvertor(__BeatmapDataLoader__IntVfxEventBoxConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxEventBoxConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__IntVfxEventBoxConvertor(__BeatmapDataLoader__IntVfxEventBoxConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__IntVfxEventBoxConvertor();

public:
  /// @brief Field _fxEventsCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* ____fxEventsCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__IntVfxEventBoxConvertor, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__IntVfxEventBoxConvertor, ____fxEventsCollection) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FloatVfxEventBoxConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14508)), TypeDefinitionIndex(TypeDefinitionIndex(4301)), TypeDefinitionIndex(TypeDefinitionIndex(14798)),
// TypeDefinitionIndex(TypeDefinitionIndex(4297)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4297), inst: 1157 }), TypeDefinitionIndex(TypeDefinitionIndex(4311))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4273)) CS Name: ::BeatmapDataLoader::FloatVfxEventBoxConvertor*
class CORDL_TYPE __BeatmapDataLoader__FloatVfxEventBoxConvertor
    : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*, ::GlobalNamespace::FloatFxBeatmapEventDataBox*,
                                                    ::GlobalNamespace::ILightGroup*> {
public:
  // Declarations
  /// @brief Field _fxEventsCollection, offset 0x10, size 0x8
  __declspec(property(get = __get__fxEventsCollection, put = __set__fxEventsCollection))::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* _fxEventsCollection;

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*& __get__fxEventsCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*> const& __get__fxEventsCollection() const;

  constexpr void __set__fxEventsCollection(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__FloatVfxEventBoxConvertor* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection);

  /// @brief Method .ctor, addr 0x2334c48, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection);

  /// @brief Method Convert, addr 0x23358dc, size 0x540, virtual true, abstract: false, final false
  inline ::GlobalNamespace::FloatFxBeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroup);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxEventBoxConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__FloatVfxEventBoxConvertor(__BeatmapDataLoader__FloatVfxEventBoxConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxEventBoxConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__FloatVfxEventBoxConvertor(__BeatmapDataLoader__FloatVfxEventBoxConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__FloatVfxEventBoxConvertor();

public:
  /// @brief Field _fxEventsCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* ____fxEventsCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__FloatVfxEventBoxConvertor, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__FloatVfxEventBoxConvertor, ____fxEventsCollection) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IntVfxBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4274))
// CS Name: ::BeatmapDataLoader::IntVfxBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__IntVfxBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x23355bc, size 0x118, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IntFxBaseData* Convert(int32_t vfxEventBaseData, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* collection);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__IntVfxBaseDataConvertor(__BeatmapDataLoader__IntVfxBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IntVfxBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__IntVfxBaseDataConvertor(__BeatmapDataLoader__IntVfxBaseDataConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__IntVfxBaseDataConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__IntVfxBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FloatVfxBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4275))
// CS Name: ::BeatmapDataLoader::FloatVfxBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__FloatVfxBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x2335e1c, size 0x128, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::FloatFxBaseData* Convert(int32_t vfxEventBaseData, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* collection);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__FloatVfxBaseDataConvertor(__BeatmapDataLoader__FloatVfxBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__FloatVfxBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__FloatVfxBaseDataConvertor(__BeatmapDataLoader__FloatVfxBaseDataConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__FloatVfxBaseDataConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__FloatVfxBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::IndexFilterConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4276))
// CS Name: ::BeatmapDataLoader::IndexFilterConvertor*
class CORDL_TYPE __BeatmapDataLoader__IndexFilterConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x2335240, size 0x37c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IndexFilter* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, int32_t groupSize);

  /// @brief Method IsIndexFilterValid, addr 0x233623c, size 0x88, virtual false, abstract: false, final false
  static inline bool IsIndexFilterValid(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, int32_t groupSize);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IndexFilterConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__IndexFilterConvertor(__BeatmapDataLoader__IndexFilterConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__IndexFilterConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__IndexFilterConvertor(__BeatmapDataLoader__IndexFilterConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__IndexFilterConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightColorEventBoxConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4320)), TypeDefinitionIndex(TypeDefinitionIndex(4297)), TypeDefinitionIndex(TypeDefinitionIndex(4301)),
// TypeDefinitionIndex(TypeDefinitionIndex(14805)), TypeDefinitionIndex(TypeDefinitionIndex(14508)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4297), inst: 1159 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4277)) CS Name: ::BeatmapDataLoader::LightColorEventBoxConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightColorEventBoxConvertor
    : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*,
                                                    ::GlobalNamespace::LightColorBeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*> {
public:
  // Declarations
  /// @brief Method Convert, addr 0x23362c4, size 0x338, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LightColorBeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor* New_ctor();

  /// @brief Method .ctor, addr 0x23343e4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColorEventBoxConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightColorEventBoxConvertor(__BeatmapDataLoader__LightColorEventBoxConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColorEventBoxConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightColorEventBoxConvertor(__BeatmapDataLoader__LightColorEventBoxConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightColorEventBoxConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightColoBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4278))
// CS Name: ::BeatmapDataLoader::LightColoBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightColoBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x23365fc, size 0xd8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightColorBaseData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData* saveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColoBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightColoBaseDataConvertor(__BeatmapDataLoader__LightColoBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightColoBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightColoBaseDataConvertor(__BeatmapDataLoader__LightColoBaseDataConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightColoBaseDataConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightRotationEventBoxConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4301)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4297), inst: 1160 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14807)), TypeDefinitionIndex(TypeDefinitionIndex(4322)), TypeDefinitionIndex(TypeDefinitionIndex(14508)), TypeDefinitionIndex(TypeDefinitionIndex(4297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4279))
// CS Name: ::BeatmapDataLoader::LightRotationEventBoxConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightRotationEventBoxConvertor
    : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*,
                                                    ::GlobalNamespace::LightRotationBeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*> {
public:
  // Declarations
  /// @brief Method Convert, addr 0x23368dc, size 0x568, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LightRotationBeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox* saveData, ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor* New_ctor();

  /// @brief Method .ctor, addr 0x233442c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationEventBoxConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightRotationEventBoxConvertor(__BeatmapDataLoader__LightRotationEventBoxConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationEventBoxConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightRotationEventBoxConvertor(__BeatmapDataLoader__LightRotationEventBoxConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightRotationEventBoxConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightRotationBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4280))
// CS Name: ::BeatmapDataLoader::LightRotationBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightRotationBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x2336e44, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightRotationBaseData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData* saveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightRotationBaseDataConvertor(__BeatmapDataLoader__LightRotationBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightRotationBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightRotationBaseDataConvertor(__BeatmapDataLoader__LightRotationBaseDataConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightRotationBaseDataConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightTranslationEventBoxConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4297)), TypeDefinitionIndex(TypeDefinitionIndex(4301)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4297), inst: 1161
// }), TypeDefinitionIndex(TypeDefinitionIndex(14810)), TypeDefinitionIndex(TypeDefinitionIndex(4324)), TypeDefinitionIndex(TypeDefinitionIndex(14508))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4281)) CS Name: ::BeatmapDataLoader::LightTranslationEventBoxConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightTranslationEventBoxConvertor
    : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*,
                                                    ::GlobalNamespace::LightTranslationBeatmapEventDataBox*, ::GlobalNamespace::ILightGroup*> {
public:
  // Declarations
  /// @brief Method Convert, addr 0x2336f10, size 0x568, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LightTranslationBeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox* saveData,
                                                                         ::GlobalNamespace::ILightGroup* lightGroupData);

  static inline ::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor* New_ctor();

  /// @brief Method .ctor, addr 0x2334474, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationEventBoxConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightTranslationEventBoxConvertor(__BeatmapDataLoader__LightTranslationEventBoxConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationEventBoxConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightTranslationEventBoxConvertor(__BeatmapDataLoader__LightTranslationEventBoxConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightTranslationEventBoxConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightTranslationBaseDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4282))
// CS Name: ::BeatmapDataLoader::LightTranslationBaseDataConvertor*
class CORDL_TYPE __BeatmapDataLoader__LightTranslationBaseDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x2337478, size 0xa8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightTranslationBaseData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData* saveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationBaseDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__LightTranslationBaseDataConvertor(__BeatmapDataLoader__LightTranslationBaseDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__LightTranslationBaseDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__LightTranslationBaseDataConvertor(__BeatmapDataLoader__LightTranslationBaseDataConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__LightTranslationBaseDataConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ObstacleConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 944 }), TypeDefinitionIndex(TypeDefinitionIndex(4264)),
// TypeDefinitionIndex(TypeDefinitionIndex(14751)), TypeDefinitionIndex(TypeDefinitionIndex(14761)), TypeDefinitionIndex(TypeDefinitionIndex(14827))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4283)) CS Name: ::BeatmapDataLoader::ObstacleConvertor*
class CORDL_TYPE __BeatmapDataLoader__ObstacleConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*,
                                                                                ::GlobalNamespace::ObstacleData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x23326d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x2337520, size 0xec, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ObstacleData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData* obstacleSaveData);

  /// @brief Method GetNoteLineLayer, addr 0x233760c, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteLineLayer GetNoteLineLayer(int32_t lineLayer);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ObstacleConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__ObstacleConvertor(__BeatmapDataLoader__ObstacleConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__ObstacleConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__ObstacleConvertor(__BeatmapDataLoader__ObstacleConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__ObstacleConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RotationEventConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14727)), TypeDefinitionIndex(TypeDefinitionIndex(14788)), TypeDefinitionIndex(TypeDefinitionIndex(14739)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 940 }), TypeDefinitionIndex(TypeDefinitionIndex(4264))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4284)) CS
// Name: ::BeatmapDataLoader::RotationEventConvertor*
class CORDL_TYPE __BeatmapDataLoader__RotationEventConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*,
                                                                                ::GlobalNamespace::SpawnRotationBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x2332894, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x2337620, size 0xb4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SpawnRotationBeatmapEventData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData* rotationEventSaveData);

  /// @brief Method SpawnRotationEventType, addr 0x23376d4, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType SpawnRotationEventType(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime executionTime);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__RotationEventConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__RotationEventConvertor(__BeatmapDataLoader__RotationEventConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__RotationEventConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__RotationEventConvertor(__BeatmapDataLoader__RotationEventConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__RotationEventConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4264)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 945 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14825)), TypeDefinitionIndex(TypeDefinitionIndex(14751)), TypeDefinitionIndex(TypeDefinitionIndex(14765))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4285)) CS Name: ::BeatmapDataLoader::SliderConvertor*
class CORDL_TYPE __BeatmapDataLoader__SliderConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*,
                                                                                ::GlobalNamespace::SliderData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__SliderConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x233272c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x23376e4, size 0x110, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SliderData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData* sliderSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SliderConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__SliderConvertor(__BeatmapDataLoader__SliderConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SliderConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__SliderConvertor(__BeatmapDataLoader__SliderConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__SliderConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__SliderConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BurstSliderConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 942 }), TypeDefinitionIndex(TypeDefinitionIndex(14765)),
// TypeDefinitionIndex(TypeDefinitionIndex(4264)), TypeDefinitionIndex(TypeDefinitionIndex(14826)), TypeDefinitionIndex(TypeDefinitionIndex(14751))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4286)) CS Name: ::BeatmapDataLoader::BurstSliderConvertor*
class CORDL_TYPE __BeatmapDataLoader__BurstSliderConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*,
                                                                                ::GlobalNamespace::SliderData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x2332784, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x23377f4, size 0x104, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SliderData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData* sliderSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BurstSliderConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__BurstSliderConvertor(__BeatmapDataLoader__BurstSliderConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__BurstSliderConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__BurstSliderConvertor(__BeatmapDataLoader__BurstSliderConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__BurstSliderConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::WaypointConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14751)), TypeDefinitionIndex(TypeDefinitionIndex(4264)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4264), inst: 946
// }), TypeDefinitionIndex(TypeDefinitionIndex(14822)), TypeDefinitionIndex(TypeDefinitionIndex(14768))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4287)) CS Name:
// ::BeatmapDataLoader::WaypointConvertor*
class CORDL_TYPE __BeatmapDataLoader__WaypointConvertor
    : public ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*,
                                                                                ::GlobalNamespace::WaypointData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor* New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method .ctor, addr 0x23327dc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method Convert, addr 0x23378f8, size 0xc4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::WaypointData* Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData* waypointSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__WaypointConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__WaypointConvertor(__BeatmapDataLoader__WaypointConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__WaypointConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__WaypointConvertor(__BeatmapDataLoader__WaypointConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__WaypointConvertor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpecialEventsFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4288))
// CS Name: ::BeatmapDataLoader::SpecialEventsFilter*
class CORDL_TYPE __BeatmapDataLoader__SpecialEventsFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventTypesToFilter, offset 0x10, size 0x8
  __declspec(property(get = __get__eventTypesToFilter,
                      put = __set__eventTypesToFilter))::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* _eventTypesToFilter;

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*& __get__eventTypesToFilter();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*> const&
  __get__eventTypesToFilter() const;

  constexpr void __set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* value);

  static inline ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                                      ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  /// @brief Method .ctor, addr 0x2332348, size 0x2dc, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  /// @brief Method IsEventValid, addr 0x2334088, size 0x64, virtual false, abstract: false, final false
  inline bool IsEventValid(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType basicBeatmapEventType);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SpecialEventsFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader__SpecialEventsFilter(__BeatmapDataLoader__SpecialEventsFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader__SpecialEventsFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader__SpecialEventsFilter(__BeatmapDataLoader__SpecialEventsFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader__SpecialEventsFilter();

public:
  /// @brief Field _eventTypesToFilter, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* ____eventTypesToFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter, ____eventTypesToFilter) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4289))
// CS Name: ::BeatmapDataLoader*
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using SpecialEventsFilter = ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter;

  using WaypointConvertor = ::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor;

  using BurstSliderConvertor = ::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor;

  using SliderConvertor = ::GlobalNamespace::__BeatmapDataLoader__SliderConvertor;

  using RotationEventConvertor = ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor;

  using ObstacleConvertor = ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor;

  using LightTranslationBaseDataConvertor = ::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor;

  using LightTranslationEventBoxConvertor = ::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor;

  using LightRotationBaseDataConvertor = ::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor;

  using LightRotationEventBoxConvertor = ::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor;

  using LightColoBaseDataConvertor = ::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor;

  using LightColorEventBoxConvertor = ::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor;

  using IndexFilterConvertor = ::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor;

  using FloatVfxBaseDataConvertor = ::GlobalNamespace::__BeatmapDataLoader__FloatVfxBaseDataConvertor;

  using IntVfxBaseDataConvertor = ::GlobalNamespace::__BeatmapDataLoader__IntVfxBaseDataConvertor;

  using FloatVfxEventBoxConvertor = ::GlobalNamespace::__BeatmapDataLoader__FloatVfxEventBoxConvertor;

  using IntVfxEventBoxConvertor = ::GlobalNamespace::__BeatmapDataLoader__IntVfxEventBoxConvertor;

  using VfxEventBoxGroupConvertor = ::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor;

  using LightEventBoxGroupConvertor = ::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor;

  using BeatmapEventDataBoxDistributionParamTypeConvertor = ::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor;

  using ColorNoteConvertor = ::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor;

  using ColorBoostEventConvertor = ::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor;

  using BpmEventConvertor = ::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor;

  using BombNoteConvertor = ::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor;

  template <typename TBase, typename TIn, typename TOut> using BeatmapDataItemConvertor_3 = ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>;

  using BasicEventConvertor = ::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor;

  using BpmTimeProcessor = ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor;

  /// @brief Method GetBeatmapDataFromBeatmapSaveData, addr 0x2330c34, size 0x1460, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromBeatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                  float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords,
                                                                                  ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                                                                  ::GlobalNamespace::DefaultEnvironmentEvents* defaultEnvironmentEvents,
                                                                                  ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* defaultLightshowEventsSaveData,
                                                                                  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::System::Diagnostics::Stopwatch* stopwatch);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveData, addr 0x232f998, size 0x2b4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData);

  /// @brief Method GetBeatmapDataFromSaveData, addr 0x2330038, size 0x1e8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                           float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method ConvertColorType, addr 0x2333d34, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorType ConvertColorType(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType noteType);

  /// @brief Method ConvertColorType, addr 0x2333d44, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentColorType ConvertColorType(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType environmentColorType);

  /// @brief Method ConvertBeatmapEventTransitionType, addr 0x2333d58, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventTransitionType ConvertBeatmapEventTransitionType(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType transitionType);

  /// @brief Method ConvertAxis, addr 0x2333d6c, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightAxis ConvertAxis(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis);

  /// @brief Method ConvertEaseType, addr 0x2333d80, size 0xe0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EaseType ConvertEaseType(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType);

  /// @brief Method ConvertNoteLineLayer, addr 0x2333e60, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteLineLayer ConvertNoteLineLayer(int32_t layer);

  /// @brief Method ConvertSliderType, addr 0x2333e74, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__SliderData__Type ConvertSliderType(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType sliderType);

  /// @brief Method ConvertRotationOrientation, addr 0x2333e84, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightRotationDirection ConvertRotationOrientation(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection);

  static inline ::GlobalNamespace::BeatmapDataLoader* New_ctor();

  /// @brief Method .ctor, addr 0x2333e98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader(BeatmapDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader(BeatmapDataLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader();

public:
  /// @brief Field kDefaultNumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultNumberOfLines{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataLoader, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*, "", "BeatmapDataLoader/BasicEventConvertor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3, "", "BeatmapDataLoader/BeatmapDataItemConvertor`3");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor*, "", "BeatmapDataLoader/BeatmapEventDataBoxDistributionParamTypeConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*, "", "BeatmapDataLoader/BombNoteConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*, "", "BeatmapDataLoader/BpmEventConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*, "", "BeatmapDataLoader/BpmTimeProcessor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*, "", "BeatmapDataLoader/BurstSliderConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*, "", "BeatmapDataLoader/ColorBoostEventConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*, "", "BeatmapDataLoader/ColorNoteConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__FloatVfxBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__FloatVfxBaseDataConvertor*, "", "BeatmapDataLoader/FloatVfxBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__FloatVfxEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__FloatVfxEventBoxConvertor*, "", "BeatmapDataLoader/FloatVfxEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor*, "", "BeatmapDataLoader/IndexFilterConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__IntVfxBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__IntVfxBaseDataConvertor*, "", "BeatmapDataLoader/IntVfxBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__IntVfxEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__IntVfxEventBoxConvertor*, "", "BeatmapDataLoader/IntVfxEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor*, "", "BeatmapDataLoader/LightColoBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor*, "", "BeatmapDataLoader/LightColorEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__LightEventBoxGroupConvertor*, "", "BeatmapDataLoader/LightEventBoxGroupConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor*, "", "BeatmapDataLoader/LightRotationBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor*, "", "BeatmapDataLoader/LightRotationEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor*, "", "BeatmapDataLoader/LightTranslationBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor*, "", "BeatmapDataLoader/LightTranslationEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*, "", "BeatmapDataLoader/ObstacleConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*, "", "BeatmapDataLoader/RotationEventConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__SliderConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*, "", "BeatmapDataLoader/SliderConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*, "", "BeatmapDataLoader/SpecialEventsFilter");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__VfxEventBoxGroupConvertor*, "", "BeatmapDataLoader/VfxEventBoxGroupConvertor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*, "", "BeatmapDataLoader/WaypointConvertor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData, "", "BeatmapDataLoader/BpmTimeProcessor/BpmChangeData");
