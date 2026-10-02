#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/MeshInstanceDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInstanceDesc)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct MeshInstanceDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, "UnityEngine.Rendering.UnifiedRayTracing", "MeshInstanceDesc");
// Dependencies UnityEngine.Matrix4x4
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.MeshInstanceDesc
struct CORDL_TYPE MeshInstanceDesc {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6e0cf28, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshInstanceDesc();

  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "subMeshIndex", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "mask", ty: "uint32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableTriangleCulling", ty:
  // "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "frontTriangleCounterClockwise", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "opaqueGeometry", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr MeshInstanceDesc(::UnityW<::UnityEngine::Mesh> mesh, int32_t subMeshIndex, ::UnityEngine::Matrix4x4 localToWorldMatrix, uint32_t mask, uint32_t instanceID, bool enableTriangleCulling,
                             bool frontTriangleCounterClockwise, bool opaqueGeometry) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20492 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field subMeshIndex, offset: 0x8, size: 0x4, def value: None
  int32_t subMeshIndex;

  /// @brief Field localToWorldMatrix, offset: 0xc, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 localToWorldMatrix;

  /// @brief Field mask, offset: 0x4c, size: 0x4, def value: None
  uint32_t mask;

  /// @brief Field instanceID, offset: 0x50, size: 0x4, def value: None
  uint32_t instanceID;

  /// @brief Field enableTriangleCulling, offset: 0x54, size: 0x1, def value: None
  bool enableTriangleCulling;

  /// @brief Field frontTriangleCounterClockwise, offset: 0x55, size: 0x1, def value: None
  bool frontTriangleCounterClockwise;

  /// @brief Field opaqueGeometry, offset: 0x56, size: 0x1, def value: None
  bool opaqueGeometry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, subMeshIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, localToWorldMatrix) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, mask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, instanceID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, enableTriangleCulling) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, frontTriangleCounterClockwise) == 0x55, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, opaqueGeometry) == 0x56, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
