#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorStartTestLevelData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData::BeatmapEditorStartTestLevelData_FpfcData(bool enabled) noexcept {
  this->enabled = enabled;
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
// Ctor Parameters [CppParam { name: "fpfc", ty: "::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData", modifiers: "", def_value: Some("{}") }, CppParam { name: "overdrawData", ty:
// "::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData::BeatmapEditorStartTestLevelData(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData fpfc,
                                                                                              ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData overdrawData) noexcept {
  this->fpfc = fpfc;
  this->overdrawData = overdrawData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData::BeatmapEditorStartTestLevelData() {}
