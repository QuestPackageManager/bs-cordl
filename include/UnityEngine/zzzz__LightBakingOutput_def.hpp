#pragma once
// IWYU pragma private; include "UnityEngine/LightBakingOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightBakingOutput)
// Forward declare root types
namespace UnityEngine {
struct LightBakingOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightBakingOutput);
// Dependencies UnityEngine.LightmapBakeType, UnityEngine.MixedLightingMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightBakingOutput
struct CORDL_TYPE LightBakingOutput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightBakingOutput();

  // Ctor Parameters [CppParam { name: "probeOcclusionLightIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occlusionMaskChannel", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "lightmapBakeType", ty: "::UnityEngine::LightmapBakeType", modifiers: "", def_value: None }, CppParam { name: "mixedLightingMode", ty: "::UnityEngine::MixedLightingMode",
  // modifiers: "", def_value: None }, CppParam { name: "isBaked", ty: "bool", modifiers: "", def_value: None }]
  constexpr LightBakingOutput(int32_t probeOcclusionLightIndex, int32_t occlusionMaskChannel, ::UnityEngine::LightmapBakeType lightmapBakeType, ::UnityEngine::MixedLightingMode mixedLightingMode,
                              bool isBaked) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10743 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field probeOcclusionLightIndex, offset: 0x0, size: 0x4, def value: None
  int32_t probeOcclusionLightIndex;

  /// @brief Field occlusionMaskChannel, offset: 0x4, size: 0x4, def value: None
  int32_t occlusionMaskChannel;

  /// @brief Field lightmapBakeType, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LightmapBakeType lightmapBakeType;

  /// @brief Field mixedLightingMode, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::MixedLightingMode mixedLightingMode;

  /// @brief Field isBaked, offset: 0x10, size: 0x1, def value: None
  bool isBaked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightBakingOutput, probeOcclusionLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightBakingOutput, occlusionMaskChannel) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightBakingOutput, lightmapBakeType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightBakingOutput, mixedLightingMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightBakingOutput, isBaked) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LightBakingOutput, 0x14>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightBakingOutput, "UnityEngine", "LightBakingOutput");
