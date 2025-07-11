#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_VolumeCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeCache)
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace HoudiniEngineUnity {
class HEU_VolumeLayer;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeCache;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeCache);
// Dependencies HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.ScriptableObject
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_VolumeCache
class CORDL_TYPE HEU_VolumeCache : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_GeoName)) ::StringW GeoName;

  __declspec(property(get = get_IsDirty, put = set_IsDirty)) bool IsDirty;

  __declspec(property(get = get_ObjectName)) ::StringW ObjectName;

  __declspec(property(get = get_TileIndex)) int32_t TileIndex;

  __declspec(property(get = get_UIExpanded, put = set_UIExpanded)) bool UIExpanded;

  /// @brief Field _detailProperties, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__detailProperties, put = __cordl_internal_set__detailProperties)) ::HoudiniEngineUnity::HEU_DetailProperties* _detailProperties;

  /// @brief Field _geoName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__geoName, put = __cordl_internal_set__geoName)) ::StringW _geoName;

  /// @brief Field _isDirty, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty, put = __cordl_internal_set__isDirty)) bool _isDirty;

  /// @brief Field _layers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__layers, put = __cordl_internal_set__layers)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* _layers;

  /// @brief Field _objName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__objName, put = __cordl_internal_set__objName)) ::StringW _objName;

  /// @brief Field _ownerNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerNode, put = __cordl_internal_set__ownerNode)) ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> _ownerNode;

  /// @brief Field _scatterTrees, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__scatterTrees, put = __cordl_internal_set__scatterTrees)) ::HoudiniEngineUnity::HEU_VolumeScatterTrees* _scatterTrees;

  /// @brief Field _terrainData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__terrainData, put = __cordl_internal_set__terrainData)) ::UnityW<::UnityEngine::TerrainData> _terrainData;

  /// @brief Field _tileIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__tileIndex, put = __cordl_internal_set__tileIndex)) int32_t _tileIndex;

  /// @brief Field _uiExpanded, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__uiExpanded, put = __cordl_internal_set__uiExpanded)) bool _uiExpanded;

  /// @brief Field _updatedLayers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedLayers,
                      put = __cordl_internal_set__updatedLayers)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* _updatedLayers;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>*() noexcept;

  /// @brief Method ApplyPreset, addr 0x3aa1098, size 0x2d0, virtual false, abstract: false, final false
  inline bool ApplyPreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* volumeCachePreset);

  /// @brief Method CopyDetailProperties, addr 0x3aa1d34, size 0x28, virtual false, abstract: false, final false
  static inline void CopyDetailProperties(::HoudiniEngineUnity::HEU_DetailProperties* srcProp, ::HoudiniEngineUnity::HEU_DetailProperties* destProp);

  /// @brief Method CopyLayer, addr 0x3a9ef78, size 0xb4, virtual false, abstract: false, final false
  static inline void CopyLayer(::HoudiniEngineUnity::HEU_VolumeLayer* srcLayer, ::HoudiniEngineUnity::HEU_VolumeLayer* destLayer);

  /// @brief Method CopyPrototype, addr 0x3aa1d5c, size 0x48, virtual false, abstract: false, final false
  static inline void CopyPrototype(::HoudiniEngineUnity::HEU_DetailPrototype* srcProto, ::HoudiniEngineUnity::HEU_DetailPrototype* destProto);

  /// @brief Method CopyValuesTo, addr 0x3aa1af4, size 0x240, virtual false, abstract: false, final false
  inline void CopyValuesTo(::HoudiniEngineUnity::HEU_VolumeCache* destCache);

  /// @brief Method FinishUpdateLayers, addr 0x3a9edf4, size 0xc, virtual false, abstract: false, final false
  inline void FinishUpdateLayers();

  /// @brief Method GenerateTerrainWithAlphamaps, addr 0x3a9f8c0, size 0x17d8, virtual false, abstract: false, final false
  inline void GenerateTerrainWithAlphamaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset, bool bRebuild);

  /// @brief Method GetLayer, addr 0x3a9f02c, size 0x168, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_VolumeLayer* GetLayer(::StringW layerName);

  /// @brief Method GetPartLayerAttributes, addr 0x3a9f194, size 0x158, virtual false, abstract: false, final false
  inline void GetPartLayerAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer);

  /// @brief Method Initialize, addr 0x3a9edb8, size 0x3c, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_GeoNode* ownerNode, int32_t tileIndex);

  /// @brief Method IsEquivalentTo, addr 0x3aa1da4, size 0x304, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeCache* other);

  /// @brief Method LoadAssetTexture, addr 0x3a9f3e4, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> LoadAssetTexture(::StringW path);

  /// @brief Method LoadDefaultSplatTexture, addr 0x3aa1368, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> LoadDefaultSplatTexture();

  /// @brief Method LoadLayerColorFromAttribute, addr 0x3a9f614, size 0x16c, virtual false, abstract: false, final false
  inline bool LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::ByRef<::UnityEngine::Color> colorValue);

  /// @brief Method LoadLayerFloatFromAttribute, addr 0x3a9f4e4, size 0x130, virtual false, abstract: false, final false
  inline bool LoadLayerFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::ByRef<float_t> floatValue);

  /// @brief Method LoadLayerPropertiesFromAttributes, addr 0x3aa13f0, size 0x408, virtual false, abstract: false, final false
  inline void LoadLayerPropertiesFromAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::UnityEngine::TerrainLayer* terrainLayer, bool bNewTerrainLayer,
                                                ::UnityEngine::Texture2D* defaultTexture);

  /// @brief Method LoadLayerTextureFromAttribute, addr 0x3a9f2ec, size 0xf8, virtual false, abstract: false, final false
  inline bool LoadLayerTextureFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::ByRef<::UnityEngine::Texture2D*> outTexture);

  /// @brief Method LoadLayerVector2FromAttribute, addr 0x3a9f780, size 0x140, virtual false, abstract: false, final false
  inline bool LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::ByRef<::UnityEngine::Vector2> vectorValue);

  static inline ::HoudiniEngineUnity::HEU_VolumeCache* New_ctor();

  /// @brief Method PopulateDetailPrototype, addr 0x3aa181c, size 0x28, virtual false, abstract: false, final false
  inline void PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer);

  /// @brief Method PopulatePreset, addr 0x3aa1844, size 0x2b0, virtual false, abstract: false, final false
  inline void PopulatePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* cachePreset);

  /// @brief Method PopulateScatterTrees, addr 0x3aa17f8, size 0x24, virtual false, abstract: false, final false
  inline void PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, int32_t pointCount, bool throwWarningIfNoTileAttribute);

  /// @brief Method ResetParameters, addr 0x3a9ee00, size 0x178, virtual false, abstract: false, final false
  inline void ResetParameters();

  /// @brief Method StartUpdateLayers, addr 0x3a9e978, size 0x74, virtual false, abstract: false, final false
  inline void StartUpdateLayers();

  /// @brief Method UpdateLayerFromPart, addr 0x3a9e9ec, size 0x3cc, virtual false, abstract: false, final false
  inline void UpdateLayerFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_PartData* part);

  /// @brief Method UpdateVolumeCachesFromParts, addr 0x3a9e0a4, size 0x8d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>*
  UpdateVolumeCachesFromParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoNode* ownerNode,
                              ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* volumeParts,
                              ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* volumeCaches);

  constexpr ::HoudiniEngineUnity::HEU_DetailProperties* const& __cordl_internal_get__detailProperties() const;

  constexpr ::HoudiniEngineUnity::HEU_DetailProperties*& __cordl_internal_get__detailProperties();

  constexpr ::StringW const& __cordl_internal_get__geoName() const;

  constexpr ::StringW& __cordl_internal_get__geoName();

  constexpr bool const& __cordl_internal_get__isDirty() const;

  constexpr bool& __cordl_internal_get__isDirty();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* const& __cordl_internal_get__layers() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*& __cordl_internal_get__layers();

  constexpr ::StringW const& __cordl_internal_get__objName() const;

  constexpr ::StringW& __cordl_internal_get__objName();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> const& __cordl_internal_get__ownerNode() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_GeoNode>& __cordl_internal_get__ownerNode();

  constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees* const& __cordl_internal_get__scatterTrees() const;

  constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees*& __cordl_internal_get__scatterTrees();

  constexpr ::UnityW<::UnityEngine::TerrainData> const& __cordl_internal_get__terrainData() const;

  constexpr ::UnityW<::UnityEngine::TerrainData>& __cordl_internal_get__terrainData();

  constexpr int32_t const& __cordl_internal_get__tileIndex() const;

  constexpr int32_t& __cordl_internal_get__tileIndex();

  constexpr bool const& __cordl_internal_get__uiExpanded() const;

  constexpr bool& __cordl_internal_get__uiExpanded();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* const& __cordl_internal_get__updatedLayers() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*& __cordl_internal_get__updatedLayers();

  constexpr void __cordl_internal_set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties* value);

  constexpr void __cordl_internal_set__geoName(::StringW value);

  constexpr void __cordl_internal_set__isDirty(bool value);

  constexpr void __cordl_internal_set__layers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* value);

  constexpr void __cordl_internal_set__objName(::StringW value);

  constexpr void __cordl_internal_set__ownerNode(::UnityW<::HoudiniEngineUnity::HEU_GeoNode> value);

  constexpr void __cordl_internal_set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees* value);

  constexpr void __cordl_internal_set__terrainData(::UnityW<::UnityEngine::TerrainData> value);

  constexpr void __cordl_internal_set__tileIndex(int32_t value);

  constexpr void __cordl_internal_set__uiExpanded(bool value);

  constexpr void __cordl_internal_set__updatedLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* value);

  /// @brief Method .ctor, addr 0x3aa20a8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GeoName, addr 0x3a9e088, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GeoName();

  /// @brief Method get_IsDirty, addr 0x3a9e064, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDirty();

  /// @brief Method get_ObjectName, addr 0x3a9e080, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectName();

  /// @brief Method get_TileIndex, addr 0x3a9e078, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TileIndex();

  /// @brief Method get_UIExpanded, addr 0x3a9e090, size 0x8, virtual false, abstract: false, final false
  inline bool get_UIExpanded();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_VolumeCache__() noexcept;

  /// @brief Method set_IsDirty, addr 0x3a9e06c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDirty(bool value);

  /// @brief Method set_UIExpanded, addr 0x3a9e098, size 0xc, virtual false, abstract: false, final false
  inline void set_UIExpanded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VolumeCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VolumeCache(HEU_VolumeCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VolumeCache(HEU_VolumeCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11944 };

  /// @brief Field _ownerNode, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> ____ownerNode;

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
  ::UnityW<::UnityEngine::TerrainData> ____terrainData;

  /// @brief Field _scatterTrees, offset: 0x58, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_VolumeScatterTrees* ____scatterTrees;

  /// @brief Field _detailProperties, offset: 0x60, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_DetailProperties* ____detailProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeCache, 0x68>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeCache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeCache*, "HoudiniEngineUnity", "HEU_VolumeCache");
