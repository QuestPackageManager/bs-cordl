#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoRecord)
namespace BeatSaber::RecPlay {
struct PlayerPoseFrames;
}
namespace BeatSaber::RecPlay {
struct PoseFrame;
}
namespace GlobalNamespace {
struct AutoRecord_Beatmap;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class SliderData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AutoRecord;
}
namespace GlobalNamespace {
struct AutoRecord_Beatmap;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutoRecord);
MARK_VAL_T(::GlobalNamespace::AutoRecord_Beatmap);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AutoRecord/Beatmap
struct CORDL_TYPE AutoRecord_Beatmap {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoRecord_Beatmap();

  // Ctor Parameters [CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteLineCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "items", ty: "::ArrayW<::GlobalNamespace::BeatmapDataItem*,::Array<::GlobalNamespace::BeatmapDataItem*>*>", modifiers: "", def_value: None }]
  constexpr AutoRecord_Beatmap(float_t beatsPerMinute, int32_t noteLineCount, ::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field beatsPerMinute, offset: 0x0, size: 0x4, def value: None
  float_t beatsPerMinute;

  /// @brief Field noteLineCount, offset: 0x4, size: 0x4, def value: None
  int32_t noteLineCount;

  /// @brief Field items, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoRecord_Beatmap, beatsPerMinute) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoRecord_Beatmap, noteLineCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoRecord_Beatmap, items) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoRecord_Beatmap, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutoRecord
class CORDL_TYPE AutoRecord : public ::System::Object {
public:
  // Declarations
  using Beatmap = ::GlobalNamespace::AutoRecord_Beatmap;

  /// @brief Field kCutEndOffset, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kCutEndOffset, put = setStaticF_kCutEndOffset)) ::UnityEngine::Pose kCutEndOffset;

  /// @brief Field kCutStartOffset, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kCutStartOffset, put = setStaticF_kCutStartOffset)) ::UnityEngine::Pose kCutStartOffset;

  /// @brief Method AddNoteHandFrames, addr 0x5708154, size 0x490, virtual false, abstract: false, final false
  static inline void
  AddNoteHandFrames(::GlobalNamespace::NoteData* note, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
                    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*> handFrames,
                    ::ArrayW<::GlobalNamespace::NoteCutDirection, ::Array<::GlobalNamespace::NoteCutDirection>*> lastCutDirections);

  /// @brief Method AddSliderHandFrames, addr 0x57085e4, size 0x590, virtual false, abstract: false, final false
  static inline void AddSliderHandFrames(
      ::GlobalNamespace::SliderData* slider, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
      ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*> handFrames);

  /// @brief Method CreatePlayerPoseFrames, addr 0x5707818, size 0x8fc, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PlayerPoseFrames CreatePlayerPoseFrames(::ByRef<::GlobalNamespace::AutoRecord_Beatmap> beatmap);

  /// @brief Method LocateCutPosition, addr 0x5708114, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LocateCutPosition(int32_t lineCount, int32_t line, ::GlobalNamespace::NoteLineLayer layer);

  /// @brief Method <CreatePlayerPoseFrames>g__FixFrames|1_0, addr 0x5708b74, size 0x78, virtual false, abstract: false, final false
  static inline int32_t _CreatePlayerPoseFrames_g__FixFrames_1_0(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames);

  static inline ::UnityEngine::Pose getStaticF_kCutEndOffset();

  static inline ::UnityEngine::Pose getStaticF_kCutStartOffset();

  static inline void setStaticF_kCutEndOffset(::UnityEngine::Pose value);

  static inline void setStaticF_kCutStartOffset(::UnityEngine::Pose value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoRecord(AutoRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoRecord(AutoRecord const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoRecord, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutoRecord);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoRecord*, "", "AutoRecord");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoRecord_Beatmap, "", "AutoRecord/Beatmap");
