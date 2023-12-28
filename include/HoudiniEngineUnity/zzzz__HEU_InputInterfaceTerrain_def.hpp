#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputInterfaceTerrain)
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceTerrain__HEU_InputDataTerrain;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTerrain;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceTerrain__HEU_InputDataTerrain;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterfaceTerrain);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain);
// Type: ::HEU_InputDataTerrain
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9838)), TypeDefinitionIndex(TypeDefinitionIndex(9726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9843))
// CS Name: ::HEU_InputInterfaceTerrain::HEU_InputDataTerrain*
class CORDL_TYPE __HEU_InputInterfaceTerrain__HEU_InputDataTerrain : public ::HoudiniEngineUnity::HEU_InputData {
public:
  // Declarations
  /// @brief Field _heightFieldName, offset 0x18, size 0x8
  __declspec(property(get = __get__heightFieldName, put = __set__heightFieldName))::StringW _heightFieldName;

  /// @brief Field _parentNodeID, offset 0x20, size 0x4
  __declspec(property(get = __get__parentNodeID, put = __set__parentNodeID)) int32_t _parentNodeID;

  /// @brief Field _voxelSize, offset 0x24, size 0x4
  __declspec(property(get = __get__voxelSize, put = __set__voxelSize)) float_t _voxelSize;

  /// @brief Field _terrain, offset 0x28, size 0x8
  __declspec(property(get = __get__terrain, put = __set__terrain))::UnityEngine::Terrain* _terrain;

  /// @brief Field _terrainData, offset 0x30, size 0x8
  __declspec(property(get = __get__terrainData, put = __set__terrainData))::UnityEngine::TerrainData* _terrainData;

  /// @brief Field _numPointsX, offset 0x38, size 0x4
  __declspec(property(get = __get__numPointsX, put = __set__numPointsX)) int32_t _numPointsX;

  /// @brief Field _numPointsY, offset 0x3c, size 0x4
  __declspec(property(get = __get__numPointsY, put = __set__numPointsY)) int32_t _numPointsY;

  /// @brief Field _transform, offset 0x40, size 0x28
  __declspec(property(get = __get__transform, put = __set__transform))::HoudiniEngineUnity::HAPI_Transform _transform;

  /// @brief Field _heightScale, offset 0x68, size 0x4
  __declspec(property(get = __get__heightScale, put = __set__heightScale)) float_t _heightScale;

  /// @brief Field _heightfieldNodeID, offset 0x6c, size 0x4
  __declspec(property(get = __get__heightfieldNodeID, put = __set__heightfieldNodeID)) int32_t _heightfieldNodeID;

  /// @brief Field _heightNodeID, offset 0x70, size 0x4
  __declspec(property(get = __get__heightNodeID, put = __set__heightNodeID)) int32_t _heightNodeID;

  /// @brief Field _maskNodeID, offset 0x74, size 0x4
  __declspec(property(get = __get__maskNodeID, put = __set__maskNodeID)) int32_t _maskNodeID;

  /// @brief Field _mergeNodeID, offset 0x78, size 0x4
  __declspec(property(get = __get__mergeNodeID, put = __set__mergeNodeID)) int32_t _mergeNodeID;

  constexpr ::StringW& __get__heightFieldName();

  constexpr ::StringW const& __get__heightFieldName() const;

  constexpr void __set__heightFieldName(::StringW value);

  constexpr int32_t& __get__parentNodeID();

  constexpr int32_t const& __get__parentNodeID() const;

  constexpr void __set__parentNodeID(int32_t value);

  constexpr float_t& __get__voxelSize();

  constexpr float_t const& __get__voxelSize() const;

  constexpr void __set__voxelSize(float_t value);

  constexpr ::UnityEngine::Terrain*& __get__terrain();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> const& __get__terrain() const;

  constexpr void __set__terrain(::UnityEngine::Terrain* value);

  constexpr ::UnityEngine::TerrainData*& __get__terrainData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainData*> const& __get__terrainData() const;

  constexpr void __set__terrainData(::UnityEngine::TerrainData* value);

  constexpr int32_t& __get__numPointsX();

  constexpr int32_t const& __get__numPointsX() const;

  constexpr void __set__numPointsX(int32_t value);

  constexpr int32_t& __get__numPointsY();

  constexpr int32_t const& __get__numPointsY() const;

  constexpr void __set__numPointsY(int32_t value);

  constexpr ::HoudiniEngineUnity::HAPI_Transform& __get__transform();

  constexpr ::HoudiniEngineUnity::HAPI_Transform const& __get__transform() const;

  constexpr void __set__transform(::HoudiniEngineUnity::HAPI_Transform value);

