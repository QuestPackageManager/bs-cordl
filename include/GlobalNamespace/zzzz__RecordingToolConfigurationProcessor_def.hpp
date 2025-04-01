#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolConfigurationProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingToolConfigurationProcessor)
namespace BGLib::DotnetExtension::CommandLine {
struct CommandLineParserResult;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class ObjectsMovementRecorder_InitData;
}
namespace GlobalNamespace {
class RecordingSettings;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_ColorSaveData;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_PlaybackScreenshot;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_RecordingConfiguration;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_RecordingToolConfiguration;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_ColorSaveData;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_PlaybackScreenshot;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_RecordingConfiguration;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor_RecordingToolConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigurationProcessor);
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData);
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot);
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration);
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolConfigurationProcessor/ColorSaveData
class CORDL_TYPE RecordingToolConfigurationProcessor_ColorSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  /// @brief Field g, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) float_t g;

  /// @brief Field r, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  static inline ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* New_ctor();

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr float_t const& __cordl_internal_get_g() const;

  constexpr float_t& __cordl_internal_get_g();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr float_t& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_g(float_t value);

  constexpr void __cordl_internal_set_r(float_t value);

  /// @brief Method .ctor, addr 0x3b2631c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigurationProcessor_ColorSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_ColorSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigurationProcessor_ColorSaveData(RecordingToolConfigurationProcessor_ColorSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_ColorSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigurationProcessor_ColorSaveData(RecordingToolConfigurationProcessor_ColorSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5140 };

  /// @brief Field r, offset: 0x10, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field g, offset: 0x14, size: 0x4, def value: None
  float_t ___g;

  /// @brief Field b, offset: 0x18, size: 0x4, def value: None
  float_t ___b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData, ___r) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData, ___g) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData, ___b) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolConfigurationProcessor/PlaybackScreenshot
class CORDL_TYPE RecordingToolConfigurationProcessor_PlaybackScreenshot : public ::System::Object {
public:
  // Declarations
  /// @brief Field backgroundColor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundColor, put = __cordl_internal_set_backgroundColor)) ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* backgroundColor;

  /// @brief Field excludedLayers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedLayers, put = __cordl_internal_set_excludedLayers)) ::ArrayW<::StringW, ::Array<::StringW>*> excludedLayers;

  /// @brief Field includedLayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_includedLayers, put = __cordl_internal_set_includedLayers)) ::ArrayW<::StringW, ::Array<::StringW>*> includedLayers;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::StringW type;

  static inline ::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot* New_ctor();

  constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* const& __cordl_internal_get_backgroundColor() const;

  constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData*& __cordl_internal_get_backgroundColor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_excludedLayers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_excludedLayers();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_includedLayers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_includedLayers();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_backgroundColor(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* value);

  constexpr void __cordl_internal_set_excludedLayers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_includedLayers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x3b26324, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigurationProcessor_PlaybackScreenshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_PlaybackScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigurationProcessor_PlaybackScreenshot(RecordingToolConfigurationProcessor_PlaybackScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_PlaybackScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigurationProcessor_PlaybackScreenshot(RecordingToolConfigurationProcessor_PlaybackScreenshot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5141 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field includedLayers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___includedLayers;

  /// @brief Field excludedLayers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___excludedLayers;

  /// @brief Field backgroundColor, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* ___backgroundColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot, ___includedLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot, ___excludedLayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot, ___backgroundColor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolConfigurationProcessor/RecordingToolConfiguration
class CORDL_TYPE RecordingToolConfigurationProcessor_RecordingToolConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field recordingConfigurations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingConfigurations,
                      put = __cordl_internal_set_recordingConfigurations)) ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*,
                                                                                    ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>*>
      recordingConfigurations;

  static inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>*> const&
  __cordl_internal_get_recordingConfigurations() const;

  constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>*>&
  __cordl_internal_get_recordingConfigurations();

