#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct ColorType;
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
namespace GlobalNamespace {
struct __AutoRecord__Beatmap;
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
struct __AutoRecord__Beatmap;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutoRecord);
MARK_VAL_T(::GlobalNamespace::__AutoRecord__Beatmap);
// Type: ::Beatmap
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AutoRecord::Beatmap
struct CORDL_TYPE __AutoRecord__Beatmap {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AutoRecord__Beatmap();

  // Ctor Parameters [CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteLineCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "items", ty: "::ArrayW<::GlobalNamespace::BeatmapDataItem*,::Array<::GlobalNamespace::BeatmapDataItem*>*>", modifiers: "", def_value: None }]
  constexpr __AutoRecord__Beatmap(float_t beatsPerMinute, int32_t noteLineCount, ::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items) noexcept;

  /// @brief Field beatsPerMinute, offset: 0x0, size: 0x4, def value: None
  float_t beatsPerMinute;

  /// @brief Field noteLineCount, offset: 0x4, size: 0x4, def value: None
  int32_t noteLineCount;

  /// @brief Field items, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AutoRecord__Beatmap, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AutoRecord__Beatmap, beatsPerMinute) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AutoRecord__Beatmap, noteLineCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AutoRecord__Beatmap, items) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AutoRecord
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AutoRecord*
class CORDL_TYPE AutoRecord : public ::System::Object {
public:
  // Declarations
  using Beatmap = ::GlobalNamespace::__AutoRecord__Beatmap;

  /// @brief Field kCutEndOffset, offset 0xffffffff, size 0x1c
  static __declspec(property(get = getStaticF_kCutEndOffset, put = setStaticF_kCutEndOffset))::UnityEngine::Pose kCutEndOffset;

  /// @brief Field kCutStartOffset, offset 0xffffffff, size 0x1c
  static __declspec(property(get = getStaticF_kCutStartOffset, put = setStaticF_kCutStartOffset))::UnityEngine::Pose kCutStartOffset;

  /// @brief Method AddNoteHandFrames, addr 0x26bccd4, size 0x4a8, virtual false, abstract: false, final false
  static inline void AddNoteHandFrames(::GlobalNamespace::NoteData* note, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
                                       ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>* leftHandFrames,
                                       ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>* rightHandFrames);

  /// @brief Method AddSliderHandFrames, addr 0x26bd17c, size 0x638, virtual false, abstract: false, final false
  static inline void AddSliderHandFrames(::GlobalNamespace::SliderData* slider, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
                                         ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>* leftHandFrames,
                                         ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>* rightHandFrames);

  /// @brief Method CreatePlayerPoseFrames, addr 0x26bc47c, size 0x818, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PlayerPoseFrames CreatePlayerPoseFrames(ByRef<::GlobalNamespace::__AutoRecord__Beatmap> beatmap);

  /// @brief Method LocateCutPosition, addr 0x26bcc94, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LocateCutPosition(int32_t lineCount, int32_t line, ::GlobalNamespace::NoteLineLayer layer);

  /// @brief Method SelectHand, addr 0x26bd838, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>* SelectHand(::GlobalNamespace::ColorType type,
                                                                                                    ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>* left,
                                                                                                    ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>* right);

  /// @brief Method <CreatePlayerPoseFrames>g__FixFrames|1_0, addr 0x26bd7b4, size 0x84, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoRecord, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutoRecord);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoRecord*, "", "AutoRecord");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AutoRecord__Beatmap, "", "AutoRecord/Beatmap");