  constexpr float_t& __get__heightScale();

  constexpr float_t const& __get__heightScale() const;

  constexpr void __set__heightScale(float_t value);

  constexpr int32_t& __get__heightfieldNodeID();

  constexpr int32_t const& __get__heightfieldNodeID() const;

  constexpr void __set__heightfieldNodeID(int32_t value);

  constexpr int32_t& __get__heightNodeID();

  constexpr int32_t const& __get__heightNodeID() const;

  constexpr void __set__heightNodeID(int32_t value);

  constexpr int32_t& __get__maskNodeID();

  constexpr int32_t const& __get__maskNodeID() const;

  constexpr void __set__maskNodeID(int32_t value);

  constexpr int32_t& __get__mergeNodeID();

  constexpr int32_t const& __get__mergeNodeID() const;

  constexpr void __set__mergeNodeID(int32_t value);

  static inline ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* New_ctor();

  /// @brief Method .ctor addr 0x21cb510 size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceTerrain__HEU_InputDataTerrain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_InputInterfaceTerrain__HEU_InputDataTerrain(__HEU_InputInterfaceTerrain__HEU_InputDataTerrain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceTerrain__HEU_InputDataTerrain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_InputInterfaceTerrain__HEU_InputDataTerrain(__HEU_InputInterfaceTerrain__HEU_InputDataTerrain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputInterfaceTerrain__HEU_InputDataTerrain();

public:
  /// @brief Field _heightFieldName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____heightFieldName;

  /// @brief Field _parentNodeID, offset: 0x20, size: 0x4, def value: None
  int32_t ____parentNodeID;

  /// @brief Field _voxelSize, offset: 0x24, size: 0x4, def value: None
  float_t ____voxelSize;

  /// @brief Field _terrain, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Terrain* ____terrain;

  /// @brief Field _terrainData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::TerrainData* ____terrainData;

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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputInterfaceTerrain
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9844))
// CS Name: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain*
class CORDL_TYPE HEU_InputInterfaceTerrain : public ::HoudiniEngineUnity::HEU_InputInterface {
public:
  // Declarations
  using HEU_InputDataTerrain = ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain;

  static inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain* New_ctor();

  /// @brief Method .ctor addr 0x21c8f90 size 0xc virtual false final false
  inline void _ctor();

  /// @brief Method CreateInputNodeWithDataUpload addr 0x21c8f9c size 0x1a4 virtual true final false
  inline bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject, ByRef<int32_t> inputNodeID);

  /// @brief Method SetMaskLayer addr 0x21ca5dc size 0x11c virtual false final false
  inline bool SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt,
                           ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo);

  /// @brief Method IsThisInputObjectSupported addr 0x21ca968 size 0xc8 virtual true final false
  inline bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);

  /// @brief Method CreateHeightFieldInputNode addr 0x21c95ec size 0x13c virtual false final false
  inline bool CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt);

  /// @brief Method UploadHeightValuesWithTransform addr 0x21c9728 size 0x800 virtual false final false
  inline bool UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt,
                                              ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo);

  /// @brief Method UploadAlphaMaps addr 0x21c9f28 size 0x6b4 virtual false final false
  inline bool UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt,
                              ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo, ByRef<bool> bMaskSet);

  /// @brief Method SetHeightFieldData addr 0x21ca6f8 size 0x270 virtual false final false
  inline bool SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t volumeNodeID, int32_t partID, ::ArrayW<float_t, ::Array<float_t>*> heightValues, ::StringW heightFieldName,
                                 ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo);

  /// @brief Method SetTerrainDataAttributesToHeightField addr 0x21cae54 size 0x1b4 virtual false final false
  inline bool SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData* terrainData);

  /// @brief Method SetTerrainLayerAttributesToHeightField addr 0x21cb2d0 size 0x1b4 virtual false final false
  inline bool SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainLayer* terrainLayer);

  /// @brief Method SetTreePrototypes addr 0x21cb008 size 0x2c8 virtual false final false
  inline void SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData* terrainData);

  /// @brief Method SetTreeInstances addr 0x21cb4f8 size 0x18 virtual false final false
  inline void SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData* terrainData);

  /// @brief Method GenerateTerrainDataFromGameObject addr 0x21c91a0 size 0x44c virtual false final false
  inline ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* GenerateTerrainDataFromGameObject(::UnityEngine::GameObject* inputObject);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputInterfaceTerrain(HEU_InputInterfaceTerrain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputInterfaceTerrain(HEU_InputInterfaceTerrain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputInterfaceTerrain();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterfaceTerrain, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTerrain);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTerrain*, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain");
