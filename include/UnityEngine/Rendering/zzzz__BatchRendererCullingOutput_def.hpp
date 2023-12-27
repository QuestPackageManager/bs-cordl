#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererCullingOutput)
namespace UnityEngine {
struct Matrix4x4;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchRendererCullingOutput);
// Type: UnityEngine.Rendering::BatchRendererCullingOutput
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10245)), TypeDefinitionIndex(TypeDefinitionIndex(9977))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10366))
// CS Name: ::UnityEngine.Rendering::BatchRendererCullingOutput
struct CORDL_TYPE BatchRendererCullingOutput {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }, CppParam { name: "cullingPlanes", ty: "::cordl_internals::Ptr<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "batchVisibility", ty:
  // "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: None }, CppParam { name: "visibleIndices", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "visibleIndicesY", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cullingPlanesCount", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "batchVisibilityCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesCount", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BatchRendererCullingOutput(::Unity::Jobs::JobHandle cullingJobsFence, ::UnityEngine::Matrix4x4 cullingMatrix, ::cordl_internals::Ptr<::UnityEngine::Plane> cullingPlanes,
                                       ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility> batchVisibility, ::cordl_internals::Ptr<int32_t> visibleIndices,
                                       ::cordl_internals::Ptr<int32_t> visibleIndicesY, int32_t cullingPlanesCount, int32_t batchVisibilityCount, int32_t visibleIndicesCount,
                                       float_t nearPlane) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererCullingOutput();

  /// @brief Field cullingJobsFence, offset: 0x0, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle cullingJobsFence;

  /// @brief Field cullingMatrix, offset: 0x10, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 cullingMatrix;

  /// @brief Field cullingPlanes, offset: 0x50, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Plane> cullingPlanes;

  /// @brief Field batchVisibility, offset: 0x58, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility> batchVisibility;

  /// @brief Field visibleIndices, offset: 0x60, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> visibleIndices;

  /// @brief Field visibleIndicesY, offset: 0x68, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> visibleIndicesY;

  /// @brief Field cullingPlanesCount, offset: 0x70, size: 0x4, def value: None
  int32_t cullingPlanesCount;

  /// @brief Field batchVisibilityCount, offset: 0x74, size: 0x4, def value: None
  int32_t batchVisibilityCount;

  /// @brief Field visibleIndicesCount, offset: 0x78, size: 0x4, def value: None
  int32_t visibleIndicesCount;

  /// @brief Field nearPlane, offset: 0x7c, size: 0x4, def value: None
  float_t nearPlane;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererCullingOutput, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererCullingOutput, "UnityEngine.Rendering", "BatchRendererCullingOutput");
