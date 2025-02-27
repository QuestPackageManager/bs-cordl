#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputInterfaceTerrain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputInterfaceTerrain)
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTerrain_HEU_InputDataTerrain;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
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
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTerrain;
}
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTerrain_HEU_InputDataTerrain;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterfaceTerrain);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain);
// Dependencies HoudiniEngineUnity.HAPI_Transform, HoudiniEngineUnity.HEU_InputData
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceTerrain/HEU_InputDataTerrain
class CORDL_TYPE HEU_InputInterfaceTerrain_HEU_InputDataTerrain : public ::HoudiniEngineUnity::HEU_InputData {
public:
  // Declarations
  /// @brief Field _heightFieldName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__heightFieldName, put = __cordl_internal_set__heightFieldName)) ::StringW _heightFieldName;

  /// @brief Field _heightNodeID, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__heightNodeID, put = __cordl_internal_set__heightNodeID)) int32_t _heightNodeID;

  /// @brief Field _heightScale, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__heightScale, put = __cordl_internal_set__heightScale)) float_t _heightScale;

  /// @brief Field _heightfieldNodeID, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__heightfieldNodeID, put = __cordl_internal_set__heightfieldNodeID)) int32_t _heightfieldNodeID;

  /// @brief Field _maskNodeID, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__maskNodeID, put = __cordl_internal_set__maskNodeID)) int32_t _maskNodeID;

  /// @brief Field _mergeNodeID, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__mergeNodeID, put = __cordl_internal_set__mergeNodeID)) int32_t _mergeNodeID;

  /// @brief Field _numPointsX, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__numPointsX, put = __cordl_internal_set__numPointsX)) int32_t _numPointsX;

  /// @brief Field _numPointsY, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__numPointsY, put = __cordl_internal_set__numPointsY)) int32_t _numPointsY;

  /// @brief Field _parentNodeID, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__parentNodeID, put = __cordl_internal_set__parentNodeID)) int32_t _parentNodeID;

  /// @brief Field _terrain, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__terrain, put = __cordl_internal_set__terrain)) ::UnityW<::UnityEngine::Terrain> _terrain;

  /// @brief Field _terrainData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__terrainData, put = __cordl_internal_set__terrainData)) ::UnityW<::UnityEngine::TerrainData> _terrainData;

  /// @brief Field _transform, offset 0x40, size 0x28
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::HoudiniEngineUnity::HAPI_Transform _transform;

  /// @brief Field _voxelSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__voxelSize, put = __cordl_internal_set__voxelSize)) float_t _voxelSize;

  static inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__heightFieldName() const;

  constexpr ::StringW& __cordl_internal_get__heightFieldName();

  constexpr int32_t const& __cordl_internal_get__heightNodeID() const;

  constexpr int32_t& __cordl_internal_get__heightNodeID();

  constexpr float_t const& __cordl_internal_get__heightScale() const;

  constexpr float_t& __cordl_internal_get__heightScale();

  constexpr int32_t const& __cordl_internal_get__heightfieldNodeID() const;

  constexpr int32_t& __cordl_internal_get__heightfieldNodeID();

  constexpr int32_t const& __cordl_internal_get__maskNodeID() const;

  constexpr int32_t& __cordl_internal_get__maskNodeID();

  constexpr int32_t const& __cordl_internal_get__mergeNodeID() const;

  constexpr int32_t& __cordl_internal_get__mergeNodeID();

  constexpr int32_t const& __cordl_internal_get__numPointsX() const;

  constexpr int32_t& __cordl_internal_get__numPointsX();

  constexpr int32_t const& __cordl_internal_get__numPointsY() const;

  constexpr int32_t& __cordl_internal_get__numPointsY();

  constexpr int32_t const& __cordl_internal_get__parentNodeID() const;

  constexpr int32_t& __cordl_internal_get__parentNodeID();

  constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get__terrain() const;

  constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get__terrain();

  constexpr ::UnityW<::UnityEngine::TerrainData> const& __cordl_internal_get__terrainData() const;

  constexpr ::UnityW<::UnityEngine::TerrainData>& __cordl_internal_get__terrainData();

  constexpr ::HoudiniEngineUnity::HAPI_Transform const& __cordl_internal_get__transform() const;

  constexpr ::HoudiniEngineUnity::HAPI_Transform& __cordl_internal_get__transform();

  constexpr float_t const& __cordl_internal_get__voxelSize() const;

  constexpr float_t& __cordl_internal_get__voxelSize();

  constexpr void __cordl_internal_set__heightFieldName(::StringW value);

  constexpr void __cordl_internal_set__heightNodeID(int32_t value);

  constexpr void __cordl_internal_set__heightScale(float_t value);

  constexpr void __cordl_internal_set__heightfieldNodeID(int32_t value);

  constexpr void __cordl_internal_set__maskNodeID(int32_t value);

  constexpr void __cordl_internal_set__mergeNodeID(int32_t value);

  constexpr void __cordl_internal_set__numPointsX(int32_t value);

  constexpr void __cordl_internal_set__numPointsY(int32_t value);

  constexpr void __cordl_internal_set__parentNodeID(int32_t value);

  constexpr void __cordl_internal_set__terrain(::UnityW<::UnityEngine::Terrain> value);

  constexpr void __cordl_internal_set__terrainData(::UnityW<::UnityEngine::TerrainData> value);

