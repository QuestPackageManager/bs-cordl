#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainData)
namespace System {
class Object;
}
namespace UnityEngine {
class DetailPrototype;
}
namespace UnityEngine {
struct TerrainData_BoundaryValueType;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
class TreePrototype;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct TerrainData_BoundaryValueType;
}
namespace UnityEngine {
class TerrainData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainData_BoundaryValueType);
MARK_REF_PTR_T(::UnityEngine::TerrainData);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TerrainData/BoundaryValueType
struct CORDL_TYPE TerrainData_BoundaryValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TerrainData_BoundaryValueType_Unwrapped
  enum struct __TerrainData_BoundaryValueType_Unwrapped : int32_t {
    __E_MaxHeightmapRes = static_cast<int32_t>(0x0),
    __E_MinDetailResPerPatch = static_cast<int32_t>(0x1),
    __E_MaxDetailResPerPatch = static_cast<int32_t>(0x2),
    __E_MaxDetailPatchCount = static_cast<int32_t>(0x3),
    __E_MaxCoveragePerRes = static_cast<int32_t>(0x4),
    __E_MinAlphamapRes = static_cast<int32_t>(0x5),
    __E_MaxAlphamapRes = static_cast<int32_t>(0x6),
    __E_MinBaseMapRes = static_cast<int32_t>(0x7),
    __E_MaxBaseMapRes = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TerrainData_BoundaryValueType_Unwrapped() const noexcept {
    return static_cast<__TerrainData_BoundaryValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainData_BoundaryValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TerrainData_BoundaryValueType(int32_t value__) noexcept;

  /// @brief Field MaxAlphamapRes value: I32(6)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxAlphamapRes;

  /// @brief Field MaxBaseMapRes value: I32(8)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxBaseMapRes;

  /// @brief Field MaxCoveragePerRes value: I32(4)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxCoveragePerRes;

  /// @brief Field MaxDetailPatchCount value: I32(3)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxDetailPatchCount;

  /// @brief Field MaxDetailResPerPatch value: I32(2)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxDetailResPerPatch;

  /// @brief Field MaxHeightmapRes value: I32(0)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxHeightmapRes;

  /// @brief Field MinAlphamapRes value: I32(5)
  static ::UnityEngine::TerrainData_BoundaryValueType const MinAlphamapRes;

  /// @brief Field MinBaseMapRes value: I32(7)
  static ::UnityEngine::TerrainData_BoundaryValueType const MinBaseMapRes;

  /// @brief Field MinDetailResPerPatch value: I32(1)
  static ::UnityEngine::TerrainData_BoundaryValueType const MinDetailResPerPatch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18131 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainData_BoundaryValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainData_BoundaryValueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainData
class CORDL_TYPE TerrainData : public ::UnityEngine::Object {
public:
  // Declarations
  using BoundaryValueType = ::UnityEngine::TerrainData_BoundaryValueType;

  __declspec(property(get = get_Internal_alphamapResolution, put = set_Internal_alphamapResolution)) int32_t Internal_alphamapResolution;

  __declspec(property(get = get_alphamapHeight)) int32_t alphamapHeight;

  __declspec(property(get = get_alphamapLayers)) int32_t alphamapLayers;

  __declspec(property(get = get_alphamapResolution, put = set_alphamapResolution)) int32_t alphamapResolution;

  __declspec(property(get = get_alphamapWidth)) int32_t alphamapWidth;

  __declspec(property(put = set_detailPrototypes)) ::ArrayW<::UnityEngine::DetailPrototype*, ::Array<::UnityEngine::DetailPrototype*>*> detailPrototypes;

  __declspec(property(get = get_detailResolutionPerPatch)) int32_t detailResolutionPerPatch;

  __declspec(property(get = get_heightmapResolution, put = set_heightmapResolution)) int32_t heightmapResolution;

  __declspec(property(get = get_internalHeightmapResolution, put = set_internalHeightmapResolution)) int32_t internalHeightmapResolution;

  /// @brief Field k_MaximumAlphamapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumAlphamapResolution, put = setStaticF_k_MaximumAlphamapResolution)) int32_t k_MaximumAlphamapResolution;

  /// @brief Field k_MaximumBaseMapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumBaseMapResolution, put = setStaticF_k_MaximumBaseMapResolution)) int32_t k_MaximumBaseMapResolution;

  /// @brief Field k_MaximumDetailPatchCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumDetailPatchCount, put = setStaticF_k_MaximumDetailPatchCount)) int32_t k_MaximumDetailPatchCount;

  /// @brief Field k_MaximumDetailResolutionPerPatch, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumDetailResolutionPerPatch, put = setStaticF_k_MaximumDetailResolutionPerPatch)) int32_t k_MaximumDetailResolutionPerPatch;

  /// @brief Field k_MaximumResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumResolution, put = setStaticF_k_MaximumResolution)) int32_t k_MaximumResolution;

  /// @brief Field k_MinimumAlphamapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinimumAlphamapResolution, put = setStaticF_k_MinimumAlphamapResolution)) int32_t k_MinimumAlphamapResolution;

  /// @brief Field k_MinimumBaseMapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinimumBaseMapResolution, put = setStaticF_k_MinimumBaseMapResolution)) int32_t k_MinimumBaseMapResolution;

  /// @brief Field k_MinimumDetailResolutionPerPatch, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinimumDetailResolutionPerPatch, put = setStaticF_k_MinimumDetailResolutionPerPatch)) int32_t k_MinimumDetailResolutionPerPatch;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  __declspec(property(get = get_terrainLayers, put = set_terrainLayers)) ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>, ::Array<::UnityW<::UnityEngine::TerrainLayer>>*> terrainLayers;

  __declspec(property(get = get_treeInstances)) ::ArrayW<::UnityEngine::TreeInstance, ::Array<::UnityEngine::TreeInstance>*> treeInstances;

  __declspec(property(get = get_treePrototypes, put = set_treePrototypes)) ::ArrayW<::UnityEngine::TreePrototype*, ::Array<::UnityEngine::TreePrototype*>*> treePrototypes;

  __declspec(property(get = get_users)) ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> users;

  /// @brief Method GetAlphamapResolutionInternal, addr 0x492a318, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetAlphamapResolutionInternal();

  /// @brief Method GetAlphamaps, addr 0x4929ee0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Object* GetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height);

  /// @brief Method GetBoundaryValue, addr 0x4928df0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType type);

  /// @brief Method GetHeights, addr 0x492928c, size 0x130, virtual false, abstract: false, final false
  inline ::System::Object* GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// @brief Method Internal_Create, addr 0x4928ed0, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::TerrainData* terrainData);

  /// @brief Method Internal_GetAlphamaps, addr 0x4929fa4, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Object* Internal_GetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height);

  /// @brief Method Internal_GetHeights, addr 0x49293bc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Object* Internal_GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// @brief Method Internal_GetTreeInstances, addr 0x4929d94, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TreeInstance, ::Array<::UnityEngine::TreeInstance>*> Internal_GetTreeInstances();

  /// @brief Method Internal_SetAlphamaps, addr 0x492a568, size 0x74, virtual false, abstract: false, final false
  inline void Internal_SetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height, ::System::Object* map);

  /// @brief Method Internal_SetDetailLayer, addr 0x4929cd4, size 0x84, virtual false, abstract: false, final false
  inline void Internal_SetDetailLayer(int32_t xBase, int32_t yBase, int32_t totalWidth, int32_t totalHeight, int32_t detailIndex, ::System::Object* data);

  /// @brief Method Internal_SetDetailResolution, addr 0x4929b18, size 0x54, virtual false, abstract: false, final false
  inline void Internal_SetDetailResolution(int32_t patchCount, int32_t resolutionPerPatch);

  /// @brief Method Internal_SetHeights, addr 0x4929728, size 0x74, virtual false, abstract: false, final false
  inline void Internal_SetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height, ::System::Object* heights);

  static inline ::UnityEngine::TerrainData* New_ctor();

  /// @brief Method RefreshPrototypes, addr 0x4929ba8, size 0x3c, virtual false, abstract: false, final false
  inline void RefreshPrototypes();

  /// @brief Method SetAlphamaps, addr 0x492a3cc, size 0x19c, virtual false, abstract: false, final false
  inline void SetAlphamaps(int32_t x, int32_t y, ::System::Object* map);

  /// @brief Method SetDetailLayer, addr 0x4929c28, size 0xac, virtual false, abstract: false, final false
  inline void SetDetailLayer(int32_t xBase, int32_t yBase, int32_t layer, ::System::Object* details);

  /// @brief Method SetDetailResolution, addr 0x492979c, size 0x37c, virtual false, abstract: false, final false
  inline void SetDetailResolution(int32_t detailResolution, int32_t resolutionPerPatch);

  /// @brief Method SetHeights, addr 0x4929428, size 0x300, virtual false, abstract: false, final false
  inline void SetHeights(int32_t xBase, int32_t yBase, ::System::Object* heights);

  /// @brief Method SetTreeInstances, addr 0x4929dd0, size 0x54, virtual false, abstract: false, final false
  inline void SetTreeInstances(::ArrayW<::UnityEngine::TreeInstance, ::Array<::UnityEngine::TreeInstance>*> instances, bool snapToHeightmap);

  /// @brief Method .ctor, addr 0x4928e2c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_k_MaximumAlphamapResolution();

  static inline int32_t getStaticF_k_MaximumBaseMapResolution();

  static inline int32_t getStaticF_k_MaximumDetailPatchCount();

  static inline int32_t getStaticF_k_MaximumDetailResolutionPerPatch();

  static inline int32_t getStaticF_k_MaximumResolution();

  static inline int32_t getStaticF_k_MinimumAlphamapResolution();

  static inline int32_t getStaticF_k_MinimumBaseMapResolution();

  static inline int32_t getStaticF_k_MinimumDetailResolutionPerPatch();

  /// @brief Method get_Internal_alphamapResolution, addr 0x492a04c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Internal_alphamapResolution();

  /// @brief Method get_alphamapHeight, addr 0x492a390, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_alphamapHeight();

  /// @brief Method get_alphamapLayers, addr 0x4929ea4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_alphamapLayers();

  /// @brief Method get_alphamapResolution, addr 0x492a010, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_alphamapResolution();

  /// @brief Method get_alphamapWidth, addr 0x492a354, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_alphamapWidth();

  /// @brief Method get_detailResolutionPerPatch, addr 0x4929b6c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_detailResolutionPerPatch();

  /// @brief Method get_heightmapResolution, addr 0x4928f0c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_heightmapResolution();

  /// @brief Method get_internalHeightmapResolution, addr 0x4928f48, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_internalHeightmapResolution();

  /// @brief Method get_size, addr 0x4929154, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_size_Injected, addr 0x49291b0, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_terrainLayers, addr 0x492a5dc, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>, ::Array<::UnityW<::UnityEngine::TerrainLayer>>*> get_terrainLayers();

  /// @brief Method get_treeInstances, addr 0x4929d58, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TreeInstance, ::Array<::UnityEngine::TreeInstance>*> get_treeInstances();

  /// @brief Method get_treePrototypes, addr 0x4929e24, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TreePrototype*, ::Array<::UnityEngine::TreePrototype*>*> get_treePrototypes();

  /// @brief Method get_users, addr 0x4928b28, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> get_users();

  static inline void setStaticF_k_MaximumAlphamapResolution(int32_t value);

  static inline void setStaticF_k_MaximumBaseMapResolution(int32_t value);

  static inline void setStaticF_k_MaximumDetailPatchCount(int32_t value);

  static inline void setStaticF_k_MaximumDetailResolutionPerPatch(int32_t value);

  static inline void setStaticF_k_MaximumResolution(int32_t value);

  static inline void setStaticF_k_MinimumAlphamapResolution(int32_t value);

  static inline void setStaticF_k_MinimumBaseMapResolution(int32_t value);

  static inline void setStaticF_k_MinimumDetailResolutionPerPatch(int32_t value);

  /// @brief Method set_Internal_alphamapResolution, addr 0x492a2d4, size 0x44, virtual false, abstract: false, final false
  inline void set_Internal_alphamapResolution(int32_t value);

  /// @brief Method set_alphamapResolution, addr 0x492a088, size 0x24c, virtual false, abstract: false, final false
  inline void set_alphamapResolution(int32_t value);

  /// @brief Method set_detailPrototypes, addr 0x4929be4, size 0x44, virtual false, abstract: false, final false
  inline void set_detailPrototypes(::ArrayW<::UnityEngine::DetailPrototype*, ::Array<::UnityEngine::DetailPrototype*>*> value);

  /// @brief Method set_heightmapResolution, addr 0x4928f84, size 0x18c, virtual false, abstract: false, final false
  inline void set_heightmapResolution(int32_t value);

  /// @brief Method set_internalHeightmapResolution, addr 0x4929110, size 0x44, virtual false, abstract: false, final false
  inline void set_internalHeightmapResolution(int32_t value);

  /// @brief Method set_size, addr 0x49291f4, size 0x54, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method set_size_Injected, addr 0x4929248, size 0x44, virtual false, abstract: false, final false
  inline void set_size_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_terrainLayers, addr 0x492a618, size 0x44, virtual false, abstract: false, final false
  inline void set_terrainLayers(::ArrayW<::UnityEngine::TerrainLayer*, ::Array<::UnityEngine::TerrainLayer*>*> value);

  /// @brief Method set_treePrototypes, addr 0x4929e60, size 0x44, virtual false, abstract: false, final false
  inline void set_treePrototypes(::ArrayW<::UnityEngine::TreePrototype*, ::Array<::UnityEngine::TreePrototype*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainData(TerrainData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainData(TerrainData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18132 };

  /// @brief Field k_DetailDatabasePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DetailDatabasePrefix{ u"GetDetailDatabase()." };

  /// @brief Field k_HeightmapPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_HeightmapPrefix{ u"GetHeightmap()." };

  /// @brief Field k_ScriptingInterfaceName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ScriptingInterfaceName{ u"TerrainDataScriptingInterface" };

  /// @brief Field k_ScriptingInterfacePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ScriptingInterfacePrefix{ u"TerrainDataScriptingInterface::" };

  /// @brief Field k_SplatDatabasePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SplatDatabasePrefix{ u"GetSplatDatabase()." };

  /// @brief Field k_TreeDatabasePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TreeDatabasePrefix{ u"GetTreeDatabase()." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainData, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData_BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
NEED_NO_BOX(::UnityEngine::TerrainData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData*, "UnityEngine", "TerrainData");
