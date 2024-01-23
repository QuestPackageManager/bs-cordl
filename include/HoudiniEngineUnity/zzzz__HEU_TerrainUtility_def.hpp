#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_TerrainUtility)
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace HoudiniEngineUnity {
struct HFLayerType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TerrainUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TerrainUtility);
// Type: HoudiniEngineUnity::HEU_TerrainUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9882))
// CS Name: ::HoudiniEngineUnity::HEU_TerrainUtility*
class CORDL_TYPE HEU_TerrainUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GenerateTerrainFromVolume, addr 0x21dbe40, size 0x9a4, virtual false, abstract: false, final false
  static inline bool GenerateTerrainFromVolume(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo, int32_t geoID, int32_t partID,
                                               ::UnityEngine::GameObject* gameObject, ByRef<::UnityEngine::TerrainData*> terrainData, ByRef<::UnityEngine::Vector3> volumePositionOffset,
                                               ByRef<::UnityEngine::Terrain*> terrain, ::StringW bakedMaterialPath);

  /// @brief Method SetTerrainMaterial, addr 0x21dc7e4, size 0x1d8, virtual false, abstract: false, final false
  static inline void SetTerrainMaterial(::UnityEngine::Terrain* terrain, ::StringW specifiedMaterialName, ::StringW bakedMaterialPath);

  /// @brief Method GetDefaultTerrainShaderName, addr 0x21dd0c0, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultTerrainShaderName();

  /// @brief Method GetDefaultTerrainMaterialPath, addr 0x21dd160, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultTerrainMaterialPath();

  /// @brief Method GetNormalizedHeightmapFromPartWithMinMax, addr 0x21dc9bc, size 0x604, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetNormalizedHeightmapFromPartWithMinMax(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, int32_t heightMapWidth,
                                                                                              int32_t heightMapHeight, ByRef<float_t> minHeight, ByRef<float_t> maxHeight, ByRef<float_t> heightRange,
                                                                                              bool bUseHeightRangeOverride);

  /// @brief Method GetDetailMapFromPart, addr 0x21dd400, size 0x2fc, virtual false, abstract: false, final false
  static inline Il2CppObject* GetDetailMapFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ByRef<int32_t> detailResolution);

  /// @brief Method GetHeightmapFromPart, addr 0x21dd200, size 0x184, virtual false, abstract: false, final false
  static inline bool GetHeightmapFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t xLength, int32_t yLength, int32_t geoID, int32_t partID,
                                          ByRef<::ArrayW<float_t, ::Array<float_t>*>> heightValues, ByRef<float_t> minHeight, ByRef<float_t> maxHeight);

  /// @brief Method ConvertHeightMapHoudiniToUnity, addr 0x21dcfc0, size 0x100, virtual false, abstract: false, final false
  static inline Il2CppObject* ConvertHeightMapHoudiniToUnity(int32_t heightMapWidth, int32_t heightMapHeight, ::ArrayW<float_t, ::Array<float_t>*> heightValues);

  /// @brief Method ConvertHeightFieldToAlphaMap, addr 0x21dd6fc, size 0x19c, virtual false, abstract: false, final false
  static inline Il2CppObject* ConvertHeightFieldToAlphaMap(int32_t heightMapWidth, int32_t heightMapHeight, ::System::Collections::Generic::List_1<::ArrayW<float_t, ::Array<float_t>*>>* heightFields);

  /// @brief Method AppendConvertedHeightFieldToAlphaMap, addr 0x21dd898, size 0x2b4, virtual false, abstract: false, final false
  static inline Il2CppObject* AppendConvertedHeightFieldToAlphaMap(int32_t heightMapWidth, int32_t heightMapHeight, Il2CppObject* existingAlphaMaps,
                                                                   ::System::Collections::Generic::List_1<::ArrayW<float_t, ::Array<float_t>*>>* heightFields,
                                                                   ::ArrayW<float_t, ::Array<float_t>*> strengths, ::System::Collections::Generic::List_1<int32_t>* alphaMapIndices);

  /// @brief Method GetVolumePositionOffset, addr 0x21ddb4c, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetVolumePositionOffset(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::UnityEngine::Vector3 volumePosition,
                                                               float_t terrainSizeX, float_t heightMapSize, int32_t mapWidth, int32_t mapHeight, float_t minHeight);

  /// @brief Method GetTreePrototypeInfosFromPart, addr 0x21ddc0c, size 0x2c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* GetTreePrototypeInfosFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID,
                                                                                                                                    int32_t partID);

  /// @brief Method PopulateScatterTrees, addr 0x21ddecc, size 0xc84, virtual false, abstract: false, final false
  static inline void PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, int32_t pointCount,
                                          ByRef<::HoudiniEngineUnity::HEU_VolumeScatterTrees*> scatterTrees, bool throwWarningIfNoTileAttribute);

  /// @brief Method ApplyScatterTrees, addr 0x21deb50, size 0x4f0, virtual false, abstract: false, final false
  static inline void ApplyScatterTrees(::UnityEngine::TerrainData* terrainData, ::HoudiniEngineUnity::HEU_VolumeScatterTrees* scatterTrees, int32_t tileIndex);

  /// @brief Method PopulateDetailPrototype, addr 0x21df040, size 0x3f0, virtual false, abstract: false, final false
  static inline void PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ByRef<::HoudiniEngineUnity::HEU_DetailPrototype*> detailPrototype);

  /// @brief Method PopulateDetailProperties, addr 0x21df430, size 0x31c, virtual false, abstract: false, final false
  static inline void PopulateDetailProperties(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ByRef<::HoudiniEngineUnity::HEU_DetailProperties*> detailProperties);

  /// @brief Method ApplyDetailLayers, addr 0x21df74c, size 0x4cc, virtual false, abstract: false, final false
  static inline void ApplyDetailLayers(::UnityEngine::Terrain* terrain, ::UnityEngine::TerrainData* terrainData, ::HoudiniEngineUnity::HEU_DetailProperties* detailProperties,
                                       ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* heuDetailPrototypes,
                                       ::System::Collections::Generic::List_1<Il2CppObject*>* convertedDetailMaps);

  /// @brief Method GetTerrainLayerIndexByName, addr 0x21dfc18, size 0x164, virtual false, abstract: false, final false
  static inline int32_t GetTerrainLayerIndexByName(::StringW layerName, ::ArrayW<::UnityEngine::TerrainLayer*, ::Array<::UnityEngine::TerrainLayer*>*> terrainLayers);

  /// @brief Method GetTerrainLayerIndex, addr 0x21dfd7c, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t GetTerrainLayerIndex(::UnityEngine::TerrainLayer* layer, ::ArrayW<::UnityEngine::TerrainLayer*, ::Array<::UnityEngine::TerrainLayer*>*> terrainLayers);

  /// @brief Method VolumeLayerHasAttributes, addr 0x21dfe3c, size 0x350, virtual false, abstract: false, final false
  static inline bool VolumeLayerHasAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID);

  /// @brief Method GetHeightfieldLayerType, addr 0x21e018c, size 0x148, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HFLayerType GetHeightfieldLayerType(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW volumeName);

  /// @brief Method GetHeightRangeFromHeightfield, addr 0x21dd384, size 0x7c, virtual false, abstract: false, final false
  static inline float_t GetHeightRangeFromHeightfield(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID);

  /// @brief Method GetTerrainDataExportPathFromHeightfieldAttribute, addr 0x21e02d4, size 0x10d8, virtual false, abstract: false, final false
  static inline ::StringW GetTerrainDataExportPathFromHeightfieldAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID);

  /// @brief Method ResampleData, addr 0x21cab04, size 0x350, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> ResampleData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t oldWidth, int32_t oldHeight, int32_t newWidth, int32_t newHeight);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TerrainUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TerrainUtility(HEU_TerrainUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TerrainUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TerrainUtility(HEU_TerrainUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TerrainUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TerrainUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TerrainUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TerrainUtility*, "HoudiniEngineUnity", "HEU_TerrainUtility");
