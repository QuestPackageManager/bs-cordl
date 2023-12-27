#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingSettings::*)(
    ::StringW, ::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, bool, bool,
    ::GlobalNamespace::__ObjectsMovementRecorder__Mode, ::StringW, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView, bool, bool, int32_t, int32_t, int32_t,
    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, bool, float_t, float_t, bool,
    ::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*, bool)>(&::GlobalNamespace::RecordingSettings::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2307890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__Mode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingSettings.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RecordingSettings::*)()>(&::GlobalNamespace::RecordingSettings::ToString)> {
  constexpr static std::size_t size = 0xb54;
  constexpr static std::size_t addrs = 0x2308dd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RecordingSettings::__get_gameMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameMode;
}
constexpr ::StringW const& GlobalNamespace::RecordingSettings::__get_gameMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameMode;
}
constexpr void GlobalNamespace::RecordingSettings::__set_gameMode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack*& GlobalNamespace::RecordingSettings::__get_pack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& GlobalNamespace::RecordingSettings::__get_pack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pack;
}
constexpr void GlobalNamespace::RecordingSettings::__set_pack(::GlobalNamespace::IBeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::RecordingSettings::__get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___level;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::RecordingSettings::__get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___level;
}
constexpr void GlobalNamespace::RecordingSettings::__set_level(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::RecordingSettings::__get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::RecordingSettings::__get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::RecordingSettings::__set_difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___difficulty = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::RecordingSettings::__get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::RecordingSettings::__get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::RecordingSettings::__set_characteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_runLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___runLevel;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_runLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___runLevel;
}
constexpr void GlobalNamespace::RecordingSettings::__set_runLevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___runLevel = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_recordPerformance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordPerformance;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_recordPerformance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordPerformance;
}
constexpr void GlobalNamespace::RecordingSettings::__set_recordPerformance(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___recordPerformance = value;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& GlobalNamespace::RecordingSettings::__get_recordingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordingMode;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& GlobalNamespace::RecordingSettings::__get_recordingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordingMode;
}
constexpr void GlobalNamespace::RecordingSettings::__set_recordingMode(::GlobalNamespace::__ObjectsMovementRecorder__Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___recordingMode = value;
}
constexpr ::StringW& GlobalNamespace::RecordingSettings::__get_recordingPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordingPath;
}
constexpr ::StringW const& GlobalNamespace::RecordingSettings::__get_recordingPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordingPath;
}
constexpr void GlobalNamespace::RecordingSettings::__set_recordingPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recordingPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& GlobalNamespace::RecordingSettings::__get_cameraView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cameraView;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& GlobalNamespace::RecordingSettings::__get_cameraView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cameraView;
}
constexpr void GlobalNamespace::RecordingSettings::__set_cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___cameraView = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_addDateTimeSuffixToRecordingName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_addDateTimeSuffixToRecordingName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr void GlobalNamespace::RecordingSettings::__set_addDateTimeSuffixToRecordingName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___addDateTimeSuffixToRecordingName = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_screenshotRecording() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___screenshotRecording;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_screenshotRecording() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___screenshotRecording;
}
constexpr void GlobalNamespace::RecordingSettings::__set_screenshotRecording(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___screenshotRecording = value;
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__get_screenshotWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___screenshotWidth;
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__get_screenshotWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___screenshotWidth;
}
constexpr void GlobalNamespace::RecordingSettings::__set_screenshotWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___screenshotWidth = value;
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__get_screenshotHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___screenshotHeight;
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__get_screenshotHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___screenshotHeight;
}
constexpr void GlobalNamespace::RecordingSettings::__set_screenshotHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___screenshotHeight = value;
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__get_framerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___framerate;
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__get_framerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___framerate;
}
constexpr void GlobalNamespace::RecordingSettings::__set_framerate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___framerate = value;
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>&
GlobalNamespace::RecordingSettings::__get_playbackScreenshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playbackScreenshots;
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const&
GlobalNamespace::RecordingSettings::__get_playbackScreenshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playbackScreenshots;
}
constexpr void GlobalNamespace::RecordingSettings::__set_playbackScreenshots(
    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playbackScreenshots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::RecordingSettings::__set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___practice = value;
}
constexpr float_t& GlobalNamespace::RecordingSettings::__get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::RecordingSettings::__get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::RecordingSettings::__set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::RecordingSettings::__get_songSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___songSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::RecordingSettings::__get_songSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___songSpeedMultiplier;
}
constexpr void GlobalNamespace::RecordingSettings::__set_songSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___songSpeedMultiplier = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___overrideEnvironments;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___overrideEnvironments;
}
constexpr void GlobalNamespace::RecordingSettings::__set_overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___overrideEnvironments = value;
}
constexpr ::GlobalNamespace::EnvironmentTypeSO*& GlobalNamespace::RecordingSettings::__get_environmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___environmentType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> const& GlobalNamespace::RecordingSettings::__get_environmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___environmentType;
}
constexpr void GlobalNamespace::RecordingSettings::__set_environmentType(::GlobalNamespace::EnvironmentTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::RecordingSettings::__get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::RecordingSettings::__get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___environmentInfo;
}
constexpr void GlobalNamespace::RecordingSettings::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_saveToOldFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saveToOldFormat;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_saveToOldFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saveToOldFormat;
}
constexpr void GlobalNamespace::RecordingSettings::__set_saveToOldFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___saveToOldFormat = value;
}
inline ::GlobalNamespace::RecordingSettings* GlobalNamespace::RecordingSettings::New_ctor(
    ::StringW gameMode, ::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IPreviewBeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
    ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath,
    ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight,
    int32_t framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots, bool practice,
    float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO* environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
    bool saveToOldFormat) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingSettings*>(
      gameMode, pack, level, difficulty, characteristic, runLevel, recordPerformance, recordingMode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth,
      screenshotHeight, framerate, playbackScreenshots, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat));
}
inline void GlobalNamespace::RecordingSettings::_ctor(
    ::StringW gameMode, ::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IPreviewBeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
    ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath,
    ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight,
    int32_t framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots, bool practice,
    float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO* environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
    bool saveToOldFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__Mode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameMode, pack, level, difficulty, characteristic, runLevel, recordPerformance, recordingMode, recordingPath,
                                                          cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots,
                                                          practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat);
}
inline ::StringW GlobalNamespace::RecordingSettings::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingSettings::RecordingSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
