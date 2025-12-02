#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingSettings)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct EnvironmentType;
}
namespace GlobalNamespace {
struct ObjectsMovementRecorder_CameraView;
}
namespace GlobalNamespace {
struct ObjectsMovementRecorder_Mode;
}
namespace GlobalNamespace {
class PlaybackRenderer_PlaybackScreenshot;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingSettings);
// Dependencies BeatmapDifficulty, EnvironmentType, ObjectsMovementRecorder::CameraView, ObjectsMovementRecorder::Mode, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingSettings
class CORDL_TYPE RecordingSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field addDateTimeSuffixToRecordingName, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_addDateTimeSuffixToRecordingName, put = __cordl_internal_set_addDateTimeSuffixToRecordingName)) bool addDateTimeSuffixToRecordingName;

  /// @brief Field cameraView, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_cameraView, put = __cordl_internal_set_cameraView)) ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView;

  /// @brief Field characteristic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> characteristic;

  /// @brief Field difficulty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field environmentInfo, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentInfo, put = __cordl_internal_set_environmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  /// @brief Field environmentType, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentType, put = __cordl_internal_set_environmentType)) ::System::Nullable_1<::GlobalNamespace::EnvironmentType> environmentType;

  /// @brief Field framerate, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_framerate, put = __cordl_internal_set_framerate)) int32_t framerate;

  /// @brief Field gameMode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameMode, put = __cordl_internal_set_gameMode)) ::StringW gameMode;

  /// @brief Field level, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_level, put = __cordl_internal_set_level)) ::GlobalNamespace::BeatmapLevel* level;

  /// @brief Field overrideEnvironments, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideEnvironments, put = __cordl_internal_set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field pack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pack, put = __cordl_internal_set_pack)) ::GlobalNamespace::BeatmapLevelPack* pack;

  /// @brief Field playbackScreenshots, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get_playbackScreenshots,
      put = __cordl_internal_set_playbackScreenshots)) ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>
      playbackScreenshots;

  /// @brief Field practice, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_practice, put = __cordl_internal_set_practice)) bool practice;

  /// @brief Field recordPerformance, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_recordPerformance, put = __cordl_internal_set_recordPerformance)) bool recordPerformance;

  /// @brief Field recordingMode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_recordingMode, put = __cordl_internal_set_recordingMode)) ::GlobalNamespace::ObjectsMovementRecorder_Mode recordingMode;

  /// @brief Field recordingPath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingPath, put = __cordl_internal_set_recordingPath)) ::StringW recordingPath;

  /// @brief Field runLevel, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_runLevel, put = __cordl_internal_set_runLevel)) bool runLevel;

  /// @brief Field saveToOldFormat, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_saveToOldFormat, put = __cordl_internal_set_saveToOldFormat)) bool saveToOldFormat;

  /// @brief Field screenshotHeight, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotHeight, put = __cordl_internal_set_screenshotHeight)) int32_t screenshotHeight;

  /// @brief Field screenshotRecording, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_screenshotRecording, put = __cordl_internal_set_screenshotRecording)) bool screenshotRecording;

  /// @brief Field screenshotWidth, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotWidth, put = __cordl_internal_set_screenshotWidth)) int32_t screenshotWidth;

  /// @brief Field songSpeedMultiplier, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeedMultiplier, put = __cordl_internal_set_songSpeedMultiplier)) float_t songSpeedMultiplier;

  /// @brief Field startSongTime, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  static inline ::GlobalNamespace::RecordingSettings*
  New_ctor(::StringW gameMode, ::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
           ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::ObjectsMovementRecorder_Mode recordingMode, ::StringW recordingPath,
           ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight,
           int32_t framerate, ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> playbackScreenshots, bool practice,
           float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::System::Nullable_1<::GlobalNamespace::EnvironmentType> environmentType,
           ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, bool saveToOldFormat);

  /// @brief Method ToString, addr 0x570c3fc, size 0xcbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_addDateTimeSuffixToRecordingName() const;

  constexpr bool& __cordl_internal_get_addDateTimeSuffixToRecordingName();

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView const& __cordl_internal_get_cameraView() const;

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView& __cordl_internal_get_cameraView();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_characteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_characteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_difficulty();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get_environmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get_environmentInfo();

  constexpr ::System::Nullable_1<::GlobalNamespace::EnvironmentType> const& __cordl_internal_get_environmentType() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::EnvironmentType>& __cordl_internal_get_environmentType();

  constexpr int32_t const& __cordl_internal_get_framerate() const;

  constexpr int32_t& __cordl_internal_get_framerate();

  constexpr ::StringW const& __cordl_internal_get_gameMode() const;

  constexpr ::StringW& __cordl_internal_get_gameMode();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_level() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_level();

  constexpr bool const& __cordl_internal_get_overrideEnvironments() const;

  constexpr bool& __cordl_internal_get_overrideEnvironments();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get_pack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_pack();

  constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> const&
  __cordl_internal_get_playbackScreenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>& __cordl_internal_get_playbackScreenshots();

  constexpr bool const& __cordl_internal_get_practice() const;

  constexpr bool& __cordl_internal_get_practice();

  constexpr bool const& __cordl_internal_get_recordPerformance() const;

  constexpr bool& __cordl_internal_get_recordPerformance();

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode const& __cordl_internal_get_recordingMode() const;

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode& __cordl_internal_get_recordingMode();

  constexpr ::StringW const& __cordl_internal_get_recordingPath() const;

  constexpr ::StringW& __cordl_internal_get_recordingPath();

  constexpr bool const& __cordl_internal_get_runLevel() const;

  constexpr bool& __cordl_internal_get_runLevel();

  constexpr bool const& __cordl_internal_get_saveToOldFormat() const;

  constexpr bool& __cordl_internal_get_saveToOldFormat();

  constexpr int32_t const& __cordl_internal_get_screenshotHeight() const;

  constexpr int32_t& __cordl_internal_get_screenshotHeight();

  constexpr bool const& __cordl_internal_get_screenshotRecording() const;

  constexpr bool& __cordl_internal_get_screenshotRecording();

  constexpr int32_t const& __cordl_internal_get_screenshotWidth() const;

  constexpr int32_t& __cordl_internal_get_screenshotWidth();

  constexpr float_t const& __cordl_internal_get_songSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get_songSpeedMultiplier();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr void __cordl_internal_set_addDateTimeSuffixToRecordingName(bool value);

  constexpr void __cordl_internal_set_cameraView(::GlobalNamespace::ObjectsMovementRecorder_CameraView value);

  constexpr void __cordl_internal_set_characteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set_environmentType(::System::Nullable_1<::GlobalNamespace::EnvironmentType> value);

  constexpr void __cordl_internal_set_framerate(int32_t value);

  constexpr void __cordl_internal_set_gameMode(::StringW value);

  constexpr void __cordl_internal_set_level(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_overrideEnvironments(bool value);

  constexpr void __cordl_internal_set_pack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set_playbackScreenshots(::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> value);

  constexpr void __cordl_internal_set_practice(bool value);

  constexpr void __cordl_internal_set_recordPerformance(bool value);

  constexpr void __cordl_internal_set_recordingMode(::GlobalNamespace::ObjectsMovementRecorder_Mode value);

  constexpr void __cordl_internal_set_recordingPath(::StringW value);

  constexpr void __cordl_internal_set_runLevel(bool value);

  constexpr void __cordl_internal_set_saveToOldFormat(bool value);

  constexpr void __cordl_internal_set_screenshotHeight(int32_t value);

  constexpr void __cordl_internal_set_screenshotRecording(bool value);

  constexpr void __cordl_internal_set_screenshotWidth(int32_t value);

  constexpr void __cordl_internal_set_songSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x570b558, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW gameMode, ::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::ObjectsMovementRecorder_Mode recordingMode,
                    ::StringW recordingPath, ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth,
                    int32_t screenshotHeight, int32_t framerate,
                    ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> playbackScreenshots, bool practice,
                    float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::System::Nullable_1<::GlobalNamespace::EnvironmentType> environmentType,
                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, bool saveToOldFormat);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingSettings(RecordingSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingSettings(RecordingSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6723 };

  /// @brief Field gameMode, offset: 0x10, size: 0x8, def value: None
  ::StringW ___gameMode;

  /// @brief Field pack, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ___pack;

  /// @brief Field level, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___level;

  /// @brief Field difficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___difficulty;

  /// @brief Field characteristic, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___characteristic;

  /// @brief Field runLevel, offset: 0x38, size: 0x1, def value: None
  bool ___runLevel;

  /// @brief Field recordPerformance, offset: 0x39, size: 0x1, def value: None
  bool ___recordPerformance;

  /// @brief Field recordingMode, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::ObjectsMovementRecorder_Mode ___recordingMode;

  /// @brief Field recordingPath, offset: 0x40, size: 0x8, def value: None
  ::StringW ___recordingPath;

  /// @brief Field cameraView, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::ObjectsMovementRecorder_CameraView ___cameraView;

  /// @brief Field addDateTimeSuffixToRecordingName, offset: 0x4c, size: 0x1, def value: None
  bool ___addDateTimeSuffixToRecordingName;

  /// @brief Field screenshotRecording, offset: 0x4d, size: 0x1, def value: None
  bool ___screenshotRecording;

  /// @brief Field screenshotWidth, offset: 0x50, size: 0x4, def value: None
  int32_t ___screenshotWidth;

  /// @brief Field screenshotHeight, offset: 0x54, size: 0x4, def value: None
  int32_t ___screenshotHeight;

  /// @brief Field framerate, offset: 0x58, size: 0x4, def value: None
  int32_t ___framerate;

  /// @brief Field playbackScreenshots, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> ___playbackScreenshots;

  /// @brief Field practice, offset: 0x68, size: 0x1, def value: None
  bool ___practice;

  /// @brief Field startSongTime, offset: 0x6c, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMultiplier, offset: 0x70, size: 0x4, def value: None
  float_t ___songSpeedMultiplier;

  /// @brief Field overrideEnvironments, offset: 0x74, size: 0x1, def value: None
  bool ___overrideEnvironments;

  /// @brief Field environmentType, offset: 0x78, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::EnvironmentType> ___environmentType;

  /// @brief Field environmentInfo, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ___environmentInfo;

  /// @brief Field saveToOldFormat, offset: 0x88, size: 0x1, def value: None
  bool ___saveToOldFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___gameMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___pack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___level) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___difficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___characteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___runLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___recordPerformance) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___recordingMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___recordingPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___cameraView) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___addDateTimeSuffixToRecordingName) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___screenshotRecording) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___screenshotWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___screenshotHeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___framerate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___playbackScreenshots) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___practice) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___startSongTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___songSpeedMultiplier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___overrideEnvironments) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___environmentType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___environmentInfo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingSettings, ___saveToOldFormat) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingSettings, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingSettings*, "", "RecordingSettings");
