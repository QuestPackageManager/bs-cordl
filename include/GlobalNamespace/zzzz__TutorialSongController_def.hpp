#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialSongController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialSongController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct SequenceCutInfo_TutorialSongController_NoteType;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class TutorialSongController_InitData;
}
namespace GlobalNamespace {
class TutorialSongController_SequenceCutInfo;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialArcSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialChainSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialObjectSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialObstacleSpawnData;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct SequenceCutInfo_TutorialSongController_NoteType;
}
namespace GlobalNamespace {
class TutorialSongController;
}
namespace GlobalNamespace {
class TutorialSongController_InitData;
}
namespace GlobalNamespace {
class TutorialSongController_SequenceCutInfo;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialArcSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialChainSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialObjectSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController_TutorialObstacleSpawnData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_InitData);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_SequenceCutInfo);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_TutorialArcSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/InitData
class CORDL_TYPE TutorialSongController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapData, put = __cordl_internal_set_beatmapData)) ::GlobalNamespace::BeatmapData* beatmapData;

  /// @brief Field songBpm, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_songBpm, put = __cordl_internal_set_songBpm)) float_t songBpm;

  static inline ::GlobalNamespace::TutorialSongController_InitData* New_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData);

  constexpr ::GlobalNamespace::BeatmapData* const& __cordl_internal_get_beatmapData() const;

  constexpr ::GlobalNamespace::BeatmapData*& __cordl_internal_get_beatmapData();

  constexpr float_t const& __cordl_internal_get_songBpm() const;

  constexpr float_t& __cordl_internal_get_songBpm();

  constexpr void __cordl_internal_set_beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr void __cordl_internal_set_songBpm(float_t value);

  /// @brief Method .ctor, addr 0x3bf3640, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_InitData(TutorialSongController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_InitData(TutorialSongController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4706 };

  /// @brief Field songBpm, offset: 0x10, size: 0x4, def value: None
  float_t ___songBpm;

  /// @brief Field beatmapData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ___beatmapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_InitData, ___songBpm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_InitData, ___beatmapData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TutorialSongController/SequenceCutInfo/NoteType