  constexpr void __cordl_internal_set__transform(::HoudiniEngineUnity::HAPI_Transform value);

  constexpr void __cordl_internal_set__voxelSize(float_t value);

  /// @brief Method .ctor, addr 0x3a8e210, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputInterfaceTerrain_HEU_InputDataTerrain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain_HEU_InputDataTerrain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputInterfaceTerrain_HEU_InputDataTerrain(HEU_InputInterfaceTerrain_HEU_InputDataTerrain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain_HEU_InputDataTerrain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputInterfaceTerrain_HEU_InputDataTerrain(HEU_InputInterfaceTerrain_HEU_InputDataTerrain const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11830 };

  /// @brief Field _heightFieldName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____heightFieldName;

  /// @brief Field _parentNodeID, offset: 0x20, size: 0x4, def value: None
  int32_t ____parentNodeID;

  /// @brief Field _voxelSize, offset: 0x24, size: 0x4, def value: None
  float_t ____voxelSize;

  /// @brief Field _terrain, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Terrain> ____terrain;

  /// @brief Field _terrainData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TerrainData> ____terrainData;

  /// @brief Field _numPointsX, offset: 0x38, size: 0x4, def value: None
  int32_t ____numPointsX;

  /// @brief Field _numPointsY, offset: 0x3c, size: 0x4, def value: None
  int32_t ____numPointsY;

  /// @brief Field _transform, offset: 0x40, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_Transform ____transform;

  /// @brief Field _heightScale, offset: 0x68, size: 0x4, def value: None
  float_t ____heightScale;

  /// @brief Field _heightfieldNodeID, offset: 0x6c, size: 0x4, def value: None
  int32_t ____heightfieldNodeID;

  /// @brief Field _heightNodeID, offset: 0x70, size: 0x4, def value: None
  int32_t ____heightNodeID;

  /// @brief Field _maskNodeID, offset: 0x74, size: 0x4, def value: None
  int32_t ____maskNodeID;

  /// @brief Field _mergeNodeID, offset: 0x78, size: 0x4, def value: None
  int32_t ____mergeNodeID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____heightFieldName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____parentNodeID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____voxelSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____terrain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____terrainData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____numPointsX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____numPointsY) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____transform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____heightScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____heightfieldNodeID) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____heightNodeID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____maskNodeID) == 0x74, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, ____mergeNodeID) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_InputInterface
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceTerrain
class CORDL_TYPE HEU_InputInterfaceTerrain : public ::HoudiniEngineUnity::HEU_InputInterface {
public:
  // Declarations
  using HEU_InputDataTerrain = ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain;

  /// @brief Method CreateHeightFieldInputNode, addr 0x3a8c3c0, size 0x13c, virtual false, abstract: false, final false
  inline bool CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt);

  /// @brief Method CreateInputNodeWithDataUpload, addr 0x3a8bd9c, size 0x18c, virtual true, abstract: false, final false
  inline bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject, ::ByRef<int32_t> inputNodeID);

  /// @brief Method GenerateTerrainDataFromGameObject, addr 0x3a8bf88, size 0x438, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* GenerateTerrainDataFromGameObject(::UnityEngine::GameObject* inputObject);

  /// @brief Method IsThisInputObjectSupported, addr 0x3a8d70c, size 0xc8, virtual true, abstract: false, final false
  inline bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);

  static inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain* New_ctor();

  /// @brief Method SetHeightFieldData, addr 0x3a8d49c, size 0x270, virtual false, abstract: false, final false
  inline bool SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t volumeNodeID, int32_t partID, ::ArrayW<float_t, ::Array<float_t>*> heightValues, ::StringW heightFieldName,
                                 ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo);

  /// @brief Method SetMaskLayer, addr 0x3a8d380, size 0x11c, virtual false, abstract: false, final false
  inline bool SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt,
                           ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo);

  /// @brief Method SetTerrainDataAttributesToHeightField, addr 0x3a8dbf8, size 0x178, virtual false, abstract: false, final false
  inline bool SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData* terrainData);

  /// @brief Method SetTerrainLayerAttributesToHeightField, addr 0x3a8e00c, size 0x178, virtual false, abstract: false, final false
  inline bool SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainLayer* terrainLayer);

  /// @brief Method SetTreeInstances, addr 0x3a8e1f8, size 0x18, virtual false, abstract: false, final false
  inline void SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData* terrainData);

  /// @brief Method SetTreePrototypes, addr 0x3a8dd70, size 0x29c, virtual false, abstract: false, final false
  inline void SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData* terrainData);

  /// @brief Method UploadAlphaMaps, addr 0x3a8ccec, size 0x694, virtual false, abstract: false, final false
  inline bool UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt,
                              ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo, ::ByRef<bool> bMaskSet);

  /// @brief Method UploadHeightValuesWithTransform, addr 0x3a8c4fc, size 0x7f0, virtual false, abstract: false, final false
  inline bool UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt,
                                              ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo);

  /// @brief Method .ctor, addr 0x3a8bd90, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputInterfaceTerrain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputInterfaceTerrain(HEU_InputInterfaceTerrain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputInterfaceTerrain(HEU_InputInterfaceTerrain const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11831 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterfaceTerrain, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTerrain);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTerrain*, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain");
