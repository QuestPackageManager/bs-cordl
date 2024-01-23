#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingToolConfigurationProcessor)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class ProgramArguments;
}
namespace GlobalNamespace {
class RecordingSettings;
}
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
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
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5956))
// CS Name: ::RecordingToolConfigurationProcessor::ColorSaveData*
class CORDL_TYPE __RecordingToolConfigurationProcessor__ColorSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field r, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  /// @brief Field g, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) float_t g;

  /// @brief Field b, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  constexpr float_t& __cordl_internal_get_r();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr void __cordl_internal_set_r(float_t value);

  constexpr float_t& __cordl_internal_get_g();

  constexpr float_t const& __cordl_internal_get_g() const;

  constexpr void __cordl_internal_set_g(float_t value);

  constexpr float_t& __cordl_internal_get_b();

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr void __cordl_internal_set_b(float_t value);

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* New_ctor();

  /// @brief Method .ctor, addr 0x2307e84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__ColorSaveData(__RecordingToolConfigurationProcessor__ColorSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__ColorSaveData(__RecordingToolConfigurationProcessor__ColorSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__ColorSaveData();

public:
  /// @brief Field r, offset: 0x10, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field g, offset: 0x14, size: 0x4, def value: None
  float_t ___g;

  /// @brief Field b, offset: 0x18, size: 0x4, def value: None
  float_t ___b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, ___r) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, ___g) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, ___b) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlaybackScreenshot
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5957))
// CS Name: ::RecordingToolConfigurationProcessor::PlaybackScreenshot*
class CORDL_TYPE __RecordingToolConfigurationProcessor__PlaybackScreenshot : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::StringW type;

  /// @brief Field includedLayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_includedLayers, put = __cordl_internal_set_includedLayers))::ArrayW<::StringW, ::Array<::StringW>*> includedLayers;

  /// @brief Field excludedLayers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedLayers, put = __cordl_internal_set_excludedLayers))::ArrayW<::StringW, ::Array<::StringW>*> excludedLayers;

  /// @brief Field backgroundColor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundColor, put = __cordl_internal_set_backgroundColor))::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* backgroundColor;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_includedLayers();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_includedLayers() const;

  constexpr void __cordl_internal_set_includedLayers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_excludedLayers();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_excludedLayers() const;

  constexpr void __cordl_internal_set_excludedLayers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*& __cordl_internal_get_backgroundColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*> const& __cordl_internal_get_backgroundColor() const;

  constexpr void __cordl_internal_set_backgroundColor(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* value);

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot* New_ctor();

  /// @brief Method .ctor, addr 0x2307e8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__PlaybackScreenshot(__RecordingToolConfigurationProcessor__PlaybackScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__PlaybackScreenshot(__RecordingToolConfigurationProcessor__PlaybackScreenshot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__PlaybackScreenshot();

public:
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5958))
// CS Name: ::RecordingToolConfigurationProcessor::RecordingToolConfiguration*
class CORDL_TYPE __RecordingToolConfigurationProcessor__RecordingToolConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field recordingConfigurations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingConfigurations,
                      put = __cordl_internal_set_recordingConfigurations))::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,
                                                                                   ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*> recordingConfigurations;

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>&
  __cordl_internal_get_recordingConfigurations();

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,
                     ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*> const&
  __cordl_internal_get_recordingConfigurations() const;

  constexpr void __cordl_internal_set_recordingConfigurations(
      ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*> value);

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* New_ctor();

  /// @brief Method .ctor, addr 0x2305ab0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__RecordingToolConfiguration(__RecordingToolConfigurationProcessor__RecordingToolConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__RecordingToolConfiguration(__RecordingToolConfigurationProcessor__RecordingToolConfiguration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__RecordingToolConfiguration();

