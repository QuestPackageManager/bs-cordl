#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorStartTestLevelData.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorder_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraFov", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData::BeatmapEditorStartTestLevelData_FpfcData(bool enabled, int32_t cameraFov) noexcept {
  this->enabled = enabled;
  this->cameraFov = cameraFov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData::BeatmapEditorStartTestLevelData_FpfcData() {}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "computeBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "audioClipFrequency", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "samplesPerOverdrawBucket", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData::BeatmapEditorStartTestLevelData_OverdrawData(bool enabled, ::UnityEngine::ComputeBuffer* computeBuffer,
                                                                                                                        int32_t audioClipFrequency, float_t samplesPerOverdrawBucket) noexcept {
  this->enabled = enabled;
  this->computeBuffer = computeBuffer;
  this->audioClipFrequency = audioClipFrequency;
  this->samplesPerOverdrawBucket = samplesPerOverdrawBucket;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData::BeatmapEditorStartTestLevelData_OverdrawData() {}
// Ctor Parameters [CppParam { name: "recorderMode", ty: "::GlobalNamespace::VRControllersRecorder_Mode", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionOffset", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "headSmoothing", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controllersSmoothing", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "controllersTimeOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fpfc", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "recordingPath", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::BeatmapEditorStartTestLevelData_RecordingData(::GlobalNamespace::VRControllersRecorder_Mode recorderMode,
                                                                                                                          ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Vector3 rotationOffset,
                                                                                                                          float_t headSmoothing, float_t controllersSmoothing,
                                                                                                                          float_t controllersTimeOffset, float_t cameraFov, bool fpfc,
                                                                                                                          ::StringW recordingPath) noexcept {
  this->recorderMode = recorderMode;
  this->positionOffset = positionOffset;
  this->rotationOffset = rotationOffset;
  this->headSmoothing = headSmoothing;
  this->controllersSmoothing = controllersSmoothing;
  this->controllersTimeOffset = controllersTimeOffset;
  this->cameraFov = cameraFov;
  this->fpfc = fpfc;
  this->recordingPath = recordingPath;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData::BeatmapEditorStartTestLevelData_RecordingData() {}
// Ctor Parameters [CppParam { name: "fpfc", ty: "::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData", modifiers: "", def_value: Some("{}") }, CppParam { name: "overdrawData", ty:
// "::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData", modifiers: "", def_value: Some("{}") }, CppParam { name: "recordingData", ty:
// "::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData::BeatmapEditorStartTestLevelData(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData fpfc,
                                                                                              ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData overdrawData,
                                                                                              ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData recordingData) noexcept {
  this->fpfc = fpfc;
  this->overdrawData = overdrawData;
  this->recordingData = recordingData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData::BeatmapEditorStartTestLevelData() {}