  constexpr void __cordl_internal_set_recordingConfigurations(
      ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>*> value);

  /// @brief Method .ctor, addr 0x3b24808, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigurationProcessor_RecordingToolConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_RecordingToolConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigurationProcessor_RecordingToolConfiguration(RecordingToolConfigurationProcessor_RecordingToolConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_RecordingToolConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigurationProcessor_RecordingToolConfiguration(RecordingToolConfigurationProcessor_RecordingToolConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5142 };

  /// @brief Field recordingConfigurations, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>*>
      ___recordingConfigurations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration, ___recordingConfigurations) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolConfigurationProcessor/RecordingConfiguration
class CORDL_TYPE RecordingToolConfigurationProcessor_RecordingConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field addDateTimeSuffixToRecordingName, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_addDateTimeSuffixToRecordingName, put = __cordl_internal_set_addDateTimeSuffixToRecordingName)) bool addDateTimeSuffixToRecordingName;

  /// @brief Field cameraView, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraView, put = __cordl_internal_set_cameraView)) ::StringW cameraView;

  /// @brief Field characteristic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::StringW characteristic;

  /// @brief Field difficulty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::StringW difficulty;

  /// @brief Field environmentName, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentName, put = __cordl_internal_set_environmentName)) ::StringW environmentName;

  /// @brief Field environmentType, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentType, put = __cordl_internal_set_environmentType)) ::StringW environmentType;

  /// @brief Field framerate, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_framerate, put = __cordl_internal_set_framerate)) int32_t framerate;

  /// @brief Field levelID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelID, put = __cordl_internal_set_levelID)) ::StringW levelID;

  /// @brief Field mode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::StringW mode;

  /// @brief Field overrideEnvironments, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideEnvironments, put = __cordl_internal_set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field packID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packID, put = __cordl_internal_set_packID)) ::StringW packID;

  /// @brief Field playbackScreenshots, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_playbackScreenshots,
                      put = __cordl_internal_set_playbackScreenshots)) ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*,
                                                                                ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>*>
      playbackScreenshots;

  /// @brief Field practice, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_practice, put = __cordl_internal_set_practice)) bool practice;

  /// @brief Field recordPerformance, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_recordPerformance, put = __cordl_internal_set_recordPerformance)) bool recordPerformance;

  /// @brief Field recordingMode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingMode, put = __cordl_internal_set_recordingMode)) ::StringW recordingMode;

  /// @brief Field recordingPath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingPath, put = __cordl_internal_set_recordingPath)) ::StringW recordingPath;

  /// @brief Field runLevel, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_runLevel, put = __cordl_internal_set_runLevel)) bool runLevel;

  /// @brief Field saveToOldFormat, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_saveToOldFormat, put = __cordl_internal_set_saveToOldFormat)) bool saveToOldFormat;

  /// @brief Field screenshotHeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotHeight, put = __cordl_internal_set_screenshotHeight)) int32_t screenshotHeight;

  /// @brief Field screenshotRecording, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_screenshotRecording, put = __cordl_internal_set_screenshotRecording)) bool screenshotRecording;

  /// @brief Field screenshotWidth, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotWidth, put = __cordl_internal_set_screenshotWidth)) int32_t screenshotWidth;

  /// @brief Field songSpeedMultiplier, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeedMultiplier, put = __cordl_internal_set_songSpeedMultiplier)) float_t songSpeedMultiplier;

  /// @brief Field startSongTime, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  static inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration* New_ctor();

  constexpr bool const& __cordl_internal_get_addDateTimeSuffixToRecordingName() const;

  constexpr bool& __cordl_internal_get_addDateTimeSuffixToRecordingName();

  constexpr ::StringW const& __cordl_internal_get_cameraView() const;

  constexpr ::StringW& __cordl_internal_get_cameraView();

  constexpr ::StringW const& __cordl_internal_get_characteristic() const;

  constexpr ::StringW& __cordl_internal_get_characteristic();

  constexpr ::StringW const& __cordl_internal_get_difficulty() const;

  constexpr ::StringW& __cordl_internal_get_difficulty();

  constexpr ::StringW const& __cordl_internal_get_environmentName() const;

  constexpr ::StringW& __cordl_internal_get_environmentName();

  constexpr ::StringW const& __cordl_internal_get_environmentType() const;

  constexpr ::StringW& __cordl_internal_get_environmentType();

  constexpr int32_t const& __cordl_internal_get_framerate() const;

  constexpr int32_t& __cordl_internal_get_framerate();

  constexpr ::StringW const& __cordl_internal_get_levelID() const;

  constexpr ::StringW& __cordl_internal_get_levelID();

  constexpr ::StringW const& __cordl_internal_get_mode() const;

  constexpr ::StringW& __cordl_internal_get_mode();

  constexpr bool const& __cordl_internal_get_overrideEnvironments() const;

  constexpr bool& __cordl_internal_get_overrideEnvironments();

  constexpr ::StringW const& __cordl_internal_get_packID() const;

  constexpr ::StringW& __cordl_internal_get_packID();

  constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>*> const&
  __cordl_internal_get_playbackScreenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>*>&
  __cordl_internal_get_playbackScreenshots();

  constexpr bool const& __cordl_internal_get_practice() const;

  constexpr bool& __cordl_internal_get_practice();

  constexpr bool const& __cordl_internal_get_recordPerformance() const;

  constexpr bool& __cordl_internal_get_recordPerformance();

  constexpr ::StringW const& __cordl_internal_get_recordingMode() const;

  constexpr ::StringW& __cordl_internal_get_recordingMode();

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

  constexpr void __cordl_internal_set_cameraView(::StringW value);

  constexpr void __cordl_internal_set_characteristic(::StringW value);

  constexpr void __cordl_internal_set_difficulty(::StringW value);

  constexpr void __cordl_internal_set_environmentName(::StringW value);

  constexpr void __cordl_internal_set_environmentType(::StringW value);

  constexpr void __cordl_internal_set_framerate(int32_t value);

  constexpr void __cordl_internal_set_levelID(::StringW value);

  constexpr void __cordl_internal_set_mode(::StringW value);

  constexpr void __cordl_internal_set_overrideEnvironments(bool value);

  constexpr void __cordl_internal_set_packID(::StringW value);

  constexpr void __cordl_internal_set_playbackScreenshots(
      ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>*> value);

  constexpr void __cordl_internal_set_practice(bool value);

  constexpr void __cordl_internal_set_recordPerformance(bool value);

  constexpr void __cordl_internal_set_recordingMode(::StringW value);

  constexpr void __cordl_internal_set_recordingPath(::StringW value);

  constexpr void __cordl_internal_set_runLevel(bool value);

  constexpr void __cordl_internal_set_saveToOldFormat(bool value);

  constexpr void __cordl_internal_set_screenshotHeight(int32_t value);

  constexpr void __cordl_internal_set_screenshotRecording(bool value);

  constexpr void __cordl_internal_set_screenshotWidth(int32_t value);

  constexpr void __cordl_internal_set_songSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x3b2632c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigurationProcessor_RecordingConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_RecordingConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigurationProcessor_RecordingConfiguration(RecordingToolConfigurationProcessor_RecordingConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor_RecordingConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigurationProcessor_RecordingConfiguration(RecordingToolConfigurationProcessor_RecordingConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5143 };

  /// @brief Field mode, offset: 0x10, size: 0x8, def value: None
  ::StringW ___mode;

  /// @brief Field packID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___packID;

  /// @brief Field levelID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___levelID;

  /// @brief Field difficulty, offset: 0x28, size: 0x8, def value: None
  ::StringW ___difficulty;

  /// @brief Field characteristic, offset: 0x30, size: 0x8, def value: None
  ::StringW ___characteristic;

  /// @brief Field runLevel, offset: 0x38, size: 0x1, def value: None
  bool ___runLevel;

  /// @brief Field recordPerformance, offset: 0x39, size: 0x1, def value: None
  bool ___recordPerformance;

  /// @brief Field recordingMode, offset: 0x40, size: 0x8, def value: None
  ::StringW ___recordingMode;

  /// @brief Field recordingPath, offset: 0x48, size: 0x8, def value: None
  ::StringW ___recordingPath;

  /// @brief Field cameraView, offset: 0x50, size: 0x8, def value: None
  ::StringW ___cameraView;

  /// @brief Field addDateTimeSuffixToRecordingName, offset: 0x58, size: 0x1, def value: None
  bool ___addDateTimeSuffixToRecordingName;

  /// @brief Field screenshotRecording, offset: 0x59, size: 0x1, def value: None
  bool ___screenshotRecording;

  /// @brief Field screenshotWidth, offset: 0x5c, size: 0x4, def value: None
  int32_t ___screenshotWidth;

  /// @brief Field screenshotHeight, offset: 0x60, size: 0x4, def value: None
  int32_t ___screenshotHeight;

  /// @brief Field framerate, offset: 0x64, size: 0x4, def value: None
  int32_t ___framerate;

  /// @brief Field playbackScreenshots, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*, ::Array<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>*> ___playbackScreenshots;

  /// @brief Field practice, offset: 0x70, size: 0x1, def value: None
  bool ___practice;

  /// @brief Field startSongTime, offset: 0x74, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMultiplier, offset: 0x78, size: 0x4, def value: None
  float_t ___songSpeedMultiplier;

  /// @brief Field overrideEnvironments, offset: 0x7c, size: 0x1, def value: None
  bool ___overrideEnvironments;

  /// @brief Field environmentType, offset: 0x80, size: 0x8, def value: None
  ::StringW ___environmentType;

  /// @brief Field environmentName, offset: 0x88, size: 0x8, def value: None
  ::StringW ___environmentName;

  /// @brief Field saveToOldFormat, offset: 0x90, size: 0x1, def value: None
  bool ___saveToOldFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___packID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___levelID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___difficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___characteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___runLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___recordPerformance) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___recordingMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___recordingPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___cameraView) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___addDateTimeSuffixToRecordingName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___screenshotRecording) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___screenshotWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___screenshotHeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___framerate) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___playbackScreenshots) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___practice) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___startSongTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___songSpeedMultiplier) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___overrideEnvironments) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___environmentType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___environmentName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, ___saveToOldFormat) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.DotnetExtension.CommandLine.CommandLineParserResult, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolConfigurationProcessor
