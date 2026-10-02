#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolEntryDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolSubmeshData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GeometryPoolEntryDesc)
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolSubmeshData;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolEntryDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPoolEntryDesc");
// Dependencies UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolSubmeshData
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolEntryDesc
struct CORDL_TYPE GeometryPoolEntryDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPoolEntryDesc();

  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "submeshData", ty:
  // "::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData>", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryPoolEntryDesc(::UnityW<::UnityEngine::Mesh> mesh, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> submeshData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20460 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field submeshData, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> submeshData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc, submeshData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
