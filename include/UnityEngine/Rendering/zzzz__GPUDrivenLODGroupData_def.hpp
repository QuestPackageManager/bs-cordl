#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenLODGroupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenLODGroupData)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenLODGroupData);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LODFadeMode, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenLODGroupData
struct CORDL_TYPE GPUDrivenLODGroupData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenLODGroupData();

  // Ctor Parameters [CppParam { name: "lodGroupID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "lodOffset", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "lodCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None
  // }, CppParam { name: "fadeMode", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode>", modifiers: "", def_value: None }, CppParam { name: "worldSpaceReferencePoint", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "worldSpaceSize", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers:
  // "", def_value: None }, CppParam { name: "renderersCount", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "lastLODIsBillboard", ty:
  // "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: None }, CppParam { name: "invalidLODGroupID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "lodRenderersCount", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "lodScreenRelativeTransitionHeight", ty:
  // "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "lodFadeTransitionWidth", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "",
  // def_value: None }]
  constexpr GPUDrivenLODGroupData(::Unity::Collections::NativeArray_1<int32_t> lodGroupID, ::Unity::Collections::NativeArray_1<int32_t> lodOffset,
                                  ::Unity::Collections::NativeArray_1<int32_t> lodCount, ::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode> fadeMode,
                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> worldSpaceReferencePoint, ::Unity::Collections::NativeArray_1<float_t> worldSpaceSize,
                                  ::Unity::Collections::NativeArray_1<int16_t> renderersCount, ::Unity::Collections::NativeArray_1<bool> lastLODIsBillboard,
                                  ::Unity::Collections::NativeArray_1<int32_t> invalidLODGroupID, ::Unity::Collections::NativeArray_1<int16_t> lodRenderersCount,
                                  ::Unity::Collections::NativeArray_1<float_t> lodScreenRelativeTransitionHeight, ::Unity::Collections::NativeArray_1<float_t> lodFadeTransitionWidth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10861 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc0 };

  /// @brief Field lodGroupID, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> lodGroupID;

  /// @brief Field lodOffset, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> lodOffset;

  /// @brief Field lodCount, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> lodCount;

  /// @brief Field fadeMode, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode> fadeMode;

  /// @brief Field worldSpaceReferencePoint, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> worldSpaceReferencePoint;

  /// @brief Field worldSpaceSize, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> worldSpaceSize;

  /// @brief Field renderersCount, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> renderersCount;

  /// @brief Field lastLODIsBillboard, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<bool> lastLODIsBillboard;

  /// @brief Field invalidLODGroupID, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> invalidLODGroupID;

  /// @brief Field lodRenderersCount, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> lodRenderersCount;

  /// @brief Field lodScreenRelativeTransitionHeight, offset: 0xa0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> lodScreenRelativeTransitionHeight;

  /// @brief Field lodFadeTransitionWidth, offset: 0xb0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> lodFadeTransitionWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, lodGroupID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, lodOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, lodCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, fadeMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, worldSpaceReferencePoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, worldSpaceSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, renderersCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, lastLODIsBillboard) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, invalidLODGroupID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, lodRenderersCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, lodScreenRelativeTransitionHeight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenLODGroupData, lodFadeTransitionWidth) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenLODGroupData, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenLODGroupData, "UnityEngine.Rendering", "GPUDrivenLODGroupData");
