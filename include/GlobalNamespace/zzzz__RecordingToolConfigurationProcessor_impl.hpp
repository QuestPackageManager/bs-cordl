#pragma once
// IWYU pragma private; include "GlobalNamespace\RecordingToolConfigurationProcessor.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigurationProcessor_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigurationProcessor_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::*)()>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fdbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr float_t& GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr float_t const& GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_set_g(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr float_t& GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline void GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData::RecordingToolConfigurationProcessor_ColorSaveData() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::*)()>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fdbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_includedLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedLayers;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_includedLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedLayers;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_set_includedLayers(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includedLayers = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_excludedLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedLayers;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_excludedLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedLayers;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_set_excludedLayers(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedLayers = value;
}
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData*& GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_backgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor;
}
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* const&
GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_get_backgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor;
}
constexpr void
GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::__cordl_internal_set_backgroundColor(::GlobalNamespace::RecordingToolConfigurationProcessor_ColorSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundColor = value;
}
inline void GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot* GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot::RecordingToolConfigurationProcessor_PlaybackScreenshot() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::*)()>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58fdbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_mode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_packID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packID;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_packID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packID;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_packID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packID = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelID = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristic = value;
}
constexpr bool& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_runLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runLevel;
}
constexpr bool const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_runLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runLevel;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_runLevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___runLevel = value;
}
constexpr bool& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_recordPerformance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordPerformance;
}
constexpr bool const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_recordPerformance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordPerformance;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_recordPerformance(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordPerformance = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_recordingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingMode;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_recordingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingMode;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_recordingMode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingMode = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_recordingPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingPath;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_recordingPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingPath;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_recordingPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingPath = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_cameraView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraView;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_cameraView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraView;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_cameraView(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraView = value;
}
constexpr bool& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_addDateTimeSuffixToRecordingName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr bool const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_addDateTimeSuffixToRecordingName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_addDateTimeSuffixToRecordingName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addDateTimeSuffixToRecordingName = value;
}
constexpr bool& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_screenshotRecording() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotRecording;
}
constexpr bool const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_screenshotRecording() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotRecording;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_screenshotRecording(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotRecording = value;
}
constexpr int32_t& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_screenshotWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotWidth;
}
constexpr int32_t const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_screenshotWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotWidth;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_screenshotWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotWidth = value;
}
constexpr int32_t& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_screenshotHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotHeight;
}
constexpr int32_t const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_screenshotHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotHeight;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_screenshotHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotHeight = value;
}
constexpr int32_t& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_framerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framerate;
}
constexpr int32_t const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_framerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framerate;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_framerate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___framerate = value;
}
constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*>&
GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_playbackScreenshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackScreenshots;
}
constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*> const&
GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_playbackScreenshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackScreenshots;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_playbackScreenshots(
    ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_PlaybackScreenshot*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playbackScreenshots = value;
}
constexpr bool& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practice = value;
}
constexpr float_t& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_songSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_songSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMultiplier;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_songSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeedMultiplier = value;
}
constexpr bool& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr bool const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideEnvironments = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_environmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_environmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_environmentType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentType = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_environmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentName = value;
}
constexpr bool& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_saveToOldFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saveToOldFormat;
}
constexpr bool const& GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_get_saveToOldFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saveToOldFormat;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::__cordl_internal_set_saveToOldFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saveToOldFormat = value;
}
inline void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration* GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration::RecordingToolConfigurationProcessor_RecordingConfiguration() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::*)()>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fc374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*>&
GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::__cordl_internal_get_recordingConfigurations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingConfigurations;
}
constexpr ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*> const&
GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::__cordl_internal_get_recordingConfigurations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingConfigurations;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::__cordl_internal_set_recordingConfigurations(
    ::ArrayW<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingConfiguration*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingConfigurations = value;
}
inline void GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration::RecordingToolConfigurationProcessor_RecordingToolConfiguration() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolConfigurationProcessor::*)(
    ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, ::GlobalNamespace::IBeatSaberLogger*, ::GlobalNamespace::IPosesSerializer*, ::GlobalNamespace::EnvironmentsListModel*,
    ::GlobalNamespace::BeatmapLevelsModel*)>(&::GlobalNamespace::RecordingToolConfigurationProcessor::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58fbea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>(), ::i2c::type_of<::GlobalNamespace::IPosesSerializer*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.IsRecordingToolEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RecordingToolConfigurationProcessor::*)()>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor::IsRecordingToolEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58fbec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "IsRecordingToolEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.GetConfigFilePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RecordingToolConfigurationProcessor::*)()>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor::GetConfigFilePath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58fbf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetConfigFilePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.LoadConfigurationFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::StringW)>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor::LoadConfigurationFile)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x58fbf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "LoadConfigurationFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.DeserializeConfigurationFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* (
    ::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::StringW)>(&::GlobalNamespace::RecordingToolConfigurationProcessor::DeserializeConfigurationFile)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x58fc13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "DeserializeConfigurationFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.LoadConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* (
    ::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::StringW)>(&::GlobalNamespace::RecordingToolConfigurationProcessor::LoadConfiguration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58fc378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "LoadConfiguration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.GetDefaultMrcLayersMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (*)()>(&::GlobalNamespace::RecordingToolConfigurationProcessor::GetDefaultMrcLayersMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58fc394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetDefaultMrcLayersMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.GetLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::StringW)>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor::GetLayerMask)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x58fc3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetLayerMask", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.GetLayersMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::ArrayW<::StringW>)>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor::GetLayersMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58fc580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetLayersMask", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.GetLevelPackAndLevelPreviewForLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*> (*)(
    ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelsModel*)>(&::GlobalNamespace::RecordingToolConfigurationProcessor::GetLevelPackAndLevelPreviewForLevelId)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58fc5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                            { "GetLevelPackAndLevelPreviewForLevelId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.CreateRecordingToolSettingsFromConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RecordingToolSettings* (
    ::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*)>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor::CreateRecordingToolSettingsFromConfiguration)> {
  constexpr static std::size_t size = 0x10cc;
  constexpr static std::size_t addrs = 0x58fc684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                            { "CreateRecordingToolSettingsFromConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.CreateObjectsMovementRecorderInitDataFromConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::ObjectsMovementRecorder_InitData* (::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::GlobalNamespace::RecordingSettings*)>(
        &::GlobalNamespace::RecordingToolConfigurationProcessor::CreateObjectsMovementRecorderInitDataFromConfiguration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58fd7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                                                             { "CreateObjectsMovementRecorderInitDataFromConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::RecordingSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigurationProcessor.CreateMenuDestinationFromConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MenuDestination* (::GlobalNamespace::RecordingToolConfigurationProcessor::*)(::GlobalNamespace::RecordingSettings*, bool)>(
    &::GlobalNamespace::RecordingToolConfigurationProcessor::CreateMenuDestinationFromConfiguration)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x58fd8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                                                             { "CreateMenuDestinationFromConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::RecordingSettings*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__commandLineParserResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__commandLineParserResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandLineParserResult = value;
}
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::GlobalNamespace::IBeatSaberLogger* const& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logger = value;
}
constexpr ::GlobalNamespace::IPosesSerializer*& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__posesSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posesSerializer;
}
constexpr ::GlobalNamespace::IPosesSerializer* const& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__posesSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posesSerializer;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____posesSerializer = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__environmentListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__environmentListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentListModel;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_set__environmentListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentListModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::RecordingToolConfigurationProcessor::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
inline void GlobalNamespace::RecordingToolConfigurationProcessor::_ctor(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult,
                                                                        ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer,
                                                                        ::GlobalNamespace::EnvironmentsListModel* environmentListModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IPosesSerializer*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandLineParserResult, logger, posesSerializer, environmentListModel, beatmapLevelsModel);
}
inline bool GlobalNamespace::RecordingToolConfigurationProcessor::IsRecordingToolEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "IsRecordingToolEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RecordingToolConfigurationProcessor::GetConfigFilePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetConfigFilePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RecordingToolConfigurationProcessor::LoadConfigurationFile(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "LoadConfigurationFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, filePath);
}
inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* GlobalNamespace::RecordingToolConfigurationProcessor::DeserializeConfigurationFile(::StringW jsonData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "DeserializeConfigurationFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*>(this, ___internal_method, jsonData);
}
inline ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* GlobalNamespace::RecordingToolConfigurationProcessor::LoadConfiguration(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "LoadConfiguration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*>(this, ___internal_method, filePath);
}
inline ::UnityEngine::LayerMask GlobalNamespace::RecordingToolConfigurationProcessor::GetDefaultMrcLayersMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetDefaultMrcLayersMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(nullptr, ___internal_method);
}
inline ::UnityEngine::LayerMask GlobalNamespace::RecordingToolConfigurationProcessor::GetLayerMask(::StringW layerName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetLayerMask", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method, layerName);
}
inline ::UnityEngine::LayerMask GlobalNamespace::RecordingToolConfigurationProcessor::GetLayersMask(::ArrayW<::StringW> layerNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), { "GetLayersMask", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method, layerNames);
}
inline ::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*>
GlobalNamespace::RecordingToolConfigurationProcessor::GetLevelPackAndLevelPreviewForLevelId(::StringW packId, ::StringW levelId, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                          { "GetLevelPackAndLevelPreviewForLevelId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*>>(nullptr, ___internal_method, packId, levelId,
                                                                                                                                             beatmapLevelsModel);
}
inline ::GlobalNamespace::RecordingToolSettings* GlobalNamespace::RecordingToolConfigurationProcessor::CreateRecordingToolSettingsFromConfiguration(
    ::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration* recordingToolConfiguration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                          { "CreateRecordingToolSettingsFromConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::RecordingToolConfigurationProcessor_RecordingToolConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RecordingToolSettings*>(this, ___internal_method, recordingToolConfiguration);
}
inline ::GlobalNamespace::ObjectsMovementRecorder_InitData*
GlobalNamespace::RecordingToolConfigurationProcessor::CreateObjectsMovementRecorderInitDataFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                                                           { "CreateObjectsMovementRecorderInitDataFromConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::RecordingSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObjectsMovementRecorder_InitData*>(this, ___internal_method, recordingSettings);
}
inline ::GlobalNamespace::MenuDestination* GlobalNamespace::RecordingToolConfigurationProcessor::CreateMenuDestinationFromConfiguration(::GlobalNamespace::RecordingSettings* recordingSettings,
                                                                                                                                        bool quitAppAfterRun) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(),
                                                           { "CreateMenuDestinationFromConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::RecordingSettings*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuDestination*>(this, ___internal_method, recordingSettings, quitAppAfterRun);
}
inline ::GlobalNamespace::RecordingToolConfigurationProcessor*
GlobalNamespace::RecordingToolConfigurationProcessor::New_ctor(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult, ::GlobalNamespace::IBeatSaberLogger* logger,
                                                               ::GlobalNamespace::IPosesSerializer* posesSerializer, ::GlobalNamespace::EnvironmentsListModel* environmentListModel,
                                                               ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::RecordingToolConfigurationProcessor*>(commandLineParserResult, logger, posesSerializer, environmentListModel, beatmapLevelsModel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor::RecordingToolConfigurationProcessor() {}
