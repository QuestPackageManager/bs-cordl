#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolSubmeshData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryPoolSubmeshData)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolSubmeshData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPoolSubmeshData");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolSubmeshData
struct CORDL_TYPE GeometryPoolSubmeshData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPoolSubmeshData();

  // Ctor Parameters [CppParam { name: "submeshIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers:
  // "", def_value: None, comment: None }]
  constexpr GeometryPoolSubmeshData(int32_t submeshIndex, ::UnityW<::UnityEngine::Material> material) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20459 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field submeshIndex, offset: 0x0, size: 0x4, def value: None
  int32_t submeshIndex;

  /// @brief Field material, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData, submeshIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData, material) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
