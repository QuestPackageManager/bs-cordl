#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeoPoolVertex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GeoPoolVertex)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeoPoolVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex, "UnityEngine.Rendering.UnifiedRayTracing", "GeoPoolVertex");
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeoPoolVertex
struct CORDL_TYPE GeoPoolVertex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeoPoolVertex();

  // Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv0", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "uv1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "N", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None, comment: None }]
  constexpr GeoPoolVertex(::UnityEngine::Vector3 pos, ::UnityEngine::Vector2 uv0, ::UnityEngine::Vector2 uv1, ::UnityEngine::Vector3 N) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20468 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field pos, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 pos;

  /// @brief Field uv0, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv0;

  /// @brief Field uv1, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv1;

  /// @brief Field N, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 N;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex, uv0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex, uv1) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex, N) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
