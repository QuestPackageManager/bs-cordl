#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/VertexBufferChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexBufferChunk)
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct VertexBufferChunk;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk, "UnityEngine.Rendering.UnifiedRayTracing", "VertexBufferChunk");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.VertexBufferChunk
struct CORDL_TYPE VertexBufferChunk {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexBufferChunk();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "verticesStartOffset", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexStride", ty: "uint32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "baseVertex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr VertexBufferChunk(::UnityEngine::GraphicsBuffer* vertices, int32_t verticesStartOffset, uint32_t vertexCount, uint32_t vertexStride, int32_t baseVertex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20481 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk, verticesStartOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk, vertexCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk, vertexStride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk, baseVertex) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
