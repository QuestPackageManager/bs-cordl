#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferVolume)
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolumeLayer;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferVolume);
// Type: HoudiniEngineUnity::HEU_LoadBufferVolume
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferVolume*
class CORDL_TYPE HEU_LoadBufferVolume : public ::HoudiniEngineUnity::HEU_LoadBufferBase {
public:
  // Declarations
  /// @brief Field _detailMaps, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__detailMaps, put = __cordl_internal_set__detailMaps))::System::Collections::Generic::List_1<Il2CppObject*>* _detailMaps;

  /// @brief Field _detailProperties, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__detailProperties, put = __cordl_internal_set__detailProperties))::HoudiniEngineUnity::HEU_DetailProperties* _detailProperties;

  /// @brief Field _detailPrototypes, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__detailPrototypes,
                      put = __cordl_internal_set__detailPrototypes))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* _detailPrototypes;

  /// @brief Field _heightMap, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__heightMap, put = __cordl_internal_set__heightMap)) Il2CppObject* _heightMap;

  /// @brief Field _heightMapHeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__heightMapHeight, put = __cordl_internal_set__heightMapHeight)) int32_t _heightMapHeight;

  /// @brief Field _heightMapWidth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__heightMapWidth, put = __cordl_internal_set__heightMapWidth)) int32_t _heightMapWidth;

  /// @brief Field _heightRange, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__heightRange, put = __cordl_internal_set__heightRange)) float_t _heightRange;

  /// @brief Field _position, offset 0x64, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _scatterTrees, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__scatterTrees, put = __cordl_internal_set__scatterTrees))::HoudiniEngineUnity::HEU_VolumeScatterTrees* _scatterTrees;

  /// @brief Field _specifiedTerrainMaterialName, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__specifiedTerrainMaterialName, put = __cordl_internal_set__specifiedTerrainMaterialName))::StringW _specifiedTerrainMaterialName;

  /// @brief Field _splatLayers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__splatLayers,
                      put = __cordl_internal_set__splatLayers))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* _splatLayers;

  /// @brief Field _splatMaps, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__splatMaps, put = __cordl_internal_set__splatMaps)) Il2CppObject* _splatMaps;

  /// @brief Field _terrainDataExportPath, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__terrainDataExportPath, put = __cordl_internal_set__terrainDataExportPath))::StringW _terrainDataExportPath;

  /// @brief Field _terrainDataPath, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__terrainDataPath, put = __cordl_internal_set__terrainDataPath))::StringW _terrainDataPath;

  /// @brief Field _terrainSizeX, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__terrainSizeX, put = __cordl_internal_set__terrainSizeX)) float_t _terrainSizeX;

  /// @brief Field _terrainSizeY, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__terrainSizeY, put = __cordl_internal_set__terrainSizeY)) float_t _terrainSizeY;

  /// @brief Field _tileIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__tileIndex, put = __cordl_internal_set__tileIndex)) int32_t _tileIndex;

  static inline ::HoudiniEngineUnity::HEU_LoadBufferVolume* New_ctor();

  constexpr ::System::Collections::Generic::List_1<Il2CppObject*>*& __cordl_internal_get__detailMaps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<Il2CppObject*>*> const& __cordl_internal_get__detailMaps() const;

  constexpr ::HoudiniEngineUnity::HEU_DetailProperties*& __cordl_internal_get__detailProperties();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailProperties*> const& __cordl_internal_get__detailProperties() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*& __cordl_internal_get__detailPrototypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*> const& __cordl_internal_get__detailPrototypes() const;

  constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& __cordl_internal_get__heightMap() const;

  constexpr Il2CppObject*& __cordl_internal_get__heightMap();

  constexpr int32_t const& __cordl_internal_get__heightMapHeight() const;

  constexpr int32_t& __cordl_internal_get__heightMapHeight();

  constexpr int32_t const& __cordl_internal_get__heightMapWidth() const;

  constexpr int32_t& __cordl_internal_get__heightMapWidth();

  constexpr float_t const& __cordl_internal_get__heightRange() const;

  constexpr float_t& __cordl_internal_get__heightRange();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees*& __cordl_internal_get__scatterTrees();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_VolumeScatterTrees*> const& __cordl_internal_get__scatterTrees() const;

  constexpr ::StringW const& __cordl_internal_get__specifiedTerrainMaterialName() const;

  constexpr ::StringW& __cordl_internal_get__specifiedTerrainMaterialName();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*& __cordl_internal_get__splatLayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*> const& __cordl_internal_get__splatLayers() const;

  constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& __cordl_internal_get__splatMaps() const;

  constexpr Il2CppObject*& __cordl_internal_get__splatMaps();

  constexpr ::StringW const& __cordl_internal_get__terrainDataExportPath() const;

  constexpr ::StringW& __cordl_internal_get__terrainDataExportPath();

  constexpr ::StringW const& __cordl_internal_get__terrainDataPath() const;

  constexpr ::StringW& __cordl_internal_get__terrainDataPath();

  constexpr float_t const& __cordl_internal_get__terrainSizeX() const;

  constexpr float_t& __cordl_internal_get__terrainSizeX();

  constexpr float_t const& __cordl_internal_get__terrainSizeY() const;

  constexpr float_t& __cordl_internal_get__terrainSizeY();

  constexpr int32_t const& __cordl_internal_get__tileIndex() const;

  constexpr int32_t& __cordl_internal_get__tileIndex();

  constexpr void __cordl_internal_set__detailMaps(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  constexpr void __cordl_internal_set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties* value);

  constexpr void __cordl_internal_set__detailPrototypes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* value);

  constexpr void __cordl_internal_set__heightMap(Il2CppObject* value);

  constexpr void __cordl_internal_set__heightMapHeight(int32_t value);

  constexpr void __cordl_internal_set__heightMapWidth(int32_t value);

  constexpr void __cordl_internal_set__heightRange(float_t value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees* value);

  constexpr void __cordl_internal_set__specifiedTerrainMaterialName(::StringW value);

  constexpr void __cordl_internal_set__splatLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* value);

  constexpr void __cordl_internal_set__splatMaps(Il2CppObject* value);

  constexpr void __cordl_internal_set__terrainDataExportPath(::StringW value);

  constexpr void __cordl_internal_set__terrainDataPath(::StringW value);

  constexpr void __cordl_internal_set__terrainSizeX(float_t value);

  constexpr void __cordl_internal_set__terrainSizeY(float_t value);

  constexpr void __cordl_internal_set__tileIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2496e80, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_LoadBufferVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_LoadBufferVolume(HEU_LoadBufferVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_LoadBufferVolume(HEU_LoadBufferVolume const&) = delete;

  /// @brief Field _tileIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____tileIndex;

  /// @brief Field _splatLayers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* ____splatLayers;

  /// @brief Field _heightMapWidth, offset: 0x40, size: 0x4, def value: None
  int32_t ____heightMapWidth;

  /// @brief Field _heightMapHeight, offset: 0x44, size: 0x4, def value: None
  int32_t ____heightMapHeight;

  /// @brief Field _heightMap, offset: 0x48, size: 0x8, def value: None
  Il2CppObject* ____heightMap;

  /// @brief Field _splatMaps, offset: 0x50, size: 0x8, def value: None
  Il2CppObject* ____splatMaps;

  /// @brief Field _terrainSizeX, offset: 0x58, size: 0x4, def value: None
  float_t ____terrainSizeX;

  /// @brief Field _terrainSizeY, offset: 0x5c, size: 0x4, def value: None
  float_t ____terrainSizeY;

  /// @brief Field _heightRange, offset: 0x60, size: 0x4, def value: None
  float_t ____heightRange;

  /// @brief Field _position, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _terrainDataPath, offset: 0x70, size: 0x8, def value: None
  ::StringW ____terrainDataPath;

  /// @brief Field _terrainDataExportPath, offset: 0x78, size: 0x8, def value: None
  ::StringW ____terrainDataExportPath;

  /// @brief Field _scatterTrees, offset: 0x80, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_VolumeScatterTrees* ____scatterTrees;

  /// @brief Field _detailPrototypes, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* ____detailPrototypes;

  /// @brief Field _detailMaps, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<Il2CppObject*>* ____detailMaps;

  /// @brief Field _detailProperties, offset: 0x98, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_DetailProperties* ____detailProperties;

  /// @brief Field _specifiedTerrainMaterialName, offset: 0xa0, size: 0x8, def value: None
  ::StringW ____specifiedTerrainMaterialName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferVolume, 0xa8>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____tileIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____splatLayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____heightMapWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____heightMapHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____heightMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____splatMaps) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____terrainSizeX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____terrainSizeY) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____heightRange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____position) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____terrainDataPath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____terrainDataExportPath) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____scatterTrees) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____detailPrototypes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____detailMaps) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____detailProperties) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolume, ____specifiedTerrainMaterialName) == 0xa0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferVolume);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferVolume*, "HoudiniEngineUnity", "HEU_LoadBufferVolume");
