#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectsMovementRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackScreenshotRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PosesPlayback_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecorder_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode::ObjectsMovementRecorder_Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode::ObjectsMovementRecorder_Mode() {}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode GlobalNamespace::ObjectsMovementRecorder_Mode::Record{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode GlobalNamespace::ObjectsMovementRecorder_Mode::Playback{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode GlobalNamespace::ObjectsMovementRecorder_Mode::Off{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView::ObjectsMovementRecorder_CameraView(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView::ObjectsMovementRecorder_CameraView() {}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView GlobalNamespace::ObjectsMovementRecorder_CameraView::FirstPerson{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView GlobalNamespace::ObjectsMovementRecorder_CameraView::ThirdPerson{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder_InitData::*)(
    ::GlobalNamespace::ObjectsMovementRecorder_Mode, ::StringW, ::GlobalNamespace::ObjectsMovementRecorder_CameraView, bool, bool, int32_t, int32_t, int32_t,
    ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>, bool, ::GlobalNamespace::IBeatSaberLogger*,
    ::GlobalNamespace::IPosesSerializer*)>(&::GlobalNamespace::ObjectsMovementRecorder_InitData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3b19440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectsMovementRecorder_Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectsMovementRecorder_CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPosesSerializer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_mode(::GlobalNamespace::ObjectsMovementRecorder_Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::StringW& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_recordingPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingPath;
}
constexpr ::StringW const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_recordingPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingPath;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_recordingPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recordingPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_cameraView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraView;
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_cameraView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraView;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_cameraView(::GlobalNamespace::ObjectsMovementRecorder_CameraView value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraView = value;
}
constexpr bool& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_addDateTimeSuffixToRecordingName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr bool const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_addDateTimeSuffixToRecordingName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDateTimeSuffixToRecordingName;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_addDateTimeSuffixToRecordingName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addDateTimeSuffixToRecordingName = value;
}
constexpr bool& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_screenshotRecording() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotRecording;
}
constexpr bool const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_screenshotRecording() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotRecording;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_screenshotRecording(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotRecording = value;
}
constexpr int32_t& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_screenshotWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotWidth;
}
constexpr int32_t const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_screenshotWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotWidth;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_screenshotWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotWidth = value;
}
constexpr int32_t& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_screenshotHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotHeight;
}
constexpr int32_t const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_screenshotHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotHeight;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_screenshotHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotHeight = value;
}
constexpr int32_t& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_framerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framerate;
}
constexpr int32_t const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_framerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framerate;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_framerate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___framerate = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>&
GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_playbackScreenshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackScreenshots;
}
constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> const&
GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_playbackScreenshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackScreenshots;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_playbackScreenshots(
    ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playbackScreenshots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_saveToOldFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saveToOldFormat;
}
constexpr bool const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_saveToOldFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saveToOldFormat;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_saveToOldFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saveToOldFormat = value;
}
constexpr ::GlobalNamespace::IPosesSerializer*& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_posesSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posesSerializer;
}
constexpr ::GlobalNamespace::IPosesSerializer* const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_posesSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posesSerializer;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_posesSerializer(::GlobalNamespace::IPosesSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___posesSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::GlobalNamespace::IBeatSaberLogger* const& GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder_InitData::__cordl_internal_set_logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ObjectsMovementRecorder_InitData::_ctor(
    ::GlobalNamespace::ObjectsMovementRecorder_Mode mode, ::StringW recordingPath, ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView, bool addDateTimeSuffixToRecordingName,
    bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
    ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> playbackScreenshots, bool saveToOldFormat,
    ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectsMovementRecorder_Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectsMovementRecorder_CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPosesSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth,
                                                          screenshotHeight, framerate, playbackScreenshots, saveToOldFormat, logger, posesSerializer);
}
inline ::GlobalNamespace::ObjectsMovementRecorder_InitData* GlobalNamespace::ObjectsMovementRecorder_InitData::New_ctor(
    ::GlobalNamespace::ObjectsMovementRecorder_Mode mode, ::StringW recordingPath, ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView, bool addDateTimeSuffixToRecordingName,
    bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
    ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> playbackScreenshots, bool saveToOldFormat,
    ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ObjectsMovementRecorder_InitData*>(mode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording,
                                                                                                        screenshotWidth, screenshotHeight, framerate, playbackScreenshots, saveToOldFormat, logger,
                                                                                                        posesSerializer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectsMovementRecorder_InitData::ObjectsMovementRecorder_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::Init)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x3b18290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3b19090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.HandleGameStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(
    &::GlobalNamespace::ObjectsMovementRecorder::HandleGameStateChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3b192cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                                                                               "HandleGameStateChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3b19430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__poseObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseObjects;
}
constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__poseObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseObjects;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__poseObjects(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____poseObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__livPoseObjectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____livPoseObjectId;
}
constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__livPoseObjectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____livPoseObjectId;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__livPoseObjectId(::UnityW<::GlobalNamespace::PoseObjectIdSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____livPoseObjectId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PosesRecorder>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__recorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recorder;
}
constexpr ::UnityW<::GlobalNamespace::PosesRecorder> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__recorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recorder;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__recorder(::UnityW<::GlobalNamespace::PosesRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PosesPlayback>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playback;
}
constexpr ::UnityW<::GlobalNamespace::PosesPlayback> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playback;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__playback(::UnityW<::GlobalNamespace::PosesPlayback> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playbackScreenshotRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackScreenshotRecorder;
}
constexpr ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playbackScreenshotRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackScreenshotRecorder;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__playbackScreenshotRecorder(::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playbackScreenshotRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playbackRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackRender;
}
constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playbackRender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackRender;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__playbackRender(::UnityW<::GlobalNamespace::PlaybackRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playbackRender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__externalCameraPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCameraPrefab;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__externalCameraPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCameraPrefab;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__externalCameraPrefab(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____externalCameraPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__hmdCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__hmdCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdCamera;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__hmdCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hmdCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_InitData*& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_InitData* const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__initData(::GlobalNamespace::ObjectsMovementRecorder_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__mode(::GlobalNamespace::ObjectsMovementRecorder_Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mode = value;
}
constexpr ::StringW& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__recordingPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingPath;
}
constexpr ::StringW const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__recordingPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingPath;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__recordingPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__cameraView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraView;
}
constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__cameraView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraView;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__cameraView(::GlobalNamespace::ObjectsMovementRecorder_CameraView value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraView = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__externalCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__externalCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCamera;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__externalCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____externalCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>&
GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playbackScreenshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackScreenshots;
}
constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> const&
GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__playbackScreenshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackScreenshots;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__playbackScreenshots(
    ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playbackScreenshots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::GlobalNamespace::IBeatSaberLogger* const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPosesSerializer*& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__posesSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posesSerializer;
}
constexpr ::GlobalNamespace::IPosesSerializer* const& GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_get__posesSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posesSerializer;
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____posesSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ObjectsMovementRecorder::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectsMovementRecorder::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectsMovementRecorder::HandleGameStateChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                                                                             "HandleGameStateChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectsMovementRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectsMovementRecorder* GlobalNamespace::ObjectsMovementRecorder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ObjectsMovementRecorder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectsMovementRecorder::ObjectsMovementRecorder() {}