public:
  /// @brief Field recordingConfigurations, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>
      ___recordingConfigurations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration, ___recordingConfigurations) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingConfiguration
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5959))
// CS Name: ::RecordingToolConfigurationProcessor::RecordingConfiguration*
class CORDL_TYPE __RecordingToolConfigurationProcessor__RecordingConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field mode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::StringW mode;

  /// @brief Field packID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packID, put = __cordl_internal_set_packID))::StringW packID;

  /// @brief Field levelID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelID, put = __cordl_internal_set_levelID))::StringW levelID;

  /// @brief Field difficulty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty))::StringW difficulty;

  /// @brief Field characteristic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic))::StringW characteristic;

  /// @brief Field runLevel, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_runLevel, put = __cordl_internal_set_runLevel)) bool runLevel;

  /// @brief Field recordPerformance, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_recordPerformance, put = __cordl_internal_set_recordPerformance)) bool recordPerformance;

  /// @brief Field recordingMode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingMode, put = __cordl_internal_set_recordingMode))::StringW recordingMode;

  /// @brief Field recordingPath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingPath, put = __cordl_internal_set_recordingPath))::StringW recordingPath;

  /// @brief Field cameraView, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraView, put = __cordl_internal_set_cameraView))::StringW cameraView;

  /// @brief Field addDateTimeSuffixToRecordingName, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_addDateTimeSuffixToRecordingName, put = __cordl_internal_set_addDateTimeSuffixToRecordingName)) bool addDateTimeSuffixToRecordingName;

  /// @brief Field screenshotRecording, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_screenshotRecording, put = __cordl_internal_set_screenshotRecording)) bool screenshotRecording;

  /// @brief Field screenshotWidth, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotWidth, put = __cordl_internal_set_screenshotWidth)) int32_t screenshotWidth;

  /// @brief Field screenshotHeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotHeight, put = __cordl_internal_set_screenshotHeight)) int32_t screenshotHeight;

  /// @brief Field framerate, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_framerate, put = __cordl_internal_set_framerate)) int32_t framerate;

  /// @brief Field playbackScreenshots, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_playbackScreenshots,
                      put = __cordl_internal_set_playbackScreenshots))::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*,
                                                                               ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*> playbackScreenshots;

  /// @brief Field practice, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_practice, put = __cordl_internal_set_practice)) bool practice;

  /// @brief Field startSongTime, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  /// @brief Field songSpeedMultiplier, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeedMultiplier, put = __cordl_internal_set_songSpeedMultiplier)) float_t songSpeedMultiplier;

  /// @brief Field overrideEnvironments, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideEnvironments, put = __cordl_internal_set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field environmentType, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentType, put = __cordl_internal_set_environmentType))::StringW environmentType;

  /// @brief Field environmentName, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentName, put = __cordl_internal_set_environmentName))::StringW environmentName;

  /// @brief Field saveToOldFormat, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_saveToOldFormat, put = __cordl_internal_set_saveToOldFormat)) bool saveToOldFormat;

  constexpr ::StringW& __cordl_internal_get_mode();

  constexpr ::StringW const& __cordl_internal_get_mode() const;

  constexpr void __cordl_internal_set_mode(::StringW value);

  constexpr ::StringW& __cordl_internal_get_packID();

  constexpr ::StringW const& __cordl_internal_get_packID() const;

  constexpr void __cordl_internal_set_packID(::StringW value);

  constexpr ::StringW& __cordl_internal_get_levelID();

  constexpr ::StringW const& __cordl_internal_get_levelID() const;

  constexpr void __cordl_internal_set_levelID(::StringW value);

  constexpr ::StringW& __cordl_internal_get_difficulty();

  constexpr ::StringW const& __cordl_internal_get_difficulty() const;

  constexpr void __cordl_internal_set_difficulty(::StringW value);

  constexpr ::StringW& __cordl_internal_get_characteristic();

  constexpr ::StringW const& __cordl_internal_get_characteristic() const;

  constexpr void __cordl_internal_set_characteristic(::StringW value);

  constexpr bool& __cordl_internal_get_runLevel();

  constexpr bool const& __cordl_internal_get_runLevel() const;

  constexpr void __cordl_internal_set_runLevel(bool value);

  constexpr bool& __cordl_internal_get_recordPerformance();

  constexpr bool const& __cordl_internal_get_recordPerformance() const;

  constexpr void __cordl_internal_set_recordPerformance(bool value);

  constexpr ::StringW& __cordl_internal_get_recordingMode();

  constexpr ::StringW const& __cordl_internal_get_recordingMode() const;

  constexpr void __cordl_internal_set_recordingMode(::StringW value);

  constexpr ::StringW& __cordl_internal_get_recordingPath();

  constexpr ::StringW const& __cordl_internal_get_recordingPath() const;

  constexpr void __cordl_internal_set_recordingPath(::StringW value);

  constexpr ::StringW& __cordl_internal_get_cameraView();

  constexpr ::StringW const& __cordl_internal_get_cameraView() const;

  constexpr void __cordl_internal_set_cameraView(::StringW value);

  constexpr bool& __cordl_internal_get_addDateTimeSuffixToRecordingName();

  constexpr bool const& __cordl_internal_get_addDateTimeSuffixToRecordingName() const;

  constexpr void __cordl_internal_set_addDateTimeSuffixToRecordingName(bool value);

  constexpr bool& __cordl_internal_get_screenshotRecording();

  constexpr bool const& __cordl_internal_get_screenshotRecording() const;

  constexpr void __cordl_internal_set_screenshotRecording(bool value);

  constexpr int32_t& __cordl_internal_get_screenshotWidth();

  constexpr int32_t const& __cordl_internal_get_screenshotWidth() const;

  constexpr void __cordl_internal_set_screenshotWidth(int32_t value);

  constexpr int32_t& __cordl_internal_get_screenshotHeight();

  constexpr int32_t const& __cordl_internal_get_screenshotHeight() const;

  constexpr void __cordl_internal_set_screenshotHeight(int32_t value);

  constexpr int32_t& __cordl_internal_get_framerate();

  constexpr int32_t const& __cordl_internal_get_framerate() const;

  constexpr void __cordl_internal_set_framerate(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*>&
  __cordl_internal_get_playbackScreenshots();

  constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*> const&
  __cordl_internal_get_playbackScreenshots() const;

  constexpr void __cordl_internal_set_playbackScreenshots(
      ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, ::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*> value);

  constexpr bool& __cordl_internal_get_practice();

  constexpr bool const& __cordl_internal_get_practice() const;

  constexpr void __cordl_internal_set_practice(bool value);

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  constexpr float_t& __cordl_internal_get_songSpeedMultiplier();

  constexpr float_t const& __cordl_internal_get_songSpeedMultiplier() const;

  constexpr void __cordl_internal_set_songSpeedMultiplier(float_t value);

  constexpr bool& __cordl_internal_get_overrideEnvironments();

  constexpr bool const& __cordl_internal_get_overrideEnvironments() const;

  constexpr void __cordl_internal_set_overrideEnvironments(bool value);

  constexpr ::StringW& __cordl_internal_get_environmentType();

  constexpr ::StringW const& __cordl_internal_get_environmentType() const;

  constexpr void __cordl_internal_set_environmentType(::StringW value);

  constexpr ::StringW& __cordl_internal_get_environmentName();

  constexpr ::StringW const& __cordl_internal_get_environmentName() const;

  constexpr void __cordl_internal_set_environmentName(::StringW value);

  constexpr bool& __cordl_internal_get_saveToOldFormat();

  constexpr bool const& __cordl_internal_get_saveToOldFormat() const;

  constexpr void __cordl_internal_set_saveToOldFormat(bool value);

  static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration* New_ctor();

  /// @brief Method .ctor, addr 0x2307e94, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolConfigurationProcessor__RecordingConfiguration(__RecordingToolConfigurationProcessor__RecordingConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolConfigurationProcessor__RecordingConfiguration(__RecordingToolConfigurationProcessor__RecordingConfiguration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolConfigurationProcessor__RecordingConfiguration();

public:
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5960))
// CS Name: ::RecordingToolConfigurationProcessor*
class CORDL_TYPE RecordingToolConfigurationProcessor : public ::System::Object {
public:
  // Declarations
  using RecordingConfiguration = ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration;

