#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenLODGroupDataNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenLODGroupDataNative)
namespace UnityEngine {
struct LODFadeMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupDataNative;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenLODGroupDataNative
struct CORDL_TYPE GPUDrivenLODGroupDataNative {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenLODGroupDataNative();

  // Ctor Parameters [CppParam { name: "lodGroupID", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "lodOffset", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name:
  // "lodCount", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "fadeMode", ty: "::UnityEngine::LODFadeMode*", modifiers: "", def_value: None }, CppParam { name:
  // "worldSpaceReferencePoint", ty: "::UnityEngine::Vector3*", modifiers: "", def_value: None }, CppParam { name: "worldSpaceSize", ty: "float_t*", modifiers: "", def_value: None }, CppParam { name:
  // "renderersCount", ty: "int16_t*", modifiers: "", def_value: None }, CppParam { name: "lastLODIsBillboard", ty: "bool*", modifiers: "", def_value: None }, CppParam { name: "lodGroupCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "invalidLODGroupID", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "invalidLODGroupCount", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "lodRenderersCount", ty: "int16_t*", modifiers: "", def_value: None }, CppParam { name: "lodScreenRelativeTransitionHeight", ty: "float_t*",
  // modifiers: "", def_value: None }, CppParam { name: "lodFadeTransitionWidth", ty: "float_t*", modifiers: "", def_value: None }, CppParam { name: "lodDataCount", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr GPUDrivenLODGroupDataNative(int32_t* lodGroupID, int32_t* lodOffset, int32_t* lodCount, ::UnityEngine::LODFadeMode* fadeMode, ::UnityEngine::Vector3* worldSpaceReferencePoint,
                                        float_t* worldSpaceSize, int16_t* renderersCount, bool* lastLODIsBillboard, int32_t lodGroupCount, int32_t* invalidLODGroupID, int32_t invalidLODGroupCount,
                                        int16_t* lodRenderersCount, float_t* lodScreenRelativeTransitionHeight, float_t* lodFadeTransitionWidth, int32_t lodDataCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10861 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field lodGroupID, offset: 0x0, size: 0x8, def value: None
  int32_t* lodGroupID;

  /// @brief Field lodOffset, offset: 0x8, size: 0x8, def value: None
  int32_t* lodOffset;

  /// @brief Field lodCount, offset: 0x10, size: 0x8, def value: None
  int32_t* lodCount;

  /// @brief Field fadeMode, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::LODFadeMode* fadeMode;

  /// @brief Field worldSpaceReferencePoint, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector3* worldSpaceReferencePoint;

  /// @brief Field worldSpaceSize, offset: 0x28, size: 0x8, def value: None
  float_t* worldSpaceSize;

  /// @brief Field renderersCount, offset: 0x30, size: 0x8, def value: None
  int16_t* renderersCount;

  /// @brief Field lastLODIsBillboard, offset: 0x38, size: 0x8, def value: None
  bool* lastLODIsBillboard;

  /// @brief Field lodGroupCount, offset: 0x40, size: 0x4, def value: None
  int32_t lodGroupCount;

  /// @brief Field invalidLODGroupID, offset: 0x48, size: 0x8, def value: None
  int32_t* invalidLODGroupID;

  /// @brief Field invalidLODGroupCount, offset: 0x50, size: 0x4, def value: None
  int32_t invalidLODGroupCount;

  /// @brief Field lodRenderersCount, offset: 0x58, size: 0x8, def value: None
  int16_t* lodRenderersCount;

  /// @brief Field lodScreenRelativeTransitionHeight, offset: 0x60, size: 0x8, def value: None
  float_t* lodScreenRelativeTransitionHeight;

  /// @brief Field lodFadeTransitionWidth, offset: 0x68, size: 0x8, def value: None
  float_t* lodFadeTransitionWidth;

  /// @brief Field lodDataCount, offset: 0x70, size: 0x4, def value: None
  int32_t lodDataCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodGroupID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, fadeMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, worldSpaceReferencePoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, worldSpaceSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, renderersCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lastLODIsBillboard) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodGroupCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, invalidLODGroupID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, invalidLODGroupCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodRenderersCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodScreenRelativeTransitionHeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodFadeTransitionWidth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, lodDataCount) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenLODGroupDataNative, "UnityEngine.Rendering", "GPUDrivenLODGroupDataNative");
