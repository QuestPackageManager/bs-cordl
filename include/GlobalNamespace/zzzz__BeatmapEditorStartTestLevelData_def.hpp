#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorStartTestLevelData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapEditorStartTestLevelData);
MARK_VAL_T(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData);
MARK_VAL_T(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData);
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

  // Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }]
  constexpr BeatmapEditorStartTestLevelData_FpfcData(bool enabled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5249 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
  bool enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData, enabled) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData, 0x1>, "Size mismatch!");

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5250 };

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
// Dependencies BeatmapEditorStartTestLevelData::FpfcData, BeatmapEditorStartTestLevelData::OverdrawData
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEditorStartTestLevelData
struct CORDL_TYPE BeatmapEditorStartTestLevelData {
public:
  // Declarations
  using FpfcData = ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData;

  using OverdrawData = ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStartTestLevelData();

  // Ctor Parameters [CppParam { name: "fpfc", ty: "::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData", modifiers: "", def_value: None }, CppParam { name: "overdrawData", ty:
  // "::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData", modifiers: "", def_value: None }]
  constexpr BeatmapEditorStartTestLevelData(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData fpfc, ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData overdrawData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5251 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field fpfc, offset: 0x0, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData fpfc;

  /// @brief Field overdrawData, offset: 0x8, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData overdrawData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData, fpfc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorStartTestLevelData, overdrawData) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorStartTestLevelData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorStartTestLevelData, "", "BeatmapEditorStartTestLevelData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorStartTestLevelData_FpfcData, "", "BeatmapEditorStartTestLevelData/FpfcData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorStartTestLevelData_OverdrawData, "", "BeatmapEditorStartTestLevelData/OverdrawData");
