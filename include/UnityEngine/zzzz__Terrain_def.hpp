#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Terrain)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace UnityEngine {
class Terrain;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Terrain);
// Type: UnityEngine::Terrain
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15466))
// CS Name: ::UnityEngine::Terrain*
class CORDL_TYPE Terrain : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_terrainData, put = set_terrainData))::UnityEngine::TerrainData* terrainData;

  __declspec(property(put = set_detailObjectDistance)) float_t detailObjectDistance;

  __declspec(property(put = set_detailObjectDensity)) float_t detailObjectDensity;

  __declspec(property(get = get_materialTemplate, put = set_materialTemplate))::UnityEngine::Material* materialTemplate;

  __declspec(property(get = get_allowAutoConnect, put = set_allowAutoConnect)) bool allowAutoConnect;

  __declspec(property(get = get_groupingID)) int32_t groupingID;

  __declspec(property(put = set_drawInstanced)) bool drawInstanced;

  /// @brief Method get_terrainData, addr 0x2d1bf3c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TerrainData* get_terrainData();

  /// @brief Method set_terrainData, addr 0x2d1bf78, size 0x44, virtual false, abstract: false, final false
  inline void set_terrainData(::UnityEngine::TerrainData* value);

  /// @brief Method set_detailObjectDistance, addr 0x2d1bfbc, size 0x4c, virtual false, abstract: false, final false
  inline void set_detailObjectDistance(float_t value);

  /// @brief Method set_detailObjectDensity, addr 0x2d1c008, size 0x4c, virtual false, abstract: false, final false
  inline void set_detailObjectDensity(float_t value);

  /// @brief Method get_materialTemplate, addr 0x2d1c054, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Material* get_materialTemplate();

  /// @brief Method set_materialTemplate, addr 0x2d1c090, size 0x44, virtual false, abstract: false, final false
  inline void set_materialTemplate(::UnityEngine::Material* value);

  /// @brief Method get_allowAutoConnect, addr 0x2d1c0d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowAutoConnect();

  /// @brief Method set_allowAutoConnect, addr 0x2d1c110, size 0x44, virtual false, abstract: false, final false
  inline void set_allowAutoConnect(bool value);

  /// @brief Method get_groupingID, addr 0x2d1c154, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_groupingID();

  /// @brief Method set_drawInstanced, addr 0x2d1c190, size 0x44, virtual false, abstract: false, final false
  inline void set_drawInstanced(bool value);

  /// @brief Method SetNeighbors, addr 0x2d1c1d4, size 0x6c, virtual false, abstract: false, final false
  inline void SetNeighbors(::UnityEngine::Terrain* left, ::UnityEngine::Terrain* top, ::UnityEngine::Terrain* right, ::UnityEngine::Terrain* bottom);

  /// @brief Method Flush, addr 0x2d1c240, size 0x3c, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method get_activeTerrains, addr 0x2d1c27c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Terrain*, ::Array<::UnityEngine::Terrain*>*> get_activeTerrains();

  static inline ::UnityEngine::Terrain* New_ctor();

  /// @brief Method .ctor, addr 0x2d1c2a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Terrain(Terrain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Terrain(Terrain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Terrain();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Terrain, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Terrain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Terrain*, "UnityEngine", "Terrain");