  using RecordingToolConfiguration = ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration;

  using PlaybackScreenshot = ::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot;

  using ColorSaveData = ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData;

  /// @brief Field _programArguments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__programArguments, put = __cordl_internal_set__programArguments))::GlobalNamespace::ProgramArguments* _programArguments;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _posesSerializer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__posesSerializer, put = __cordl_internal_set__posesSerializer))::GlobalNamespace::IPosesSerializer* _posesSerializer;

  /// @brief Field _resourceContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__resourceContainer, put = __cordl_internal_set__resourceContainer))::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> _resourceContainer;

  constexpr ::GlobalNamespace::ProgramArguments*& __cordl_internal_get__programArguments();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ProgramArguments*> const& __cordl_internal_get__programArguments() const;

  constexpr void __cordl_internal_set__programArguments(::GlobalNamespace::ProgramArguments* value);

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get__posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __cordl_internal_get__posesSerializer() const;

  constexpr void __cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  constexpr ::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO>& __cordl_internal_get__resourceContainer();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> const& __cordl_internal_get__resourceContainer() const;

  constexpr void __cordl_internal_set__resourceContainer(::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> value);

  static inline ::GlobalNamespace::RecordingToolConfigurationProcessor* New_ctor(::GlobalNamespace::ProgramArguments* programArguments, ::GlobalNamespace::IBeatSaberLogger* logger,
                                                                                 ::GlobalNamespace::IPosesSerializer* posesSerializer,
                                                                                 ::GlobalNamespace::RecordingToolResourceContainerSO* resourceContainer);

