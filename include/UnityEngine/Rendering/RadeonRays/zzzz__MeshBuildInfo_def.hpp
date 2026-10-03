#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/MeshBuildInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RadeonRays/zzzz__IndexFormat_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuildInfo)
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct MeshBuildInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, "UnityEngine.Rendering.RadeonRays", "MeshBuildInfo");
// Dependencies UnityEngine.Rendering.RadeonRays.IndexFormat
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.MeshBuildInfo
struct CORDL_TYPE MeshBuildInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuildInfo();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "verticesStartOffset", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexStride", ty: "uint32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "baseVertex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangleIndices", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "indicesStartOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "baseIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexFormat", ty: "::UnityEngine::Rendering::RadeonRays::IndexFormat", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "triangleCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr MeshBuildInfo(::UnityEngine::GraphicsBuffer* vertices, int32_t verticesStartOffset, uint32_t vertexCount, uint32_t vertexStride, int32_t baseVertex,
                          ::UnityEngine::GraphicsBuffer* triangleIndices, int32_t indicesStartOffset, int32_t baseIndex, ::UnityEngine::Rendering::RadeonRays::IndexFormat indexFormat,
                          uint32_t triangleCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20429 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* vertices;

  /// @brief Field verticesStartOffset, offset: 0x8, size: 0x4, def value: None
  int32_t verticesStartOffset;

  /// @brief Field vertexCount, offset: 0xc, size: 0x4, def value: None
  uint32_t vertexCount;

  /// @brief Field vertexStride, offset: 0x10, size: 0x4, def value: None
  uint32_t vertexStride;

  /// @brief Field baseVertex, offset: 0x14, size: 0x4, def value: None
  int32_t baseVertex;

  /// @brief Field triangleIndices, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* triangleIndices;

  /// @brief Field indicesStartOffset, offset: 0x20, size: 0x4, def value: None
  int32_t indicesStartOffset;

  /// @brief Field baseIndex, offset: 0x24, size: 0x4, def value: None
  int32_t baseIndex;

  /// @brief Field indexFormat, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::RadeonRays::IndexFormat indexFormat;

  /// @brief Field triangleCount, offset: 0x2c, size: 0x4, def value: None
  uint32_t triangleCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, verticesStartOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, vertexCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, vertexStride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, baseVertex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, triangleIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, indicesStartOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, baseIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, indexFormat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, triangleCount) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
