#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolConfigurationProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class RecordingSettings;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace GlobalNamespace {
class __ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__ColorSaveData;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__PlaybackScreenshot;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingConfiguration;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingToolConfiguration;
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
class __RecordingToolConfigurationProcessor__ColorSaveData;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__PlaybackScreenshot;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingConfiguration;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingToolConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigurationProcessor);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration);
// Type: ::ColorSaveData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolConfigurationProcessor::ColorSaveData*
class CORDL_TYPE __RecordingToolConfigurationProcessor__ColorSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  /// @brief Field g, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) float_t g;

  /// @brief Field r, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* New_ctor();

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr float_t const& __cordl_internal_get_g() const;

  constexpr float_t& __cordl_internal_get_g();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr float_t& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_g(float_t value);

  constexpr void __cordl_internal_set_r(float_t value);

  /// @brief Method .ctor, addr 0x3aca004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__ColorSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__ColorSaveData(__RecordingToolConfigurationProcessor__ColorSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__ColorSaveData(__RecordingToolConfigurationProcessor__ColorSaveData const&) = delete;

  /// @brief Field r, offset: 0x10, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field g, offset: 0x14, size: 0x4, def value: None
  float_t ___g;

  /// @brief Field b, offset: 0x18, size: 0x4, def value: None
  float_t ___b;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5114 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, ___r) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, ___g) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, ___b) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlaybackScreenshot
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolConfigurationProcessor::PlaybackScreenshot*
class CORDL_TYPE __RecordingToolConfigurationProcessor__PlaybackScreenshot : public ::System::Object {
public:
  // Declarations
  /// @brief Field backgroundColor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundColor, put = __cordl_internal_set_backgroundColor)) ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* backgroundColor;

  /// @brief Field excludedLayers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedLayers, put = __cordl_internal_set_excludedLayers)) ::ArrayW<::StringW, ::Array<::StringW>*> excludedLayers;

  /// @brief Field includedLayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_includedLayers, put = __cordl_internal_set_includedLayers)) ::ArrayW<::StringW, ::Array<::StringW>*> includedLayers;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::StringW type;

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot* New_ctor();

  constexpr ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*& __cordl_internal_get_backgroundColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*> const& __cordl_internal_get_backgroundColor() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_excludedLayers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_excludedLayers();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_includedLayers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_includedLayers();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_backgroundColor(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* value);

  constexpr void __cordl_internal_set_excludedLayers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_includedLayers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x3aca00c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__PlaybackScreenshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__PlaybackScreenshot(__RecordingToolConfigurationProcessor__PlaybackScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__PlaybackScreenshot(__RecordingToolConfigurationProcessor__PlaybackScreenshot const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field includedLayers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___includedLayers;

  /// @brief Field excludedLayers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___excludedLayers;

  /// @brief Field backgroundColor, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* ___backgroundColor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5115 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot, ___includedLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot, ___excludedLayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot, ___backgroundColor) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingToolConfiguration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolConfigurationProcessor::RecordingToolConfiguration*
class CORDL_TYPE __RecordingToolConfigurationProcessor__RecordingToolConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field recordingConfigurations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingConfigurations,
                      put = __cordl_internal_set_recordingConfigurations)) ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,
                                                                                    ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>
      recordingConfigurations;

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,
                     ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*> const&
  __cordl_internal_get_recordingConfigurations() const;

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>&
  __cordl_internal_get_recordingConfigurations();

  constexpr void __cordl_internal_set_recordingConfigurations(
      ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*> value);

  /// @brief Method .ctor, addr 0x3ac84f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__RecordingToolConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__RecordingToolConfiguration(__RecordingToolConfigurationProcessor__RecordingToolConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__RecordingToolConfiguration(__RecordingToolConfigurationProcessor__RecordingToolConfiguration const&) = delete;