struct CORDL_TYPE SequenceCutInfo_TutorialSongController_NoteType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SequenceCutInfo_TutorialSongController_NoteType_Unwrapped
  enum struct __SequenceCutInfo_TutorialSongController_NoteType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Chain = static_cast<int32_t>(0x1),
    __E_Arc = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SequenceCutInfo_TutorialSongController_NoteType_Unwrapped() const noexcept {
    return static_cast<__SequenceCutInfo_TutorialSongController_NoteType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SequenceCutInfo_TutorialSongController_NoteType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SequenceCutInfo_TutorialSongController_NoteType(int32_t value__) noexcept;

  /// @brief Field Arc value: I32(2)
  static ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType const Arc;

  /// @brief Field Chain value: I32(1)
  static ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType const Chain;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, TutorialSongController::SequenceCutInfo::NoteType
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/SequenceCutInfo
class CORDL_TYPE TutorialSongController_SequenceCutInfo : public ::System::Object {
public:
  // Declarations
  using NoteType = ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType;

  /// @brief Field allDirectionOK, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_allDirectionOK, put = __cordl_internal_set_allDirectionOK)) bool allDirectionOK;

  __declspec(property(get = get_allIsOK)) bool allIsOK;

  /// @brief Field allSaberTypeOK, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_allSaberTypeOK, put = __cordl_internal_set_allSaberTypeOK)) bool allSaberTypeOK;

  /// @brief Field allSpeedOK, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_allSpeedOK, put = __cordl_internal_set_allSpeedOK)) bool allSpeedOK;

  /// @brief Field anyWasCutTooSoon, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_anyWasCutTooSoon, put = __cordl_internal_set_anyWasCutTooSoon)) bool anyWasCutTooSoon;

  /// @brief Field cutObjects, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_cutObjects, put = __cordl_internal_set_cutObjects)) int32_t cutObjects;

  /// @brief Field cuttableObjectsCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cuttableObjectsCount, put = __cordl_internal_set_cuttableObjectsCount)) int32_t cuttableObjectsCount;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_missedAny)) bool missedAny;

  /// @brief Field missedObjects, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_missedObjects, put = __cordl_internal_set_missedObjects)) int32_t missedObjects;

  /// @brief Field noteType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_noteType, put = __cordl_internal_set_noteType)) ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType noteType;

  /// @brief Method MarkCut, addr 0x3bf2ff0, size 0x50, virtual false, abstract: false, final false
  inline void MarkCut(::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method MarkMiss, addr 0x3bf3244, size 0x10, virtual false, abstract: false, final false
  inline void MarkMiss();

  static inline ::GlobalNamespace::TutorialSongController_SequenceCutInfo* New_ctor(int32_t cuttableObjectsCount, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType noteType);

  constexpr bool const& __cordl_internal_get_allDirectionOK() const;

  constexpr bool& __cordl_internal_get_allDirectionOK();

  constexpr bool const& __cordl_internal_get_allSaberTypeOK() const;

  constexpr bool& __cordl_internal_get_allSaberTypeOK();

  constexpr bool const& __cordl_internal_get_allSpeedOK() const;

  constexpr bool& __cordl_internal_get_allSpeedOK();

  constexpr bool const& __cordl_internal_get_anyWasCutTooSoon() const;

  constexpr bool& __cordl_internal_get_anyWasCutTooSoon();

  constexpr int32_t const& __cordl_internal_get_cutObjects() const;

  constexpr int32_t& __cordl_internal_get_cutObjects();

  constexpr int32_t const& __cordl_internal_get_cuttableObjectsCount() const;

  constexpr int32_t& __cordl_internal_get_cuttableObjectsCount();

  constexpr int32_t const& __cordl_internal_get_missedObjects() const;

  constexpr int32_t& __cordl_internal_get_missedObjects();

  constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType const& __cordl_internal_get_noteType() const;

  constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType& __cordl_internal_get_noteType();

  constexpr void __cordl_internal_set_allDirectionOK(bool value);

  constexpr void __cordl_internal_set_allSaberTypeOK(bool value);

  constexpr void __cordl_internal_set_allSpeedOK(bool value);

  constexpr void __cordl_internal_set_anyWasCutTooSoon(bool value);

  constexpr void __cordl_internal_set_cutObjects(int32_t value);

  constexpr void __cordl_internal_set_cuttableObjectsCount(int32_t value);

  constexpr void __cordl_internal_set_missedObjects(int32_t value);

  constexpr void __cordl_internal_set_noteType(::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType value);

  /// @brief Method .ctor, addr 0x3bf3344, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t cuttableObjectsCount, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType noteType);

  /// @brief Method get_allIsOK, addr 0x3bf30c0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allIsOK();

  /// @brief Method get_isFinished, addr 0x3bf30a8, size 0x18, virtual false, abstract: false, final false
  inline bool get_isFinished();

  /// @brief Method get_missedAny, addr 0x3bf326c, size 0x10, virtual false, abstract: false, final false
  inline bool get_missedAny();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_SequenceCutInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_SequenceCutInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_SequenceCutInfo(TutorialSongController_SequenceCutInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_SequenceCutInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_SequenceCutInfo(TutorialSongController_SequenceCutInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4708 };

  /// @brief Field anyWasCutTooSoon, offset: 0x10, size: 0x1, def value: None
  bool ___anyWasCutTooSoon;

  /// @brief Field allSaberTypeOK, offset: 0x11, size: 0x1, def value: None
  bool ___allSaberTypeOK;

  /// @brief Field allSpeedOK, offset: 0x12, size: 0x1, def value: None
  bool ___allSpeedOK;

  /// @brief Field allDirectionOK, offset: 0x13, size: 0x1, def value: None
  bool ___allDirectionOK;

  /// @brief Field noteType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType ___noteType;

  /// @brief Field cuttableObjectsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___cuttableObjectsCount;

  /// @brief Field cutObjects, offset: 0x1c, size: 0x4, def value: None
  int32_t ___cutObjects;

  /// @brief Field missedObjects, offset: 0x20, size: 0x4, def value: None
  int32_t ___missedObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___anyWasCutTooSoon) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___allSaberTypeOK) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___allSpeedOK) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___allDirectionOK) == 0x13, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___noteType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___cuttableObjectsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___cutObjects) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_SequenceCutInfo, ___missedObjects) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_SequenceCutInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/TutorialObjectSpawnData
