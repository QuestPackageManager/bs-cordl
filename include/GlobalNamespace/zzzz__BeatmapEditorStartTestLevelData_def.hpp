#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorStartTestLevelData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEditorStartTestLevelData)
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData_FpfcData;
}
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData_OverdrawData;
}
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData_RecordingData;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData;
}
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData_FpfcData;
}
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData_OverdrawData;
}
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData_RecordingData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapEditorStartTestLevelData);
MARK_VAL_T(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData);
MARK_VAL_T(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData);
MARK_VAL_T(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEditorStartTestLevelData/FpfcData
struct CORDL_TYPE BeatmapEditorStartTestLevelData_FpfcData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStartTestLevelData_FpfcData();

  // Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cameraFov", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapEditorStartTestLevelData_FpfcData(bool enabled, int32_t cameraFov) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6822 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
  bool enabled;

  /// @brief Field cameraFov, offset: 0x4, size: 0x4, def value: None
  int32_t cameraFov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData, cameraFov) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEditorStartTestLevelData/OverdrawData
struct CORDL_TYPE BeatmapEditorStartTestLevelData_OverdrawData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStartTestLevelData_OverdrawData();

  // Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "computeBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None },
  // CppParam { name: "audioClipFrequency", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "samplesPerOverdrawBucket", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BeatmapEditorStartTestLevelData_OverdrawData(bool enabled, ::UnityEngine::ComputeBuffer* computeBuffer, int32_t audioClipFrequency, float_t samplesPerOverdrawBucket) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6823 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
  bool enabled;

  /// @brief Field computeBuffer, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* computeBuffer;

  /// @brief Field audioClipFrequency, offset: 0x10, size: 0x4, def value: None
  int32_t audioClipFrequency;

  /// @brief Field samplesPerOverdrawBucket, offset: 0x14, size: 0x4, def value: None
  float_t samplesPerOverdrawBucket;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData, computeBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData, audioClipFrequency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData, samplesPerOverdrawBucket) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Vector3, VRControllersRecorder::Mode
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEditorStartTestLevelData/RecordingData
struct CORDL_TYPE BeatmapEditorStartTestLevelData_RecordingData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStartTestLevelData_RecordingData();

  // Ctor Parameters [CppParam { name: "recorderMode", ty: "::GlobalNamespace::VRControllersRecorder_Mode", modifiers: "", def_value: None }, CppParam { name: "positionOffset", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headSmoothing",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "controllersSmoothing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "controllersTimeOffset", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "cameraFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fpfc", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "recordingPath", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr BeatmapEditorStartTestLevelData_RecordingData(::GlobalNamespace::VRControllersRecorder_Mode recorderMode, ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Vector3 rotationOffset,
                                                          float_t headSmoothing, float_t controllersSmoothing, float_t controllersTimeOffset, float_t cameraFov, bool fpfc,
                                                          ::StringW recordingPath) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6824 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field recorderMode, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::VRControllersRecorder_Mode recorderMode;

  /// @brief Field positionOffset, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 positionOffset;

  /// @brief Field rotationOffset, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 rotationOffset;

  /// @brief Field headSmoothing, offset: 0x1c, size: 0x4, def value: None
  float_t headSmoothing;

  /// @brief Field controllersSmoothing, offset: 0x20, size: 0x4, def value: None
  float_t controllersSmoothing;

  /// @brief Field controllersTimeOffset, offset: 0x24, size: 0x4, def value: None
  float_t controllersTimeOffset;

  /// @brief Field cameraFov, offset: 0x28, size: 0x4, def value: None
  float_t cameraFov;

  /// @brief Field fpfc, offset: 0x2c, size: 0x1, def value: None
  bool fpfc;

  /// @brief Field recordingPath, offset: 0x30, size: 0x8, def value: None
  ::StringW recordingPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, recorderMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, positionOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, rotationOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, headSmoothing) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, controllersSmoothing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, controllersTimeOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, cameraFov) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, fpfc) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, recordingPath) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapEditorStartTestLevelData::FpfcData, BeatmapEditorStartTestLevelData::OverdrawData, BeatmapEditorStartTestLevelData::RecordingData
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEditorStartTestLevelData
struct CORDL_TYPE BeatmapEditorStartTestLevelData {
public:
  // Declarations
  using FpfcData = ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData;

  using OverdrawData = ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData;

  using RecordingData = ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStartTestLevelData();

  // Ctor Parameters [CppParam { name: "fpfc", ty: "::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData", modifiers: "", def_value: None }, CppParam { name: "overdrawData", ty:
  // "::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData", modifiers: "", def_value: None }, CppParam { name: "recordingData", ty:
  // "::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData", modifiers: "", def_value: None }]
  constexpr BeatmapEditorStartTestLevelData(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData fpfc, ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData overdrawData,
                                            ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData recordingData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6825 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field fpfc, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData fpfc;

  /// @brief Field overdrawData, offset: 0x8, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData overdrawData;

  /// @brief Field recordingData, offset: 0x20, size: 0x38, def value: None
  ::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData recordingData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData, fpfc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData, overdrawData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData, recordingData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorStartTestLevelData, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorStartTestLevelData, "", "BeatmapEditorStartTestLevelData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData, "", "BeatmapEditorStartTestLevelData/FpfcData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData, "", "BeatmapEditorStartTestLevelData/OverdrawData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorStartTestLevelData_RecordingData, "", "BeatmapEditorStartTestLevelData/RecordingData");