  /// @brief Field recordingConfigurations, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>
      ___recordingConfigurations;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5116 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration, ___recordingConfigurations) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingConfiguration
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolConfigurationProcessor::RecordingConfiguration*
class CORDL_TYPE __RecordingToolConfigurationProcessor__RecordingConfiguration : public ::System::Object {
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
                      put = __cordl_internal_set_playbackScreenshots)) ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*,
                                                                                ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*>
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

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration* New_ctor();

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

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*> const&
  __cordl_internal_get_playbackScreenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*>&
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
      ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*> value);

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

  /// @brief Method .ctor, addr 0x3aca014, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__RecordingConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__RecordingConfiguration(__RecordingToolConfigurationProcessor__RecordingConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__RecordingConfiguration(__RecordingToolConfigurationProcessor__RecordingConfiguration const&) = delete;

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
  ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*>
      ___playbackScreenshots;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___packID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___levelID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___difficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___characteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___runLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___recordPerformance) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___recordingMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___recordingPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___cameraView) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___addDateTimeSuffixToRecordingName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___screenshotRecording) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___screenshotWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___screenshotHeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___framerate) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___playbackScreenshots) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___practice) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___startSongTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___songSpeedMultiplier) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___overrideEnvironments) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___environmentType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___environmentName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, ___saveToOldFormat) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingToolConfigurationProcessor
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolConfigurationProcessor*
class CORDL_TYPE RecordingToolConfigurationProcessor : public ::System::Object {
public:
  // Declarations
  using ColorSaveData = ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData;

  using PlaybackScreenshot = ::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot;

  using RecordingConfiguration = ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration;

  using RecordingToolConfiguration = ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration;

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

  /// @brief Method CreateMenuDestinationFromConfiguration, addr 0x3ac9c88, size 0x37c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MenuDestination* CreateMenuDestinationFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings, bool quitAppAfterRun);

  /// @brief Method CreateObjectsMovementRecorderInitDataFromConfiguration, addr 0x3ac9b94, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ObjectsMovementRecorder__InitData* CreateObjectsMovementRecorderInitDataFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings);

  /// @brief Method CreateRecordingToolSettingsFromConfiguration, addr 0x3ac88c8, size 0x115c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RecordingToolSettings*
  CreateRecordingToolSettingsFromConfiguration(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* recordingToolConfiguration,
                                               ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  /// @brief Method DeserializeConfigurationFile, addr 0x3ac8298, size 0x258, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* DeserializeConfigurationFile(::StringW jsonData);

  /// @brief Method GetConfigFilePath, addr 0x3ac800c, size 0x78, virtual false, abstract: false, final false
  inline ::StringW GetConfigFilePath();

  /// @brief Method GetDefaultMrcLayersMask, addr 0x3ac8514, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask GetDefaultMrcLayersMask();

  /// @brief Method GetLayerMask, addr 0x3ac85a8, size 0x1d8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask GetLayerMask(::StringW layerName);

  /// @brief Method GetLayersMask, addr 0x3ac8780, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask GetLayersMask(::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method GetLevelPackAndLevelPreviewForLevelId, addr 0x3ac882c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*>
  GetLevelPackAndLevelPreviewForLevelId(::StringW packId, ::StringW levelId, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method IsRecordingToolEnabled, addr 0x3ac7f90, size 0x7c, virtual false, abstract: false, final false
  inline bool IsRecordingToolEnabled();

  /// @brief Method LoadConfiguration, addr 0x3ac84f8, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* LoadConfiguration(::StringW filePath);

  /// @brief Method LoadConfigurationFile, addr 0x3ac8084, size 0x214, virtual false, abstract: false, final false
  inline ::StringW LoadConfigurationFile(::StringW filePath);

  static inline ::GlobalNamespace::RecordingToolConfigurationProcessor* New_ctor(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult,
                                                                                 ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer,
                                                                                 ::GlobalNamespace::EnvironmentsListModel* environmentListModel,
                                                                                 ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineParserResult() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineParserResult();

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentListModel() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __cordl_internal_get__logger() const;

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get__posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __cordl_internal_get__posesSerializer() const;

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  constexpr void __cordl_internal_set__environmentListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  /// @brief Method .ctor, addr 0x3ac7f34, size 0x5c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5118 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____commandLineParserResult) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____logger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____posesSerializer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____environmentListModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor*, "", "RecordingToolConfigurationProcessor");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*, "", "RecordingToolConfigurationProcessor/ColorSaveData");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, "", "RecordingToolConfigurationProcessor/PlaybackScreenshot");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, "", "RecordingToolConfigurationProcessor/RecordingConfiguration");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration*, "", "RecordingToolConfigurationProcessor/RecordingToolConfiguration");
