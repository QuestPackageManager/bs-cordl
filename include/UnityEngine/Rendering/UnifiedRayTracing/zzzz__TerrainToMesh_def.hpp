#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/TerrainToMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainToMesh)
namespace System {
class Object;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct AsyncTerrainToMeshRequest;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class TerrainToMesh;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*, "UnityEngine.Rendering.UnifiedRayTracing", "TerrainToMesh");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.TerrainToMesh
class CORDL_TYPE TerrainToMesh : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x6e073c8, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> Convert(int32_t heightmapWidth, int32_t heightmapHeight, ::ArrayW<int16_t> heightmapData, ::UnityEngine::Vector3 heightmapScale, int32_t holeWidth,
                                                      int32_t holeHeight, ::ArrayW<uint8_t> holedata);

  /// @brief Method Convert, addr 0x6e00d78, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> Convert(::UnityEngine::Terrain* terrain);

  /// @brief Method ConvertAsync, addr 0x6e06f4c, size 0x2c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest ConvertAsync(int32_t heightmapWidth, int32_t heightmapHeight, ::ArrayW<int16_t> heightmapData,
                                                                                                    ::UnityEngine::Vector3 heightmapScale, int32_t holeWidth, int32_t holeHeight,
                                                                                                    ::ArrayW<uint8_t> holedata);

  /// @brief Method ConvertAsync, addr 0x6e06e38, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest ConvertAsync(::UnityEngine::Terrain* terrain);

  /// @brief Method MakeAsyncTerrainToMeshRequest, addr 0x6e06a80, size 0x388, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest MakeAsyncTerrainToMeshRequest(int32_t width, int32_t height, ::UnityEngine::Vector3 heightmapScale,
                                                                                                                     ::System::Object* heightmap, ::System::Object* holes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainToMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainToMesh", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainToMesh(TerrainToMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainToMesh", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainToMesh(TerrainToMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
