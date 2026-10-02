#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/TerrainDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainDesc)
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct TerrainDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, "UnityEngine.Rendering.UnifiedRayTracing", "TerrainDesc");
// Dependencies UnityEngine.Matrix4x4
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.TerrainDesc
struct CORDL_TYPE TerrainDesc {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6e01f40, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Terrain* terrain);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainDesc();

  // Ctor Parameters [CppParam { name: "terrain", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldMatrix", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "mask", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "enableTriangleCulling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "frontTriangleCounterClockwise", ty: "bool", modifiers: "", def_value: None, comment:
  // None }]
  constexpr TerrainDesc(::UnityW<::UnityEngine::Terrain> terrain, ::UnityEngine::Matrix4x4 localToWorldMatrix, uint32_t mask, uint32_t renderingLayerMask, uint32_t materialID,
                        bool enableTriangleCulling, bool frontTriangleCounterClockwise) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20451 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field terrain, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Terrain> terrain;

  /// @brief Field localToWorldMatrix, offset: 0x8, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 localToWorldMatrix;

  /// @brief Field mask, offset: 0x48, size: 0x4, def value: None
  uint32_t mask;

  /// @brief Field renderingLayerMask, offset: 0x4c, size: 0x4, def value: None
  uint32_t renderingLayerMask;

  /// @brief Field materialID, offset: 0x50, size: 0x4, def value: None
  uint32_t materialID;

  /// @brief Field enableTriangleCulling, offset: 0x54, size: 0x1, def value: None
  bool enableTriangleCulling;

  /// @brief Field frontTriangleCounterClockwise, offset: 0x55, size: 0x1, def value: None
  bool frontTriangleCounterClockwise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, terrain) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, localToWorldMatrix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, mask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, renderingLayerMask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, materialID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, enableTriangleCulling) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, frontTriangleCounterClockwise) == 0x55, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
