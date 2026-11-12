#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorStartTestLevelData.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorder_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
#include "GlobalNamespace/zzzz__RecordingPlaybackSettings_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraFov", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData::BeatmapEditorStartTestLevelData_FpfcData(bool enabled, int32_t cameraFov) noexcept {
  this->enabled = enabled;
  this->cameraFov = cameraFov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData::BeatmapEditorStartTestLevelData_FpfcData() {}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "computeBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "audioClipFrequency", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "samplesPerOverdrawBucket", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData::BeatmapEditorStartTestLevelData_OverdrawData(bool enabled, ::UnityEngine::ComputeBuffer* computeBuffer,
                                                                                                                        int32_t audioClipFrequency, float_t samplesPerOverdrawBucket) noexcept {
  this->enabled = enabled;
  this->computeBuffer = computeBuffer;
  this->audioClipFrequency = audioClipFrequency;
  this->samplesPerOverdrawBucket = samplesPerOverdrawBucket;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData::BeatmapEditorStartTestLevelData_OverdrawData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData.get_playmodeOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlaymodeOptions (::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::*)()>(
    &::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::get_playmodeOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d6220c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData>(), { "get_playmodeOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData.CreatePlaybackSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RecordingPlaybackSettings* (::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::*)()>(
    &::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::CreatePlaybackSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d6222c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData>(), { "CreatePlaybackSettings", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlaymodeOptions GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::get_playmodeOptions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData>(), { "get_playmodeOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlaymodeOptions>(*this, ___internal_method);
}
inline ::GlobalNamespace::RecordingPlaybackSettings* GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::CreatePlaybackSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData>(), { "CreatePlaybackSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RecordingPlaybackSettings*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "recorderMode", ty: "::GlobalNamespace::VRControllersRecorder_Mode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "positionOffset", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "headSmoothing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controllersSmoothing", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "controllersTimeOffset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraFov", ty: "float_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "recordingPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::BeatmapEditorStartTestLevelData_RecordingData(::GlobalNamespace::VRControllersRecorder_Mode recorderMode,
                                                                                                                          ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Vector3 rotationOffset,
                                                                                                                          float_t headSmoothing, float_t controllersSmoothing,
                                                                                                                          float_t controllersTimeOffset, float_t cameraFov,
                                                                                                                          ::StringW recordingPath) noexcept {
  this->recorderMode = recorderMode;
  this->positionOffset = positionOffset;
  this->rotationOffset = rotationOffset;
  this->headSmoothing = headSmoothing;
  this->controllersSmoothing = controllersSmoothing;
  this->controllersTimeOffset = controllersTimeOffset;
  this->cameraFov = cameraFov;
  this->recordingPath = recordingPath;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::BeatmapEditorStartTestLevelData_RecordingData() {}
// Ctor Parameters [CppParam { name: "fpfc", ty: "::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overdrawData",
// ty: "::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "recordingData", ty:
// "::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData::BeatmapEditorStartTestLevelData(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData fpfc,
                                                                                              ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData overdrawData,
                                                                                              ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData recordingData) noexcept {
  this->fpfc = fpfc;
  this->overdrawData = overdrawData;
  this->recordingData = recordingData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData::BeatmapEditorStartTestLevelData() {}