class CORDL_TYPE RecordingToolConfigurationProcessor : public ::System::Object {
public:
  // Declarations
  using ColorSaveData = ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData;

  using PlaybackScreenshot = ::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot;

  using RecordingConfiguration = ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration;

  using RecordingToolConfiguration = ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration;

  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _commandLineParserResult, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get__commandLineParserResult,
                      put = __cordl_internal_set__commandLineParserResult)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult _commandLineParserResult;

  /// @brief Field _environmentListModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentListModel, put = __cordl_internal_set__environmentListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentListModel;

  /// @brief Field _logger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger)) ::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _posesSerializer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__posesSerializer, put = __cordl_internal_set__posesSerializer)) ::GlobalNamespace::IPosesSerializer* _posesSerializer;

  /// @brief Method CreateMenuDestinationFromConfiguration, addr 0x3b25fa0, size 0x37c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MenuDestination* CreateMenuDestinationFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings, bool quitAppAfterRun);

  /// @brief Method CreateObjectsMovementRecorderInitDataFromConfiguration, addr 0x3b25eac, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObjectsMovementRecorder_InitData* CreateObjectsMovementRecorderInitDataFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings);

  /// @brief Method CreateRecordingToolSettingsFromConfiguration, addr 0x3b24be0, size 0x115c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RecordingToolSettings*
  CreateRecordingToolSettingsFromConfiguration(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* recordingToolConfiguration,
                                               ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  /// @brief Method DeserializeConfigurationFile, addr 0x3b245b0, size 0x258, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* DeserializeConfigurationFile(::StringW jsonData);

  /// @brief Method GetConfigFilePath, addr 0x3b24324, size 0x78, virtual false, abstract: false, final false
  inline ::StringW GetConfigFilePath();

  /// @brief Method GetDefaultMrcLayersMask, addr 0x3b2482c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask GetDefaultMrcLayersMask();

  /// @brief Method GetLayerMask, addr 0x3b248c0, size 0x1d8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask GetLayerMask(::StringW layerName);

  /// @brief Method GetLayersMask, addr 0x3b24a98, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask GetLayersMask(::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method GetLevelPackAndLevelPreviewForLevelId, addr 0x3b24b44, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*>
  GetLevelPackAndLevelPreviewForLevelId(::StringW packId, ::StringW levelId, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method IsRecordingToolEnabled, addr 0x3b242a8, size 0x7c, virtual false, abstract: false, final false
  inline bool IsRecordingToolEnabled();

  /// @brief Method LoadConfiguration, addr 0x3b24810, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* LoadConfiguration(::StringW filePath);

  /// @brief Method LoadConfigurationFile, addr 0x3b2439c, size 0x214, virtual false, abstract: false, final false
  inline ::StringW LoadConfigurationFile(::StringW filePath);

  static inline ::GlobalNamespace::RecordingToolConfigurationProcessor* New_ctor(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult,
                                                                                 ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer,
                                                                                 ::GlobalNamespace::EnvironmentsListModel* environmentListModel,
                                                                                 ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineParserResult() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineParserResult();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentListModel();

  constexpr ::GlobalNamespace::IBeatSaberLogger* const& __cordl_internal_get__logger() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::GlobalNamespace::IPosesSerializer* const& __cordl_internal_get__posesSerializer() const;

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get__posesSerializer();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  constexpr void __cordl_internal_set__environmentListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  /// @brief Method .ctor, addr 0x3b2424c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult, ::GlobalNamespace::IBeatSaberLogger* logger,
                    ::GlobalNamespace::IPosesSerializer* posesSerializer, ::GlobalNamespace::EnvironmentsListModel* environmentListModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigurationProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5144 };

  /// @brief Field kDefaultMrcLayersMask offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultMrcLayersMask{ u"DefaultMrcLayers" };

  /// @brief Field kEverythingLayerMask offset 0xffffffff size 0x8
  static constexpr ::ConstString kEverythingLayerMask{ u"Everything" };

  /// @brief Field kNormalEnvironmentNameSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kNormalEnvironmentNameSuffix{ u"Environment" };

  /// @brief Field kNormalEnvironmentType offset 0xffffffff size 0x8
  static constexpr ::ConstString kNormalEnvironmentType{ u"Normal" };

  /// @brief Field kNothingLayerMask offset 0xffffffff size 0x8
  static constexpr ::ConstString kNothingLayerMask{ u"Nothing" };

  /// @brief Field kSoloMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kSoloMode{ u"Solo" };

  /// @brief Field _commandLineParserResult, offset: 0x10, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ____commandLineParserResult;

  /// @brief Field _logger, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _posesSerializer, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ____posesSerializer;

  /// @brief Field _environmentListModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentListModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____commandLineParserResult) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____logger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____posesSerializer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____environmentListModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor*, "", "RecordingToolConfigurationProcessor");
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData*, "", "RecordingToolConfigurationProcessor/ColorSaveData");
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*, "", "RecordingToolConfigurationProcessor/PlaybackScreenshot");
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*, "", "RecordingToolConfigurationProcessor/RecordingConfiguration");
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*, "", "RecordingToolConfigurationProcessor/RecordingToolConfiguration");
