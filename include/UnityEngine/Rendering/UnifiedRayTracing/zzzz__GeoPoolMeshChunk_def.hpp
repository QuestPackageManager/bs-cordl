#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeoPoolMeshChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeoPoolMeshChunk)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeoPoolMeshChunk;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk, "UnityEngine.Rendering.UnifiedRayTracing", "GeoPoolMeshChunk");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeoPoolMeshChunk
struct CORDL_TYPE GeoPoolMeshChunk {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeoPoolMeshChunk();

  // Ctor Parameters [CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "vertexOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr GeoPoolMeshChunk(int32_t indexOffset, int32_t indexCount, int32_t vertexOffset, int32_t vertexCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20469 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field indexOffset, offset: 0x0, size: 0x4, def value: None
  int32_t indexOffset;

  /// @brief Field indexCount, offset: 0x4, size: 0x4, def value: None
  int32_t indexCount;

  /// @brief Field vertexOffset, offset: 0x8, size: 0x4, def value: None
  int32_t vertexOffset;

  /// @brief Field vertexCount, offset: 0xc, size: 0x4, def value: None
  int32_t vertexCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk, indexOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk, indexCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk, vertexOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk, vertexCount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
