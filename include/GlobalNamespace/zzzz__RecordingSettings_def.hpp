#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingSettings)
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class __PlaybackRenderer__PlaybackScreenshot;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingSettings);
// Type: ::RecordingSettings
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(5918)), TypeDefinitionIndex(TypeDefinitionIndex(5917)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5968)) CS Name: ::RecordingSettings*
class CORDL_TYPE RecordingSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameMode, offset 0x10, size 0x8
  __declspec(property(get = __get_gameMode, put = __set_gameMode))::StringW gameMode;

  /// @brief Field pack, offset 0x18, size 0x8
  __declspec(property(get = __get_pack, put = __set_pack))::GlobalNamespace::IBeatmapLevelPack* pack;

  /// @brief Field level, offset 0x20, size 0x8
  __declspec(property(get = __get_level, put = __set_level))::GlobalNamespace::IPreviewBeatmapLevel* level;

  /// @brief Field difficulty, offset 0x28, size 0x4
  __declspec(property(get = __get_difficulty, put = __set_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field characteristic, offset 0x30, size 0x8
  __declspec(property(get = __get_characteristic, put = __set_characteristic))::GlobalNamespace::BeatmapCharacteristicSO* characteristic;

  /// @brief Field runLevel, offset 0x38, size 0x1
  __declspec(property(get = __get_runLevel, put = __set_runLevel)) bool runLevel;

  /// @brief Field recordPerformance, offset 0x39, size 0x1
  __declspec(property(get = __get_recordPerformance, put = __set_recordPerformance)) bool recordPerformance;

  /// @brief Field recordingMode, offset 0x3c, size 0x4
  __declspec(property(get = __get_recordingMode, put = __set_recordingMode))::GlobalNamespace::__ObjectsMovementRecorder__Mode recordingMode;

  /// @brief Field recordingPath, offset 0x40, size 0x8
  __declspec(property(get = __get_recordingPath, put = __set_recordingPath))::StringW recordingPath;

  /// @brief Field cameraView, offset 0x48, size 0x4
  __declspec(property(get = __get_cameraView, put = __set_cameraView))::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView;

  /// @brief Field addDateTimeSuffixToRecordingName, offset 0x4c, size 0x1
  __declspec(property(get = __get_addDateTimeSuffixToRecordingName, put = __set_addDateTimeSuffixToRecordingName)) bool addDateTimeSuffixToRecordingName;

  /// @brief Field screenshotRecording, offset 0x4d, size 0x1
  __declspec(property(get = __get_screenshotRecording, put = __set_screenshotRecording)) bool screenshotRecording;

  /// @brief Field screenshotWidth, offset 0x50, size 0x4
  __declspec(property(get = __get_screenshotWidth, put = __set_screenshotWidth)) int32_t screenshotWidth;

  /// @brief Field screenshotHeight, offset 0x54, size 0x4
  __declspec(property(get = __get_screenshotHeight, put = __set_screenshotHeight)) int32_t screenshotHeight;

  /// @brief Field framerate, offset 0x58, size 0x4
  __declspec(property(get = __get_framerate, put = __set_framerate)) int32_t framerate;

  /// @brief Field playbackScreenshots, offset 0x60, size 0x8
  __declspec(property(
      get = __get_playbackScreenshots,
      put = __set_playbackScreenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots;

  /// @brief Field practice, offset 0x68, size 0x1
  __declspec(property(get = __get_practice, put = __set_practice)) bool practice;

  /// @brief Field startSongTime, offset 0x6c, size 0x4
  __declspec(property(get = __get_startSongTime, put = __set_startSongTime)) float_t startSongTime;

  /// @brief Field songSpeedMultiplier, offset 0x70, size 0x4
  __declspec(property(get = __get_songSpeedMultiplier, put = __set_songSpeedMultiplier)) float_t songSpeedMultiplier;

  /// @brief Field overrideEnvironments, offset 0x74, size 0x1
  __declspec(property(get = __get_overrideEnvironments, put = __set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field environmentType, offset 0x78, size 0x8
  __declspec(property(get = __get_environmentType, put = __set_environmentType))::GlobalNamespace::EnvironmentTypeSO* environmentType;

  /// @brief Field environmentInfo, offset 0x80, size 0x8
  __declspec(property(get = __get_environmentInfo, put = __set_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field saveToOldFormat, offset 0x88, size 0x1
  __declspec(property(get = __get_saveToOldFormat, put = __set_saveToOldFormat)) bool saveToOldFormat;

  constexpr ::StringW& __get_gameMode();

  constexpr ::StringW const& __get_gameMode() const;

  constexpr void __set_gameMode(::StringW value);

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get_pack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get_pack() const;

  constexpr void __set_pack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_level() const;

  constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_difficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_difficulty() const;

  constexpr void __set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get_characteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get_characteristic() const;

  constexpr void __set_characteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr bool& __get_runLevel();

  constexpr bool const& __get_runLevel() const;

  constexpr void __set_runLevel(bool value);

  constexpr bool& __get_recordPerformance();

  constexpr bool const& __get_recordPerformance() const;

  constexpr void __set_recordPerformance(bool value);

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& __get_recordingMode();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& __get_recordingMode() const;

  constexpr void __set_recordingMode(::GlobalNamespace::__ObjectsMovementRecorder__Mode value);

  constexpr ::StringW& __get_recordingPath();

  constexpr ::StringW const& __get_recordingPath() const;

  constexpr void __set_recordingPath(::StringW value);

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& __get_cameraView();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& __get_cameraView() const;

  constexpr void __set_cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView value);

  constexpr bool& __get_addDateTimeSuffixToRecordingName();

  constexpr bool const& __get_addDateTimeSuffixToRecordingName() const;

  constexpr void __set_addDateTimeSuffixToRecordingName(bool value);

  constexpr bool& __get_screenshotRecording();

  constexpr bool const& __get_screenshotRecording() const;

  constexpr void __set_screenshotRecording(bool value);

  constexpr int32_t& __get_screenshotWidth();

  constexpr int32_t const& __get_screenshotWidth() const;

  constexpr void __set_screenshotWidth(int32_t value);

  constexpr int32_t& __get_screenshotHeight();

  constexpr int32_t const& __get_screenshotHeight() const;

  constexpr void __set_screenshotHeight(int32_t value);

  constexpr int32_t& __get_framerate();

  constexpr int32_t const& __get_framerate() const;

  constexpr void __set_framerate(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& __get_playbackScreenshots();

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& __get_playbackScreenshots() const;

  constexpr void __set_playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value);

  constexpr bool& __get_practice();

  constexpr bool const& __get_practice() const;

  constexpr void __set_practice(bool value);

  constexpr float_t& __get_startSongTime();

  constexpr float_t const& __get_startSongTime() const;

  constexpr void __set_startSongTime(float_t value);

  constexpr float_t& __get_songSpeedMultiplier();

  constexpr float_t const& __get_songSpeedMultiplier() const;

  constexpr void __set_songSpeedMultiplier(float_t value);

  constexpr bool& __get_overrideEnvironments();

  constexpr bool const& __get_overrideEnvironments() const;

  constexpr void __set_overrideEnvironments(bool value);

  constexpr ::GlobalNamespace::EnvironmentTypeSO*& __get_environmentType();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> const& __get_environmentType() const;

  constexpr void __set_environmentType(::GlobalNamespace::EnvironmentTypeSO* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get_environmentInfo() const;

  constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr bool& __get_saveToOldFormat();

  constexpr bool const& __get_saveToOldFormat() const;

  constexpr void __set_saveToOldFormat(bool value);

  static inline ::GlobalNamespace::RecordingSettings*
  New_ctor(::StringW gameMode, ::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IPreviewBeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
           ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath,
           ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight,
           int32_t framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots,
           bool practice, float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO* environmentType,
           ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, bool saveToOldFormat);

  /// @brief Method .ctor addr 0x2307890 size 0x154 virtual false final false
  inline void _ctor(::StringW gameMode, ::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IPreviewBeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode recordingMode,
                    ::StringW recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording,
                    int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
                    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots, bool practice,
                    float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO* environmentType,
                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, bool saveToOldFormat);

  /// @brief Method ToString addr 0x2308dd4 size 0xb54 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingSettings(RecordingSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingSettings(RecordingSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingSettings();

public:
  /// @brief Field gameMode, offset: 0x10, size: 0x8, def value: None
  ::StringW ___gameMode;

  /// @brief Field pack, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ___pack;

  /// @brief Field level, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___level;

  /// @brief Field difficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___difficulty;

  /// @brief Field characteristic, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ___characteristic;

  /// @brief Field runLevel, offset: 0x38, size: 0x1, def value: None
  bool ___runLevel;

  /// @brief Field recordPerformance, offset: 0x39, size: 0x1, def value: None
  bool ___recordPerformance;

  /// @brief Field recordingMode, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__Mode ___recordingMode;

  /// @brief Field recordingPath, offset: 0x40, size: 0x8, def value: None
  ::StringW ___recordingPath;

  /// @brief Field cameraView, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__CameraView ___cameraView;

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
  ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> ___playbackScreenshots;

  /// @brief Field practice, offset: 0x68, size: 0x1, def value: None
  bool ___practice;

  /// @brief Field startSongTime, offset: 0x6c, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMultiplier, offset: 0x70, size: 0x4, def value: None
  float_t ___songSpeedMultiplier;

  /// @brief Field overrideEnvironments, offset: 0x74, size: 0x1, def value: None
  bool ___overrideEnvironments;

  /// @brief Field environmentType, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentTypeSO* ___environmentType;

  /// @brief Field environmentInfo, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ___environmentInfo;

  /// @brief Field saveToOldFormat, offset: 0x88, size: 0x1, def value: None
  bool ___saveToOldFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingSettings, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingSettings*, "", "RecordingSettings");
