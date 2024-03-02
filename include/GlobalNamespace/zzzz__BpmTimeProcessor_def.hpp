#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BpmTimeProcessor)
namespace BeatmapLevelSaveDataVersion4 {
class AudioSaveData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class EventData;
}
namespace BeatmapSaveDataVersion3 {
class BpmChangeEventData;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
struct __BpmTimeProcessor__BpmChangeData;
}
namespace GlobalNamespace {
class __BpmTimeProcessor____c;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BpmTimeProcessor;
}
namespace GlobalNamespace {
class __BpmTimeProcessor____c;
}
namespace GlobalNamespace {
struct __BpmTimeProcessor__BpmChangeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BpmTimeProcessor);
MARK_REF_PTR_T(::GlobalNamespace::__BpmTimeProcessor____c);
MARK_VAL_T(::GlobalNamespace::__BpmTimeProcessor__BpmChangeData);
// Type: ::BpmChangeData
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BpmTimeProcessor::BpmChangeData
struct CORDL_TYPE __BpmTimeProcessor__BpmChangeData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x12bb598, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BpmTimeProcessor__BpmChangeData();

  // Ctor Parameters [CppParam { name: "bpmChangeStartTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpmChangeStartBpmTime", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BpmTimeProcessor__BpmChangeData(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) noexcept;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BpmTimeProcessor__BpmChangeData, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BpmTimeProcessor__BpmChangeData, bpmChangeStartTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BpmTimeProcessor__BpmChangeData, bpmChangeStartBpmTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BpmTimeProcessor__BpmChangeData, bpm) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BpmTimeProcessor::<>c*
class CORDL_TYPE __BpmTimeProcessor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BpmTimeProcessor____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* __9__3_0;

  static inline ::GlobalNamespace::__BpmTimeProcessor____c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x12bbd48, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e);

  /// @brief Method .ctor, addr 0x12bbd40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BpmTimeProcessor____c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__BpmTimeProcessor____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BpmTimeProcessor____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BpmTimeProcessor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BpmTimeProcessor____c(__BpmTimeProcessor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BpmTimeProcessor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BpmTimeProcessor____c(__BpmTimeProcessor____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BpmTimeProcessor____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BpmTimeProcessor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BpmTimeProcessor*
class CORDL_TYPE BpmTimeProcessor : public ::System::Object {
public:
  // Declarations
  using BpmChangeData = ::GlobalNamespace::__BpmTimeProcessor__BpmChangeData;

  using __c = ::GlobalNamespace::__BpmTimeProcessor____c;

  /// @brief Field _bpmChangeDataList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmChangeDataList,
                      put = __cordl_internal_set__bpmChangeDataList))::System::Collections::Generic::List_1<::GlobalNamespace::__BpmTimeProcessor__BpmChangeData>* _bpmChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentBpmChangesDataIdx, put = __cordl_internal_set_currentBpmChangesDataIdx)) int32_t currentBpmChangesDataIdx;

  /// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConverter"
  constexpr operator ::GlobalNamespace::IBeatToTimeConverter*() noexcept;

  /// @brief Method CalculateTime, addr 0x12bb5a4, size 0x1c, virtual false, abstract: false, final false
  static inline float_t CalculateTime(::GlobalNamespace::__BpmTimeProcessor__BpmChangeData prevBpmChangeData, float_t beat);

  /// @brief Method ConvertBeatToTime, addr 0x12bbbcc, size 0x108, virtual true, abstract: false, final true
  inline float_t ConvertBeatToTime(float_t beat);

  static inline ::GlobalNamespace::BpmTimeProcessor* New_ctor(::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData);

  static inline ::GlobalNamespace::BpmTimeProcessor* New_ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEventsSaveData);

  static inline ::GlobalNamespace::BpmTimeProcessor* New_ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events);

  /// @brief Method Reset, addr 0x12bbcd4, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BpmTimeProcessor__BpmChangeData>*& __cordl_internal_get__bpmChangeDataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BpmTimeProcessor__BpmChangeData>*> const& __cordl_internal_get__bpmChangeDataList() const;

  constexpr int32_t const& __cordl_internal_get_currentBpmChangesDataIdx() const;

  constexpr int32_t& __cordl_internal_get_currentBpmChangesDataIdx();

  constexpr void __cordl_internal_set__bpmChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::__BpmTimeProcessor__BpmChangeData>* value);

  constexpr void __cordl_internal_set_currentBpmChangesDataIdx(int32_t value);

  /// @brief Method .ctor, addr 0x12bba48, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData);

  /// @brief Method .ctor, addr 0x12bb5c0, size 0x488, virtual false, abstract: false, final false
  inline void _ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEventsSaveData);

  /// @brief Method .ctor, addr 0x12bb210, size 0x388, virtual false, abstract: false, final false
  inline void _ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events);

  /// @brief Convert to "::GlobalNamespace::IBeatToTimeConverter"
  constexpr ::GlobalNamespace::IBeatToTimeConverter* i___GlobalNamespace__IBeatToTimeConverter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmTimeProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BpmTimeProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmTimeProcessor(BpmTimeProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmTimeProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmTimeProcessor(BpmTimeProcessor const&) = delete;

  /// @brief Field _bpmChangeDataList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BpmTimeProcessor__BpmChangeData>* ____bpmChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentBpmChangesDataIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BpmTimeProcessor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmTimeProcessor, ____bpmChangeDataList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmTimeProcessor, ___currentBpmChangesDataIdx) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BpmTimeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmTimeProcessor*, "", "BpmTimeProcessor");
NEED_NO_BOX(::GlobalNamespace::__BpmTimeProcessor____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BpmTimeProcessor____c*, "", "BpmTimeProcessor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BpmTimeProcessor__BpmChangeData, "", "BpmTimeProcessor/BpmChangeData");
