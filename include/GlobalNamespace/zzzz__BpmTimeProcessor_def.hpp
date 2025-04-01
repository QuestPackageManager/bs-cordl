#pragma once
// IWYU pragma private; include "GlobalNamespace/BpmTimeProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
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
struct BpmTimeProcessor_BpmChangeData;
}
namespace GlobalNamespace {
class BpmTimeProcessor___c;
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
class BpmTimeProcessor___c;
}
namespace GlobalNamespace {
struct BpmTimeProcessor_BpmChangeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BpmTimeProcessor);
MARK_REF_PTR_T(::GlobalNamespace::BpmTimeProcessor___c);
MARK_VAL_T(::GlobalNamespace::BpmTimeProcessor_BpmChangeData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BpmTimeProcessor/BpmChangeData
struct CORDL_TYPE BpmTimeProcessor_BpmChangeData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26b6abc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmTimeProcessor_BpmChangeData();

  // Ctor Parameters [CppParam { name: "bpmChangeStartTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpmChangeStartBpmTime", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BpmTimeProcessor_BpmChangeData(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12885 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field bpmChangeStartTime, offset: 0x0, size: 0x4, def value: None
  float_t bpmChangeStartTime;

  /// @brief Field bpmChangeStartBpmTime, offset: 0x4, size: 0x4, def value: None
  float_t bpmChangeStartBpmTime;

  /// @brief Field bpm, offset: 0x8, size: 0x4, def value: None
  float_t bpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BpmTimeProcessor_BpmChangeData, bpmChangeStartTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmTimeProcessor_BpmChangeData, bpmChangeStartBpmTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmTimeProcessor_BpmChangeData, bpm) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BpmTimeProcessor_BpmChangeData, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BpmTimeProcessor/<>c
class CORDL_TYPE BpmTimeProcessor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BpmTimeProcessor___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* __9__3_0;

  static inline ::GlobalNamespace::BpmTimeProcessor___c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x26b6b2c, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e);

  /// @brief Method .ctor, addr 0x26b6b24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BpmTimeProcessor___c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::BpmTimeProcessor___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmTimeProcessor___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BpmTimeProcessor___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmTimeProcessor___c(BpmTimeProcessor___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmTimeProcessor___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmTimeProcessor___c(BpmTimeProcessor___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BpmTimeProcessor___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatToTimeConverter, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BpmTimeProcessor
class CORDL_TYPE BpmTimeProcessor : public ::System::Object {
public:
  // Declarations
  using BpmChangeData = ::GlobalNamespace::BpmTimeProcessor_BpmChangeData;

  using __c = ::GlobalNamespace::BpmTimeProcessor___c;

  /// @brief Field _bpmChangeDataList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmChangeDataList,
                      put = __cordl_internal_set__bpmChangeDataList)) ::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>* _bpmChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentBpmChangesDataIdx, put = __cordl_internal_set_currentBpmChangesDataIdx)) int32_t currentBpmChangesDataIdx;

  /// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConverter"
  constexpr operator ::GlobalNamespace::IBeatToTimeConverter*() noexcept;

  /// @brief Method CalculateTime, addr 0x26b62b0, size 0x1c, virtual false, abstract: false, final false
  static inline float_t CalculateTime(::GlobalNamespace::BpmTimeProcessor_BpmChangeData prevBpmChangeData, float_t beat);

  /// @brief Method ConvertBeatToTime, addr 0x26b69ac, size 0x108, virtual true, abstract: false, final true
  inline float_t ConvertBeatToTime(float_t beat);

  static inline ::GlobalNamespace::BpmTimeProcessor* New_ctor(::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData);

  static inline ::GlobalNamespace::BpmTimeProcessor* New_ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEventsSaveData);

  static inline ::GlobalNamespace::BpmTimeProcessor* New_ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events);

  /// @brief Method Reset, addr 0x26b6ab4, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>* const& __cordl_internal_get__bpmChangeDataList() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>*& __cordl_internal_get__bpmChangeDataList();

  constexpr int32_t const& __cordl_internal_get_currentBpmChangesDataIdx() const;

  constexpr int32_t& __cordl_internal_get_currentBpmChangesDataIdx();

  constexpr void __cordl_internal_set__bpmChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>* value);

  constexpr void __cordl_internal_set_currentBpmChangesDataIdx(int32_t value);

  /// @brief Method .ctor, addr 0x26b6800, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData);

  /// @brief Method .ctor, addr 0x26b62cc, size 0x534, virtual false, abstract: false, final false
  inline void _ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEventsSaveData);

  /// @brief Method .ctor, addr 0x26b5ef0, size 0x3c0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12887 };

  /// @brief Field _bpmChangeDataList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>* ____bpmChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentBpmChangesDataIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BpmTimeProcessor, ____bpmChangeDataList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmTimeProcessor, ___currentBpmChangesDataIdx) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BpmTimeProcessor, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BpmTimeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmTimeProcessor*, "", "BpmTimeProcessor");
NEED_NO_BOX(::GlobalNamespace::BpmTimeProcessor___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmTimeProcessor___c*, "", "BpmTimeProcessor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmTimeProcessor_BpmChangeData, "", "BpmTimeProcessor/BpmChangeData");
