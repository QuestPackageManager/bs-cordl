#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererCullingOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererCullingOutput)
namespace UnityEngine::Rendering {
struct BatchCullingOutputDrawCommands;
}
namespace UnityEngine::Rendering {
struct CullingSplit;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchRendererCullingOutput);
// Dependencies Unity.Jobs.JobHandle, UnityEngine.Matrix4x4, UnityEngine.Rendering.BatchCullingFlags, UnityEngine.Rendering.BatchCullingProjectionType, UnityEngine.Rendering.BatchCullingViewType
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchRendererCullingOutput
struct CORDL_TYPE BatchRendererCullingOutput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererCullingOutput();

  // Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }, CppParam { name: "cullingPlanes", ty: "::cordl_internals::Ptr<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "cullingPlaneCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "receiverPlaneOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "receiverPlaneCount", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "cullingSplits", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::CullingSplit>", modifiers: "", def_value: None }, CppParam { name:
  // "cullingSplitCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam
  // { name: "projectionType", ty: "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: None }, CppParam { name: "cullingFlags", ty:
  // "::UnityEngine::Rendering::BatchCullingFlags", modifiers: "", def_value: None }, CppParam { name: "viewID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "cullingLayerMask",
  // ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "drawCommands", ty:
  // "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: None }]
  constexpr BatchRendererCullingOutput(::Unity::Jobs::JobHandle cullingJobsFence, ::UnityEngine::Matrix4x4 localToWorldMatrix, ::cordl_internals::Ptr<::UnityEngine::Plane> cullingPlanes,
                                       int32_t cullingPlaneCount, int32_t receiverPlaneOffset, int32_t receiverPlaneCount, ::cordl_internals::Ptr<::UnityEngine::Rendering::CullingSplit> cullingSplits,
                                       int32_t cullingSplitCount, ::UnityEngine::Rendering::BatchCullingViewType viewType, ::UnityEngine::Rendering::BatchCullingProjectionType projectionType,
                                       ::UnityEngine::Rendering::BatchCullingFlags cullingFlags, uint64_t viewID, uint32_t cullingLayerMask, uint64_t sceneCullingMask,
                                       ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11254 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field cullingJobsFence, offset: 0x0, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle cullingJobsFence;

  /// @brief Field localToWorldMatrix, offset: 0x10, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 localToWorldMatrix;

  /// @brief Field cullingPlanes, offset: 0x50, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Plane> cullingPlanes;

  /// @brief Field cullingPlaneCount, offset: 0x58, size: 0x4, def value: None
  int32_t cullingPlaneCount;

  /// @brief Field receiverPlaneOffset, offset: 0x5c, size: 0x4, def value: None
  int32_t receiverPlaneOffset;

  /// @brief Field receiverPlaneCount, offset: 0x60, size: 0x4, def value: None
  int32_t receiverPlaneCount;

  /// @brief Field cullingSplits, offset: 0x68, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Rendering::CullingSplit> cullingSplits;

  /// @brief Field cullingSplitCount, offset: 0x70, size: 0x4, def value: None
  int32_t cullingSplitCount;

  /// @brief Field viewType, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingViewType viewType;

  /// @brief Field projectionType, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingProjectionType projectionType;

  /// @brief Field cullingFlags, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingFlags cullingFlags;

  /// @brief Field viewID, offset: 0x80, size: 0x8, def value: None
  uint64_t viewID;

  /// @brief Field cullingLayerMask, offset: 0x88, size: 0x4, def value: None
  uint32_t cullingLayerMask;

  /// @brief Field sceneCullingMask, offset: 0x90, size: 0x8, def value: None
  uint64_t sceneCullingMask;

  /// @brief Field drawCommands, offset: 0x98, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, cullingJobsFence) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, localToWorldMatrix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, cullingPlanes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, cullingPlaneCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, receiverPlaneOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, receiverPlaneCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, cullingSplits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, cullingSplitCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, viewType) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, projectionType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, cullingFlags) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, viewID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, cullingLayerMask) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, sceneCullingMask) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererCullingOutput, drawCommands) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererCullingOutput, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererCullingOutput, "UnityEngine.Rendering", "BatchRendererCullingOutput");
