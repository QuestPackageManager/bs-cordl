#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryPoolDesc)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPoolDesc");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolDesc
struct CORDL_TYPE GeometryPoolDesc {
public:
  // Declarations
  /// @brief Method NewDefault, addr 0x6dff5bc, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc NewDefault();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPoolDesc();

  // Ctor Parameters [CppParam { name: "vertexPoolByteSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexPoolByteSize", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "meshChunkTablesByteSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryPoolDesc(int32_t vertexPoolByteSize, int32_t indexPoolByteSize, int32_t meshChunkTablesByteSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20456 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field vertexPoolByteSize, offset: 0x0, size: 0x4, def value: None
  int32_t vertexPoolByteSize;

  /// @brief Field indexPoolByteSize, offset: 0x4, size: 0x4, def value: None
  int32_t indexPoolByteSize;

  /// @brief Field meshChunkTablesByteSize, offset: 0x8, size: 0x4, def value: None
  int32_t meshChunkTablesByteSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc, vertexPoolByteSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc, indexPoolByteSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc, meshChunkTablesByteSize) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc) == 0xc, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
