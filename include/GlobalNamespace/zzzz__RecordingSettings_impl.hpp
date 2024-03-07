#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingSettings::*)(
    ::StringW, ::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, bool, bool,
    ::GlobalNamespace::__ObjectsMovementRecorder__Mode, ::StringW, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView, bool, bool, int32_t, int32_t, int32_t,
    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, bool, float_t, float_t, bool,
    ::System::Nullable_1<::GlobalNamespace::EnvironmentType>, ::GlobalNamespace::EnvironmentInfoSO*, bool)>(&::GlobalNamespace::RecordingSettings::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x24693bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 23>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
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
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::EnvironmentType>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingSettings.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RecordingSettings::*)()>(&::GlobalNamespace::RecordingSettings::ToString)> {
  constexpr static std::size_t size = 0xa74;
  constexpr static std::size_t addrs = 0x246a558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RecordingSettings::__cordl_internal_get_gameMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr ::StringW const& GlobalNamespace::RecordingSettings::__cordl_internal_get_gameMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_gameMode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::RecordingSettings::__cordl_internal_get_pack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::RecordingSettings::__cordl_internal_get_pack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pack;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_pack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::RecordingSettings::__cordl_internal_get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& GlobalNamespace::RecordingSettings::__cordl_internal_get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_level(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::RecordingSettings::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::RecordingSettings::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::RecordingSettings::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::RecordingSettings::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_characteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RecordingSettings::__cordl_internal_get_runLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runLevel;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__cordl_internal_get_runLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runLevel;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_runLevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___runLevel = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__cordl_internal_get_recordPerformance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordPerformance;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__cordl_internal_get_recordPerformance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordPerformance;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_recordPerformance(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordPerformance = value;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& GlobalNamespace::RecordingSettings::__cordl_internal_get_recordingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingMode;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& GlobalNamespace::RecordingSettings::__cordl_internal_get_recordingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingMode;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_recordingMode(::GlobalNamespace::__ObjectsMovementRecorder__Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingMode = value;
}
constexpr ::StringW& GlobalNamespace::RecordingSettings::__cordl_internal_get_recordingPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingPath;
}
constexpr ::StringW const& GlobalNamespace::RecordingSettings::__cordl_internal_get_recordingPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingPath;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_recordingPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recordingPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& GlobalNamespace::RecordingSettings::__cordl_internal_get_cameraView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraView;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& GlobalNamespace::RecordingSettings::__cordl_internal_get_cameraView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraView;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraView = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__cordl_internal_get_addDateTimeSuffixToRecordingName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__cordl_internal_get_addDateTimeSuffixToRecordingName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_addDateTimeSuffixToRecordingName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addDateTimeSuffixToRecordingName = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__cordl_internal_get_screenshotRecording() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotRecording;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__cordl_internal_get_screenshotRecording() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotRecording;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_screenshotRecording(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotRecording = value;
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__cordl_internal_get_screenshotWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotWidth;
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__cordl_internal_get_screenshotWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotWidth;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_screenshotWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotWidth = value;
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__cordl_internal_get_screenshotHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotHeight;
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__cordl_internal_get_screenshotHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotHeight;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_screenshotHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotHeight = value;
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__cordl_internal_get_framerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framerate;
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__cordl_internal_get_framerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framerate;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_framerate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___framerate = value;
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>&
GlobalNamespace::RecordingSettings::__cordl_internal_get_playbackScreenshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackScreenshots;
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const&
GlobalNamespace::RecordingSettings::__cordl_internal_get_playbackScreenshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackScreenshots;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_playbackScreenshots(
    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playbackScreenshots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RecordingSettings::__cordl_internal_get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__cordl_internal_get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practice = value;
}
constexpr float_t& GlobalNamespace::RecordingSettings::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::RecordingSettings::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::RecordingSettings::__cordl_internal_get_songSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::RecordingSettings::__cordl_internal_get_songSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMultiplier;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_songSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeedMultiplier = value;
}
constexpr bool& GlobalNamespace::RecordingSettings::__cordl_internal_get_overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__cordl_internal_get_overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideEnvironments = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::EnvironmentType>& GlobalNamespace::RecordingSettings::__cordl_internal_get_environmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr ::System::Nullable_1<::GlobalNamespace::EnvironmentType> const& GlobalNamespace::RecordingSettings::__cordl_internal_get_environmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_environmentType(::System::Nullable_1<::GlobalNamespace::EnvironmentType> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentType = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::RecordingSettings::__cordl_internal_get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::RecordingSettings::__cordl_internal_get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RecordingSettings::__cordl_internal_get_saveToOldFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saveToOldFormat;
}
constexpr bool const& GlobalNamespace::RecordingSettings::__cordl_internal_get_saveToOldFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saveToOldFormat;
}
constexpr void GlobalNamespace::RecordingSettings::__cordl_internal_set_saveToOldFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saveToOldFormat = value;
}
inline ::GlobalNamespace::RecordingSettings* GlobalNamespace::RecordingSettings::New_ctor(
    ::StringW gameMode, ::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
    ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath,
    ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight,
    int32_t framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots, bool practice,
    float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::System::Nullable_1<::GlobalNamespace::EnvironmentType> environmentType,
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, bool saveToOldFormat) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingSettings*>(
      gameMode, pack, level, difficulty, characteristic, runLevel, recordPerformance, recordingMode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth,
      screenshotHeight, framerate, playbackScreenshots, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat));
}
inline void GlobalNamespace::RecordingSettings::_ctor(
    ::StringW gameMode, ::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty difficulty,
    ::GlobalNamespace::BeatmapCharacteristicSO* characteristic, bool runLevel, bool recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath,
    ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight,
    int32_t framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots, bool practice,
    float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::System::Nullable_1<::GlobalNamespace::EnvironmentType> environmentType,
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, bool saveToOldFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 23>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
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
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::EnvironmentType>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameMode, pack, level, difficulty, characteristic, runLevel, recordPerformance, recordingMode, recordingPath,
                                                          cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots,
                                                          practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat);
}
inline ::StringW GlobalNamespace::RecordingSettings::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingSettings::RecordingSettings() {}