  /// @brief Method .ctor, addr 0x2305250, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ProgramArguments* programArguments, ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer,
                    ::GlobalNamespace::RecordingToolResourceContainerSO* resourceContainer);

  /// @brief Method IsRecordingToolEnabled, addr 0x2305290, size 0x6c, virtual false, abstract: false, final false
  inline bool IsRecordingToolEnabled();

  /// @brief Method GetConfigFilePath, addr 0x23052fc, size 0x3e0, virtual false, abstract: false, final false
  inline ::StringW GetConfigFilePath();

  /// @brief Method LoadConfigurationFile, addr 0x23056dc, size 0x178, virtual false, abstract: false, final false
  inline ::StringW LoadConfigurationFile(::StringW filePath);

  /// @brief Method DeserializeConfigurationFile, addr 0x2305854, size 0x25c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* DeserializeConfigurationFile(::StringW jsonData);

  /// @brief Method LoadConfiguration, addr 0x2305ab8, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* LoadConfiguration(::StringW filePath);

  /// @brief Method GetDefaultMrcLayersMask, addr 0x2305ad4, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask GetDefaultMrcLayersMask();

  /// @brief Method GetLayerMask, addr 0x2305b68, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask GetLayerMask(::StringW layerName);

  /// @brief Method GetLayersMask, addr 0x2305d70, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask GetLayersMask(::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method GetLevelPackAndLevelPreviewForLevelId, addr 0x2305e1c, size 0x910, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>
  GetLevelPackAndLevelPreviewForLevelId(::StringW packId, ::StringW levelId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);

  /// @brief Method CreateRecordingToolSettingsFromConfiguration, addr 0x230672c, size 0x1164, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RecordingToolSettings*
  CreateRecordingToolSettingsFromConfiguration(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* recordingToolConfiguration,
                                               ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  /// @brief Method CreateObjectsMovementRecorderInitDataFromConfiguration, addr 0x2307a0c, size 0xf8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ObjectsMovementRecorder__InitData* CreateObjectsMovementRecorderInitDataFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings);

  /// @brief Method CreateMenuDestinationFromConfiguration, addr 0x2307b04, size 0x380, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MenuDestination* CreateMenuDestinationFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings, bool quitAppAfterRun);

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigurationProcessor();

public:
  /// @brief Field _programArguments, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ProgramArguments* ____programArguments;

  /// @brief Field _logger, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _posesSerializer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ____posesSerializer;

  /// @brief Field _resourceContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> ____resourceContainer;

  /// @brief Field kRecordingToolCommandLineArgument offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordingToolCommandLineArgument{ u"--enable_recording_tool" };

  /// @brief Field kSoloMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kSoloMode{ u"Solo" };

  /// @brief Field kNormalEnvironmentType offset 0xffffffff size 0x8
  static constexpr ::ConstString kNormalEnvironmentType{ u"Normal" };

  /// @brief Field kNormalEnvironmentNameSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kNormalEnvironmentNameSuffix{ u"Environment" };

  /// @brief Field kEverythingLayerMask offset 0xffffffff size 0x8
  static constexpr ::ConstString kEverythingLayerMask{ u"Everything" };

  /// @brief Field kNothingLayerMask offset 0xffffffff size 0x8
  static constexpr ::ConstString kNothingLayerMask{ u"Nothing" };

  /// @brief Field kDefaultMrcLayersMask offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultMrcLayersMask{ u"DefaultMrcLayers" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____programArguments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____posesSerializer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigurationProcessor, ____resourceContainer) == 0x28, "Offset mismatch!");

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