class CORDL_TYPE TutorialSongController_TutorialObjectSpawnData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_beatOffset, put = __cordl_internal_set_beatOffset)) int32_t beatOffset;

  /// @brief Field firstTimeBeatOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_firstTimeBeatOffset, put = __cordl_internal_set_firstTimeBeatOffset)) int32_t firstTimeBeatOffset;

  /// @brief Field lineIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lineIndex, put = __cordl_internal_set_lineIndex)) int32_t lineIndex;

  /// @brief Field signal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_signal, put = __cordl_internal_set_signal)) ::UnityW<::GlobalNamespace::Signal> signal;

  static inline ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex);

  constexpr int32_t const& __cordl_internal_get_beatOffset() const;

  constexpr int32_t& __cordl_internal_get_beatOffset();

  constexpr int32_t const& __cordl_internal_get_firstTimeBeatOffset() const;

  constexpr int32_t& __cordl_internal_get_firstTimeBeatOffset();

  constexpr int32_t const& __cordl_internal_get_lineIndex() const;

  constexpr int32_t& __cordl_internal_get_lineIndex();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get_signal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get_signal();

  constexpr void __cordl_internal_set_beatOffset(int32_t value);

  constexpr void __cordl_internal_set_firstTimeBeatOffset(int32_t value);

  constexpr void __cordl_internal_set_lineIndex(int32_t value);

  constexpr void __cordl_internal_set_signal(::UnityW<::GlobalNamespace::Signal> value);

  /// @brief Method .ctor, addr 0x3bf3678, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_TutorialObjectSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialObjectSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_TutorialObjectSpawnData(TutorialSongController_TutorialObjectSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialObjectSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_TutorialObjectSpawnData(TutorialSongController_TutorialObjectSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4709 };

  /// @brief Field signal, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ___signal;

  /// @brief Field beatOffset, offset: 0x18, size: 0x4, def value: None
  int32_t ___beatOffset;

  /// @brief Field firstTimeBeatOffset, offset: 0x1c, size: 0x4, def value: None
  int32_t ___firstTimeBeatOffset;

  /// @brief Field lineIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___lineIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData, ___signal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData, ___beatOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData, ___firstTimeBeatOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData, ___lineIndex) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NoteLineLayer, TutorialSongController::TutorialObjectSpawnData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/TutorialJumpingNoteSpawnData
class CORDL_TYPE TutorialSongController_TutorialJumpingNoteSpawnData : public ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field noteLineLayer, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLineLayer, put = __cordl_internal_set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  static inline ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                                 ::GlobalNamespace::NoteLineLayer noteLineLayer);

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_noteLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_noteLineLayer();

  constexpr void __cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method .ctor, addr 0x3bf36bc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_TutorialJumpingNoteSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialJumpingNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_TutorialJumpingNoteSpawnData(TutorialSongController_TutorialJumpingNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialJumpingNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_TutorialJumpingNoteSpawnData(TutorialSongController_TutorialJumpingNoteSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4710 };

  /// @brief Field noteLineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData, ___noteLineLayer) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ColorType, NoteCutDirection, TutorialSongController::TutorialJumpingNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/TutorialBasicNoteSpawnData
class CORDL_TYPE TutorialSongController_TutorialBasicNoteSpawnData : public ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData {
public:
  // Declarations
  /// @brief Field colorType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::ColorType colorType;

  /// @brief Field cutDirection, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_cutDirection, put = __cordl_internal_set_cutDirection)) ::GlobalNamespace::NoteCutDirection cutDirection;

  static inline ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                               ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                                               ::GlobalNamespace::ColorType colorType);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get_cutDirection() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get_cutDirection();

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method .ctor, addr 0x3bf25c0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                    ::GlobalNamespace::NoteCutDirection cutDirection, ::GlobalNamespace::ColorType colorType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_TutorialBasicNoteSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialBasicNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_TutorialBasicNoteSpawnData(TutorialSongController_TutorialBasicNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialBasicNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_TutorialBasicNoteSpawnData(TutorialSongController_TutorialBasicNoteSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4711 };

  /// @brief Field cutDirection, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___cutDirection;

  /// @brief Field colorType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData, ___cutDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData, ___colorType) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ColorType, NoteCutDirection, NoteLineLayer, TutorialSongController::TutorialObjectSpawnData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/TutorialChainSpawnData
class CORDL_TYPE TutorialSongController_TutorialChainSpawnData : public ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field colorType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::ColorType colorType;

  /// @brief Field headCutDirection, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_headCutDirection, put = __cordl_internal_set_headCutDirection)) ::GlobalNamespace::NoteCutDirection headCutDirection;

  __declspec(property(get = get_headLineIndex)) int32_t headLineIndex;

  /// @brief Field headLineLayer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_headLineLayer, put = __cordl_internal_set_headLineLayer)) ::GlobalNamespace::NoteLineLayer headLineLayer;

  /// @brief Field sliceCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_sliceCount, put = __cordl_internal_set_sliceCount)) int32_t sliceCount;

  /// @brief Field squishAmount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_squishAmount, put = __cordl_internal_set_squishAmount)) float_t squishAmount;

  /// @brief Field tailLineIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_tailLineIndex, put = __cordl_internal_set_tailLineIndex)) int32_t tailLineIndex;

  /// @brief Field tailLineLayer, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_tailLineLayer, put = __cordl_internal_set_tailLineLayer)) ::GlobalNamespace::NoteLineLayer tailLineLayer;

  /// @brief Field tailTimeOffset, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_tailTimeOffset, put = __cordl_internal_set_tailTimeOffset)) float_t tailTimeOffset;

  static inline ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                           ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                                           ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailLineIndex,
                                                                                           ::GlobalNamespace::NoteLineLayer tailLineLayer, int32_t sliceCount, float_t squishAmount,
                                                                                           float_t tailTimeOffset);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get_headCutDirection() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get_headCutDirection();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_headLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_headLineLayer();

  constexpr int32_t const& __cordl_internal_get_sliceCount() const;

  constexpr int32_t& __cordl_internal_get_sliceCount();

  constexpr float_t const& __cordl_internal_get_squishAmount() const;

  constexpr float_t& __cordl_internal_get_squishAmount();

  constexpr int32_t const& __cordl_internal_get_tailLineIndex() const;

  constexpr int32_t& __cordl_internal_get_tailLineIndex();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_tailLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_tailLineLayer();

  constexpr float_t const& __cordl_internal_get_tailTimeOffset() const;

  constexpr float_t& __cordl_internal_get_tailTimeOffset();

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_headCutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set_headLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_sliceCount(int32_t value);

  constexpr void __cordl_internal_set_squishAmount(float_t value);

  constexpr void __cordl_internal_set_tailLineIndex(int32_t value);

  constexpr void __cordl_internal_set_tailLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_tailTimeOffset(float_t value);

  /// @brief Method .ctor, addr 0x3bf3714, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::ColorType colorType,
                    ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                    int32_t sliceCount, float_t squishAmount, float_t tailTimeOffset);

  /// @brief Method get_headLineIndex, addr 0x3bf370c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_headLineIndex();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_TutorialChainSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialChainSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_TutorialChainSpawnData(TutorialSongController_TutorialChainSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialChainSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_TutorialChainSpawnData(TutorialSongController_TutorialChainSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4712 };

  /// @brief Field colorType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief Field headLineLayer, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___headLineLayer;

  /// @brief Field headCutDirection, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___headCutDirection;

  /// @brief Field tailLineIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___tailLineIndex;

  /// @brief Field tailLineLayer, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___tailLineLayer;

  /// @brief Field sliceCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___sliceCount;

  /// @brief Field squishAmount, offset: 0x3c, size: 0x4, def value: None
  float_t ___squishAmount;

  /// @brief Field tailTimeOffset, offset: 0x40, size: 0x4, def value: None
  float_t ___tailTimeOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___colorType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___headLineLayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___headCutDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___tailLineIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___tailLineLayer) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___sliceCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___squishAmount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, ___tailTimeOffset) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TutorialSongController::TutorialObjectSpawnData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/TutorialArcSpawnData
