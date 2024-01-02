#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeCache)
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
class HEU_VolumeLayer;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class TerrainData;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeCache;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeCache);
// Type: HoudiniEngineUnity::HEU_VolumeCache
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9957))
// CS Name: ::HoudiniEngineUnity::HEU_VolumeCache*
class CORDL_TYPE HEU_VolumeCache : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _ownerNode, offset 0x18, size 0x8
  __declspec(property(get = __get__ownerNode, put = __set__ownerNode))::HoudiniEngineUnity::HEU_GeoNode* _ownerNode;

  /// @brief Field _layers, offset 0x20, size 0x8
  __declspec(property(get = __get__layers, put = __set__layers))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* _layers;

  /// @brief Field _updatedLayers, offset 0x28, size 0x8
  __declspec(property(get = __get__updatedLayers, put = __set__updatedLayers))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* _updatedLayers;

  /// @brief Field _tileIndex, offset 0x30, size 0x4
  __declspec(property(get = __get__tileIndex, put = __set__tileIndex)) int32_t _tileIndex;

  /// @brief Field _isDirty, offset 0x34, size 0x1
  __declspec(property(get = __get__isDirty, put = __set__isDirty)) bool _isDirty;

  /// @brief Field _geoName, offset 0x38, size 0x8
  __declspec(property(get = __get__geoName, put = __set__geoName))::StringW _geoName;

  /// @brief Field _objName, offset 0x40, size 0x8
  __declspec(property(get = __get__objName, put = __set__objName))::StringW _objName;

  /// @brief Field _uiExpanded, offset 0x48, size 0x1
  __declspec(property(get = __get__uiExpanded, put = __set__uiExpanded)) bool _uiExpanded;

  /// @brief Field _terrainData, offset 0x50, size 0x8
  __declspec(property(get = __get__terrainData, put = __set__terrainData))::UnityEngine::TerrainData* _terrainData;

  /// @brief Field _scatterTrees, offset 0x58, size 0x8
  __declspec(property(get = __get__scatterTrees, put = __set__scatterTrees))::HoudiniEngineUnity::HEU_VolumeScatterTrees* _scatterTrees;

  /// @brief Field _detailProperties, offset 0x60, size 0x8
  __declspec(property(get = __get__detailProperties, put = __set__detailProperties))::HoudiniEngineUnity::HEU_DetailProperties* _detailProperties;

  __declspec(property(get = get_IsDirty, put = set_IsDirty)) bool IsDirty;

  __declspec(property(get = get_TileIndex)) int32_t TileIndex;

  __declspec(property(get = get_ObjectName))::StringW ObjectName;

  __declspec(property(get = get_GeoName))::StringW GeoName;

  __declspec(property(get = get_UIExpanded, put = set_UIExpanded)) bool UIExpanded;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeCache*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeCache*>*() noexcept;

  constexpr ::HoudiniEngineUnity::HEU_GeoNode*& __get__ownerNode();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeoNode*> const& __get__ownerNode() const;

  constexpr void __set__ownerNode(::HoudiniEngineUnity::HEU_GeoNode* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*& __get__layers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*> const& __get__layers() const;

  constexpr void __set__layers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*& __get__updatedLayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*> const& __get__updatedLayers() const;

  constexpr void __set__updatedLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* value);

  constexpr int32_t& __get__tileIndex();

  constexpr int32_t const& __get__tileIndex() const;

  constexpr void __set__tileIndex(int32_t value);

  constexpr bool& __get__isDirty();

  constexpr bool const& __get__isDirty() const;

  constexpr void __set__isDirty(bool value);

  constexpr ::StringW& __get__geoName();

  constexpr ::StringW const& __get__geoName() const;

  constexpr void __set__geoName(::StringW value);

  constexpr ::StringW& __get__objName();

  constexpr ::StringW const& __get__objName() const;

  constexpr void __set__objName(::StringW value);

  constexpr bool& __get__uiExpanded();

  constexpr bool const& __get__uiExpanded() const;

  constexpr void __set__uiExpanded(bool value);

  constexpr ::UnityEngine::TerrainData*& __get__terrainData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainData*> const& __get__terrainData() const;

  constexpr void __set__terrainData(::UnityEngine::TerrainData* value);

  constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees*& __get__scatterTrees();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_VolumeScatterTrees*> const& __get__scatterTrees() const;

  constexpr void __set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees* value);

  constexpr ::HoudiniEngineUnity::HEU_DetailProperties*& __get__detailProperties();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailProperties*> const& __get__detailProperties() const;

  constexpr void __set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties* value);

  /// @brief Method get_IsDirty, addr 0x21ea9fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDirty();

  /// @brief Method set_IsDirty, addr 0x21eaa04, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDirty(bool value);

  /// @brief Method get_TileIndex, addr 0x21eaa10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TileIndex();

  /// @brief Method get_ObjectName, addr 0x21eaa18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectName();

  /// @brief Method get_GeoName, addr 0x21eaa20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GeoName();

  /// @brief Method get_UIExpanded, addr 0x21eaa28, size 0x8, virtual false, abstract: false, final false
  inline bool get_UIExpanded();

  /// @brief Method set_UIExpanded, addr 0x21eaa30, size 0xc, virtual false, abstract: false, final false
  inline void set_UIExpanded(bool value);

  /// @brief Method UpdateVolumeCachesFromParts, addr 0x21eaa3c, size 0x8dc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*
  UpdateVolumeCachesFromParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoNode* ownerNode,
                              ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* volumeParts,
                              ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* volumeCaches);

  /// @brief Method Initialize, addr 0x21eb76c, size 0x3c, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_GeoNode* ownerNode, int32_t tileIndex);

  /// @brief Method ResetParameters, addr 0x21eb7b4, size 0x17c, virtual false, abstract: false, final false
  inline void ResetParameters();

  /// @brief Method GetLayer, addr 0x21eb9e8, size 0x190, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_VolumeLayer* GetLayer(::StringW layerName);

  /// @brief Method StartUpdateLayers, addr 0x21eb318, size 0x74, virtual false, abstract: false, final false
  inline void StartUpdateLayers();

  /// @brief Method FinishUpdateLayers, addr 0x21eb7a8, size 0xc, virtual false, abstract: false, final false
  inline void FinishUpdateLayers();

  /// @brief Method GetPartLayerAttributes, addr 0x21ebb78, size 0x15c, virtual false, abstract: false, final false
  inline void GetPartLayerAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer);

  /// @brief Method LoadLayerTextureFromAttribute, addr 0x21ebcd4, size 0xf8, virtual false, abstract: false, final false
  inline bool LoadLayerTextureFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::UnityEngine::Texture2D*> outTexture);

  /// @brief Method LoadLayerFloatFromAttribute, addr 0x21ebecc, size 0x134, virtual false, abstract: false, final false
  inline bool LoadLayerFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<float_t> floatValue);

  /// @brief Method LoadLayerColorFromAttribute, addr 0x21ec000, size 0x16c, virtual false, abstract: false, final false
  inline bool LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::UnityEngine::Color> colorValue);

  /// @brief Method LoadLayerVector2FromAttribute, addr 0x21ec16c, size 0x144, virtual false, abstract: false, final false
  inline bool LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::UnityEngine::Vector2> vectorValue);

  /// @brief Method UpdateLayerFromPart, addr 0x21eb38c, size 0x3e0, virtual false, abstract: false, final false
  inline void UpdateLayerFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_PartData* part);

  /// @brief Method GenerateTerrainWithAlphamaps, addr 0x21ec2b0, size 0x17cc, virtual false, abstract: false, final false
  inline void GenerateTerrainWithAlphamaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset, bool bRebuild);

  /// @brief Method LoadLayerPropertiesFromAttributes, addr 0x21edddc, size 0x408, virtual false, abstract: false, final false
  inline void LoadLayerPropertiesFromAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::UnityEngine::TerrainLayer* terrainLayer, bool bNewTerrainLayer,
                                                ::UnityEngine::Texture2D* defaultTexture);

  /// @brief Method PopulateScatterTrees, addr 0x21ee1e4, size 0x24, virtual false, abstract: false, final false
  inline void PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, int32_t pointCount, bool throwWarningIfNoTileAttribute);

  /// @brief Method PopulateDetailPrototype, addr 0x21ee208, size 0x28, virtual false, abstract: false, final false
  inline void PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer);

  /// @brief Method PopulatePreset, addr 0x21ee230, size 0x2bc, virtual false, abstract: false, final false
  inline void PopulatePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* cachePreset);

  /// @brief Method ApplyPreset, addr 0x21eda7c, size 0x2d8, virtual false, abstract: false, final false
  inline bool ApplyPreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* volumeCachePreset);

  /// @brief Method CopyValuesTo, addr 0x21ee4ec, size 0x244, virtual false, abstract: false, final false
  inline void CopyValuesTo(::HoudiniEngineUnity::HEU_VolumeCache* destCache);

  /// @brief Method CopyDetailProperties, addr 0x21ee730, size 0x28, virtual false, abstract: false, final false
  static inline void CopyDetailProperties(::HoudiniEngineUnity::HEU_DetailProperties* srcProp, ::HoudiniEngineUnity::HEU_DetailProperties* destProp);

  /// @brief Method CopyLayer, addr 0x21eb930, size 0xb8, virtual false, abstract: false, final false
  static inline void CopyLayer(::HoudiniEngineUnity::HEU_VolumeLayer* srcLayer, ::HoudiniEngineUnity::HEU_VolumeLayer* destLayer);

  /// @brief Method CopyPrototype, addr 0x21ee758, size 0x48, virtual false, abstract: false, final false
  static inline void CopyPrototype(::HoudiniEngineUnity::HEU_DetailPrototype* srcProto, ::HoudiniEngineUnity::HEU_DetailPrototype* destProto);

  /// @brief Method LoadDefaultSplatTexture, addr 0x21edd54, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* LoadDefaultSplatTexture();

  /// @brief Method LoadAssetTexture, addr 0x21ebdcc, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* LoadAssetTexture(::StringW path);

  /// @brief Method IsEquivalentTo, addr 0x21ee7a0, size 0x31c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeCache* other);

  static inline ::HoudiniEngineUnity::HEU_VolumeCache* New_ctor();

  /// @brief Method .ctor, addr 0x21eeabc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VolumeCache(HEU_VolumeCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VolumeCache(HEU_VolumeCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VolumeCache();

public:
  /// @brief Field _ownerNode, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_GeoNode* ____ownerNode;

  /// @brief Field _layers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* ____layers;

  /// @brief Field _updatedLayers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* ____updatedLayers;

  /// @brief Field _tileIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____tileIndex;

  /// @brief Field _isDirty, offset: 0x34, size: 0x1, def value: None
  bool ____isDirty;

  /// @brief Field _geoName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____geoName;

  /// @brief Field _objName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____objName;

  /// @brief Field _uiExpanded, offset: 0x48, size: 0x1, def value: None
  bool ____uiExpanded;

  /// @brief Field _terrainData, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::TerrainData* ____terrainData;

  /// @brief Field _scatterTrees, offset: 0x58, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_VolumeScatterTrees* ____scatterTrees;

  /// @brief Field _detailProperties, offset: 0x60, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_DetailProperties* ____detailProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeCache, 0x68>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____ownerNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____layers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____updatedLayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____tileIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____isDirty) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____geoName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____objName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____uiExpanded) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____terrainData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____scatterTrees) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCache, ____detailProperties) == 0x60, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeCache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeCache*, "HoudiniEngineUnity", "HEU_VolumeCache");