class CORDL_TYPE TutorialSongController_TutorialArcSpawnData : public ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field headNote, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_headNote, put = __cordl_internal_set_headNote)) ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* headNote;

  /// @brief Field tailNote, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_tailNote, put = __cordl_internal_set_tailNote)) ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tailNote;

  static inline ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData* New_ctor(::GlobalNamespace::Signal* signal,
                                                                                         ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* headNote,
                                                                                         ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tailNote);

  constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* const& __cordl_internal_get_headNote() const;

  constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*& __cordl_internal_get_headNote();

  constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* const& __cordl_internal_get_tailNote() const;

  constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*& __cordl_internal_get_tailNote();

  constexpr void __cordl_internal_set_headNote(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* value);

  constexpr void __cordl_internal_set_tailNote(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* value);

  /// @brief Method .ctor, addr 0x3bf37a8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* headNote,
                    ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tailNote);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_TutorialArcSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialArcSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_TutorialArcSpawnData(TutorialSongController_TutorialArcSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialArcSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_TutorialArcSpawnData(TutorialSongController_TutorialArcSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4713 };

  /// @brief Field headNote, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* ___headNote;

  /// @brief Field tailNote, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* ___tailNote;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialArcSpawnData, ___headNote) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialArcSpawnData, ___tailNote) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_TutorialArcSpawnData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TutorialSongController::TutorialJumpingNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/TutorialBombNoteSpawnData
class CORDL_TYPE TutorialSongController_TutorialBombNoteSpawnData : public ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData {
public:
  // Declarations
  static inline ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                              ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method .ctor, addr 0x3bf2624, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_TutorialBombNoteSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialBombNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_TutorialBombNoteSpawnData(TutorialSongController_TutorialBombNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialBombNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_TutorialBombNoteSpawnData(TutorialSongController_TutorialBombNoteSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NoteLineLayer, TutorialSongController::TutorialObjectSpawnData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController/TutorialObstacleSpawnData
class CORDL_TYPE TutorialSongController_TutorialObstacleSpawnData : public ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field height, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field noteLineLayer, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLineLayer, put = __cordl_internal_set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  /// @brief Field width, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  static inline ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                              int32_t width, int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_noteLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_noteLineLayer();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x3bf2674, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width, int32_t height,
                    ::GlobalNamespace::NoteLineLayer noteLineLayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController_TutorialObstacleSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialObstacleSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController_TutorialObstacleSpawnData(TutorialSongController_TutorialObstacleSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController_TutorialObstacleSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController_TutorialObstacleSpawnData(TutorialSongController_TutorialObstacleSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4715 };

  /// @brief Field noteLineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  /// @brief Field width, offset: 0x28, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x2c, size: 0x4, def value: None
  int32_t ___height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData, ___noteLineLayer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData, ___width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData, ___height) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SongController
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSongController
class CORDL_TYPE TutorialSongController : public ::GlobalNamespace::SongController {
public:
  // Declarations
  using InitData = ::GlobalNamespace::TutorialSongController_InitData;

  using SequenceCutInfo = ::GlobalNamespace::TutorialSongController_SequenceCutInfo;

  using TutorialArcSpawnData = ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData;

  using TutorialBasicNoteSpawnData = ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData;

  using TutorialBombNoteSpawnData = ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData;

  using TutorialChainSpawnData = ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData;

  using TutorialJumpingNoteSpawnData = ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData;

  using TutorialObjectSpawnData = ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData;

  using TutorialObstacleSpawnData = ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData;

  /// @brief Field _arcCuttingDidStartSignal, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__arcCuttingDidStartSignal, put = __cordl_internal_set__arcCuttingDidStartSignal)) ::UnityW<::GlobalNamespace::Signal> _arcCuttingDidStartSignal;

  /// @brief Field _arcHeadOrTailMissedSignal, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__arcHeadOrTailMissedSignal, put = __cordl_internal_set__arcHeadOrTailMissedSignal)) ::UnityW<::GlobalNamespace::Signal> _arcHeadOrTailMissedSignal;

  /// @brief Field _arcMiddleInfoSignal, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__arcMiddleInfoSignal, put = __cordl_internal_set__arcMiddleInfoSignal)) ::UnityW<::GlobalNamespace::Signal> _arcMiddleInfoSignal;

  /// @brief Field _audioTimeSyncController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatmapData, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _beatmapObjectManager, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _bombCuttingTutorialPartDidStartSignal, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__bombCuttingTutorialPartDidStartSignal, put = __cordl_internal_set__bombCuttingTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _bombCuttingTutorialPartDidStartSignal;

  /// @brief Field _bombWasCutSignal, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__bombWasCutSignal, put = __cordl_internal_set__bombWasCutSignal)) ::UnityW<::GlobalNamespace::Signal> _bombWasCutSignal;

  /// @brief Field _chainCuttingDidStartSignal, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__chainCuttingDidStartSignal, put = __cordl_internal_set__chainCuttingDidStartSignal)) ::UnityW<::GlobalNamespace::Signal> _chainCuttingDidStartSignal;

  /// @brief Field _chainLinkMissedSignal, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__chainLinkMissedSignal, put = __cordl_internal_set__chainLinkMissedSignal)) ::UnityW<::GlobalNamespace::Signal> _chainLinkMissedSignal;

  /// @brief Field _currentSequenceCutInfo, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__currentSequenceCutInfo,
                      put = __cordl_internal_set__currentSequenceCutInfo)) ::GlobalNamespace::TutorialSongController_SequenceCutInfo* _currentSequenceCutInfo;

  /// @brief Field _initData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::TutorialSongController_InitData* _initData;

  /// @brief Field _leftObstacleTutorialPartDidStartSignal, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__leftObstacleTutorialPartDidStartSignal, put = __cordl_internal_set__leftObstacleTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _leftObstacleTutorialPartDidStartSignal;

  /// @brief Field _normalModeTutorialObjectsSpawnData, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__normalModeTutorialObjectsSpawnData,
                      put = __cordl_internal_set__normalModeTutorialObjectsSpawnData)) ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*,
                                                                                                ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*>
      _normalModeTutorialObjectsSpawnData;

  /// @brief Field _noteCuttingInAnyDirectionDidStartSignal, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal, put = __cordl_internal_set__noteCuttingInAnyDirectionDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteCuttingInAnyDirectionDidStartSignal;

  /// @brief Field _noteCuttingTutorialPartDidStartSignal, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCuttingTutorialPartDidStartSignal, put = __cordl_internal_set__noteCuttingTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteCuttingTutorialPartDidStartSignal;

  /// @brief Field _noteWasCutFromDifferentDirectionSignal, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutFromDifferentDirectionSignal, put = __cordl_internal_set__noteWasCutFromDifferentDirectionSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteWasCutFromDifferentDirectionSignal;

  /// @brief Field _noteWasCutOKSignal, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutOKSignal, put = __cordl_internal_set__noteWasCutOKSignal)) ::UnityW<::GlobalNamespace::Signal> _noteWasCutOKSignal;

  /// @brief Field _noteWasCutTooSoonSignal, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutTooSoonSignal, put = __cordl_internal_set__noteWasCutTooSoonSignal)) ::UnityW<::GlobalNamespace::Signal> _noteWasCutTooSoonSignal;

  /// @brief Field _noteWasCutWithSlowSpeedSignal, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutWithSlowSpeedSignal, put = __cordl_internal_set__noteWasCutWithSlowSpeedSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteWasCutWithSlowSpeedSignal;

  /// @brief Field _noteWasCutWithWrongColorSignal, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutWithWrongColorSignal, put = __cordl_internal_set__noteWasCutWithWrongColorSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteWasCutWithWrongColorSignal;

  /// @brief Field _numberOfBeatsToSnap, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfBeatsToSnap, put = __cordl_internal_set__numberOfBeatsToSnap)) int32_t _numberOfBeatsToSnap;

  /// @brief Field _obstacleDurationInBeats, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleDurationInBeats, put = __cordl_internal_set__obstacleDurationInBeats)) int32_t _obstacleDurationInBeats;

  /// @brief Field _prevSpawnedBeatmapObjectIndex, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get__prevSpawnedBeatmapObjectIndex, put = __cordl_internal_set__prevSpawnedBeatmapObjectIndex)) int32_t _prevSpawnedBeatmapObjectIndex;

  /// @brief Field _rightObstacleTutorialPartDidStartSignal, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__rightObstacleTutorialPartDidStartSignal, put = __cordl_internal_set__rightObstacleTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _rightObstacleTutorialPartDidStartSignal;

  /// @brief Field _songBpm, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get__songBpm, put = __cordl_internal_set__songBpm)) float_t _songBpm;

  /// @brief Field _startWaitTimeInBeats, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startWaitTimeInBeats, put = __cordl_internal_set__startWaitTimeInBeats)) int32_t _startWaitTimeInBeats;

  /// @brief Field _topObstacleTutorialPartDidStartSignal, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__topObstacleTutorialPartDidStartSignal, put = __cordl_internal_set__topObstacleTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _topObstacleTutorialPartDidStartSignal;

  /// @brief Field _tutorialBeatmapObjectIndex, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get__tutorialBeatmapObjectIndex, put = __cordl_internal_set__tutorialBeatmapObjectIndex)) int32_t _tutorialBeatmapObjectIndex;

  /// @brief Method Awake, addr 0x3bf20dc, size 0x4e4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateArcData, addr 0x3bf35ac, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderData* CreateArcData(::GlobalNamespace::NoteData* headData, ::GlobalNamespace::NoteData* tailData);

  /// @brief Method CreateBasicNoteData, addr 0x3bf3314, size 0x30, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData* CreateBasicNoteData(float_t time, int32_t beat, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tutorialBasicNoteSpawnData);

  /// @brief Method CreateBombNoteData, addr 0x3bf3380, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData* CreateBombNoteData(float_t time, int32_t beat, ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData* tutorialBombNoteSpawnData);

  /// @brief Method CreateChainData, addr 0x3bf3488, size 0x124, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::SliderData*> CreateChainData(float_t time, float_t tailTime, int32_t beat,
                                                                                                              ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData* tutorialChainSpawnData);

  /// @brief Method CreateObstacleData, addr 0x3bf33a8, size 0xe0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleData* CreateObstacleData(float_t time, int32_t beat, ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData* tutorialObstacleSpawnData);

  /// @brief Method GetNextBeatmapObjectBeat, addr 0x3bf327c, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetNextBeatmapObjectBeat(int32_t beatOffset);

  /// @brief Method GetTimeFromBeat, addr 0x3bf32ec, size 0x28, virtual false, abstract: false, final false
  inline float_t GetTimeFromBeat(int32_t beatNumber);

  /// @brief Method HandleNoteWasCut, addr 0x3bf2ebc, size 0x134, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x3bf31a4, size 0xa0, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleObstacleDidPassThreeQuartersOfMove2, addr 0x3bf3254, size 0x18, virtual false, abstract: false, final false
  inline void HandleObstacleDidPassThreeQuartersOfMove2(::GlobalNamespace::ObstacleController* obstacleController);

  static inline ::GlobalNamespace::TutorialSongController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bf2838, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PauseSong, addr 0x3bf2e78, size 0x28, virtual true, abstract: false, final false
  inline void PauseSong();

  /// @brief Method RaiseSignalForIncorrectCutSequence, addr 0x3bf30fc, size 0xa8, virtual false, abstract: false, final false
  inline void RaiseSignalForIncorrectCutSequence();

  /// @brief Method RaiseSignalsForIndividualCut, addr 0x3bf3040, size 0x68, virtual false, abstract: false, final false
  inline void RaiseSignalsForIndividualCut(::GlobalNamespace::NoteCutInfo noteCutInfo);

  /// @brief Method ResumeSong, addr 0x3bf2ea0, size 0x1c, virtual true, abstract: false, final false
  inline void ResumeSong();

  /// @brief Method Start, addr 0x3bf26d8, size 0x160, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSong, addr 0x3bf15c4, size 0x80, virtual false, abstract: false, final false
  inline void StartSong(float_t startTimeOffset);

  /// @brief Method StopSong, addr 0x3bf2e50, size 0x28, virtual true, abstract: false, final false
  inline void StopSong();

  /// @brief Method UpdateBeatmapData, addr 0x3bf2980, size 0x4d0, virtual false, abstract: false, final false
  inline void UpdateBeatmapData(float_t noteTime, int32_t noteBeat);

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__arcCuttingDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__arcCuttingDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__arcHeadOrTailMissedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__arcHeadOrTailMissedSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__arcMiddleInfoSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__arcMiddleInfoSignal();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BeatmapData* const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::BeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__bombCuttingTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__bombCuttingTutorialPartDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__bombWasCutSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__bombWasCutSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__chainCuttingDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__chainCuttingDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__chainLinkMissedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__chainLinkMissedSignal();

  constexpr ::GlobalNamespace::TutorialSongController_SequenceCutInfo* const& __cordl_internal_get__currentSequenceCutInfo() const;

  constexpr ::GlobalNamespace::TutorialSongController_SequenceCutInfo*& __cordl_internal_get__currentSequenceCutInfo();

  constexpr ::GlobalNamespace::TutorialSongController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::TutorialSongController_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__leftObstacleTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__leftObstacleTutorialPartDidStartSignal();

  constexpr ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*> const&
  __cordl_internal_get__normalModeTutorialObjectsSpawnData() const;

  constexpr ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*>&
  __cordl_internal_get__normalModeTutorialObjectsSpawnData();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteCuttingTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteCuttingTutorialPartDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutFromDifferentDirectionSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutFromDifferentDirectionSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutOKSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutOKSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutTooSoonSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutTooSoonSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutWithSlowSpeedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutWithSlowSpeedSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutWithWrongColorSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutWithWrongColorSignal();

  constexpr int32_t const& __cordl_internal_get__numberOfBeatsToSnap() const;

  constexpr int32_t& __cordl_internal_get__numberOfBeatsToSnap();

  constexpr int32_t const& __cordl_internal_get__obstacleDurationInBeats() const;

  constexpr int32_t& __cordl_internal_get__obstacleDurationInBeats();

  constexpr int32_t const& __cordl_internal_get__prevSpawnedBeatmapObjectIndex() const;

  constexpr int32_t& __cordl_internal_get__prevSpawnedBeatmapObjectIndex();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__rightObstacleTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__rightObstacleTutorialPartDidStartSignal();

  constexpr float_t const& __cordl_internal_get__songBpm() const;

  constexpr float_t& __cordl_internal_get__songBpm();

  constexpr int32_t const& __cordl_internal_get__startWaitTimeInBeats() const;

  constexpr int32_t& __cordl_internal_get__startWaitTimeInBeats();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__topObstacleTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__topObstacleTutorialPartDidStartSignal();

  constexpr int32_t const& __cordl_internal_get__tutorialBeatmapObjectIndex() const;

  constexpr int32_t& __cordl_internal_get__tutorialBeatmapObjectIndex();

  constexpr void __cordl_internal_set__arcCuttingDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__arcHeadOrTailMissedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__arcMiddleInfoSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__bombCuttingTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__bombWasCutSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__chainCuttingDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__chainLinkMissedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__currentSequenceCutInfo(::GlobalNamespace::TutorialSongController_SequenceCutInfo* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::TutorialSongController_InitData* value);

  constexpr void __cordl_internal_set__leftObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__normalModeTutorialObjectsSpawnData(
      ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*> value);

  constexpr void __cordl_internal_set__noteCuttingInAnyDirectionDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteCuttingTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutFromDifferentDirectionSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutOKSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutTooSoonSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutWithSlowSpeedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutWithWrongColorSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__numberOfBeatsToSnap(int32_t value);

  constexpr void __cordl_internal_set__obstacleDurationInBeats(int32_t value);

  constexpr void __cordl_internal_set__prevSpawnedBeatmapObjectIndex(int32_t value);

  constexpr void __cordl_internal_set__rightObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__songBpm(float_t value);

  constexpr void __cordl_internal_set__startWaitTimeInBeats(int32_t value);

  constexpr void __cordl_internal_set__topObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__tutorialBeatmapObjectIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3bf3620, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController(TutorialSongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController(TutorialSongController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4716 };

  /// @brief Field _audioTimeSyncController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _startWaitTimeInBeats, offset: 0x38, size: 0x4, def value: None
  int32_t ____startWaitTimeInBeats;

  /// @brief Field _numberOfBeatsToSnap, offset: 0x3c, size: 0x4, def value: None
  int32_t ____numberOfBeatsToSnap;

  /// @brief Field _obstacleDurationInBeats, offset: 0x40, size: 0x4, def value: None
  int32_t ____obstacleDurationInBeats;

  /// @brief Field _noteCuttingTutorialPartDidStartSignal, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteCuttingTutorialPartDidStartSignal;

  /// @brief Field _noteCuttingInAnyDirectionDidStartSignal, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteCuttingInAnyDirectionDidStartSignal;

  /// @brief Field _chainCuttingDidStartSignal, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____chainCuttingDidStartSignal;

  /// @brief Field _chainLinkMissedSignal, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____chainLinkMissedSignal;

  /// @brief Field _arcCuttingDidStartSignal, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____arcCuttingDidStartSignal;

  /// @brief Field _arcHeadOrTailMissedSignal, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____arcHeadOrTailMissedSignal;

  /// @brief Field _arcMiddleInfoSignal, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____arcMiddleInfoSignal;

  /// @brief Field _bombCuttingTutorialPartDidStartSignal, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____bombCuttingTutorialPartDidStartSignal;

  /// @brief Field _leftObstacleTutorialPartDidStartSignal, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____leftObstacleTutorialPartDidStartSignal;

  /// @brief Field _rightObstacleTutorialPartDidStartSignal, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____rightObstacleTutorialPartDidStartSignal;

  /// @brief Field _topObstacleTutorialPartDidStartSignal, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____topObstacleTutorialPartDidStartSignal;

  /// @brief Field _noteWasCutOKSignal, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutOKSignal;

  /// @brief Field _noteWasCutTooSoonSignal, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutTooSoonSignal;

  /// @brief Field _noteWasCutWithWrongColorSignal, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutWithWrongColorSignal;

  /// @brief Field _noteWasCutFromDifferentDirectionSignal, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutFromDifferentDirectionSignal;

  /// @brief Field _noteWasCutWithSlowSpeedSignal, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutWithSlowSpeedSignal;

  /// @brief Field _bombWasCutSignal, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____bombWasCutSignal;

  /// @brief Field _initData, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::TutorialSongController_InitData* ____initData;

  /// @brief Field _beatmapObjectManager, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _tutorialBeatmapObjectIndex, offset: 0xe0, size: 0x4, def value: None
  int32_t ____tutorialBeatmapObjectIndex;

  /// @brief Field _prevSpawnedBeatmapObjectIndex, offset: 0xe4, size: 0x4, def value: None
  int32_t ____prevSpawnedBeatmapObjectIndex;

  /// @brief Field _songBpm, offset: 0xe8, size: 0x4, def value: None
  float_t ____songBpm;

  /// @brief Field _beatmapData, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _currentSequenceCutInfo, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::TutorialSongController_SequenceCutInfo* ____currentSequenceCutInfo;

  /// @brief Field _normalModeTutorialObjectsSpawnData, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*> ____normalModeTutorialObjectsSpawnData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____audioTimeSyncController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____startWaitTimeInBeats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____numberOfBeatsToSnap) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____obstacleDurationInBeats) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteCuttingTutorialPartDidStartSignal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteCuttingInAnyDirectionDidStartSignal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____chainCuttingDidStartSignal) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____chainLinkMissedSignal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____arcCuttingDidStartSignal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____arcHeadOrTailMissedSignal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____arcMiddleInfoSignal) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____bombCuttingTutorialPartDidStartSignal) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____leftObstacleTutorialPartDidStartSignal) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____rightObstacleTutorialPartDidStartSignal) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____topObstacleTutorialPartDidStartSignal) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutOKSignal) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutTooSoonSignal) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutWithWrongColorSignal) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutFromDifferentDirectionSignal) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutWithSlowSpeedSignal) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____bombWasCutSignal) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____initData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____beatmapObjectManager) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____tutorialBeatmapObjectIndex) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____prevSpawnedBeatmapObjectIndex) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____songBpm) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____beatmapData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____currentSequenceCutInfo) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____normalModeTutorialObjectsSpawnData) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController, 0x108>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType, "", "TutorialSongController/SequenceCutInfo/NoteType");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController*, "", "TutorialSongController");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_InitData*, "", "TutorialSongController/InitData");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_SequenceCutInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_SequenceCutInfo*, "", "TutorialSongController/SequenceCutInfo");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_TutorialArcSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*, "", "TutorialSongController/TutorialArcSpawnData");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*, "", "TutorialSongController/TutorialBasicNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*, "", "TutorialSongController/TutorialBombNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*, "", "TutorialSongController/TutorialChainSpawnData");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*, "", "TutorialSongController/TutorialJumpingNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, "", "TutorialSongController/TutorialObjectSpawnData");
NEED_NO_BOX(::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*, "", "TutorialSongController/TutorialObstacleSpawnData");
