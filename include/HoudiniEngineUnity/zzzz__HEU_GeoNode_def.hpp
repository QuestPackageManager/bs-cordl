#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeoNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GeoNode)
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCache;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeoNode);
// Type: HoudiniEngineUnity::HEU_GeoNode
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_GeoNode*
class CORDL_TYPE HEU_GeoNode : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_Displayable)) bool Displayable;

  __declspec(property(get = get_Editable)) bool Editable;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_GeoName)) ::StringW GeoName;

  __declspec(property(get = get_GeoType)) ::HoudiniEngineUnity::HAPI_GeoType GeoType;

  __declspec(property(get = get_ObjectNode)) ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> ObjectNode;

  __declspec(property(get = get_ParentAsset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ParentAsset;

  __declspec(property(get = get_VolumeCaches)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* VolumeCaches;

  /// @brief Field _containerObjectNode, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__containerObjectNode, put = __cordl_internal_set__containerObjectNode)) ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> _containerObjectNode;

  /// @brief Field _geoCurve, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__geoCurve, put = __cordl_internal_set__geoCurve)) ::UnityW<::HoudiniEngineUnity::HEU_Curve> _geoCurve;

  /// @brief Field _geoInfo, offset 0x18, size 0x24
  __declspec(property(get = __cordl_internal_get__geoInfo, put = __cordl_internal_set__geoInfo)) ::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo;

  /// @brief Field _geoName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__geoName, put = __cordl_internal_set__geoName)) ::StringW _geoName;

  /// @brief Field _inputNode, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__inputNode, put = __cordl_internal_set__inputNode)) ::UnityW<::HoudiniEngineUnity::HEU_InputNode> _inputNode;

  /// @brief Field _parts, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__parts, put = __cordl_internal_set__parts)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* _parts;

  /// @brief Field _volumeCache, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeCache, put = __cordl_internal_set__volumeCache)) ::UnityW<::HoudiniEngineUnity::HEU_VolumeCache> _volumeCache;

  /// @brief Field _volumeCaches, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeCaches,
                      put = __cordl_internal_set__volumeCaches)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* _volumeCaches;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method ApplyHAPITransform, addr 0x39bb278, size 0x154, virtual false, abstract: false, final false
  inline void ApplyHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform);

  /// @brief Method CalculateColliderState, addr 0x39bc714, size 0x9c, virtual false, abstract: false, final false
  inline void CalculateColliderState();

  /// @brief Method CalculateVisiblity, addr 0x39bc568, size 0x10c, virtual false, abstract: false, final false
  inline void CalculateVisiblity(bool bParentVisibility);

  /// @brief Method ClearObjectInstances, addr 0x39bb054, size 0x98, virtual false, abstract: false, final false
  inline void ClearObjectInstances();

  /// @brief Method DestroyAllData, addr 0x39b8e5c, size 0x1ac, virtual false, abstract: false, final false
  inline void DestroyAllData(bool bIsRebuild);

  /// @brief Method DestroyVolumeCache, addr 0x39b90b8, size 0x160, virtual false, abstract: false, final false
  inline void DestroyVolumeCache();

  /// @brief Method DisableAllColliders, addr 0x39bc7b0, size 0xa0, virtual false, abstract: false, final false
  inline void DisableAllColliders();

  /// @brief Method DoesThisRequirePotentialCook, addr 0x39b93ac, size 0x60, virtual false, abstract: false, final false
  inline bool DoesThisRequirePotentialCook();

  /// @brief Method GenerateAttributesStore, addr 0x39badd8, size 0xa4, virtual false, abstract: false, final false
  inline void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateGeoCurveName, addr 0x39bb188, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GenerateGeoCurveName();

  /// @brief Method GeneratePartFullName, addr 0x39baa80, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW GeneratePartFullName(::StringW partName);

  /// @brief Method GeneratePartInstances, addr 0x39bacf0, size 0xe8, virtual false, abstract: false, final false
  inline void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetClonableParts, addr 0x39bb8e8, size 0x154, virtual false, abstract: false, final false
  inline void GetClonableParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* clonableParts);

  /// @brief Method GetCurves, addr 0x39bbf48, size 0x2bc, virtual false, abstract: false, final false
  inline void GetCurves(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* curves, bool bEditableOnly);

  /// @brief Method GetDebugInfo, addr 0x39bb3cc, size 0x3ac, virtual false, abstract: false, final false
  inline void GetDebugInfo(::System::Text::StringBuilder* sb);

  /// @brief Method GetHDAPartWithGameObject, addr 0x39bbce4, size 0x198, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> GetHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetOutput, addr 0x39bbb90, size 0x154, virtual false, abstract: false, final false
  inline void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);

  /// @brief Method GetOutputGameObjects, addr 0x39bba3c, size 0x154, virtual false, abstract: false, final false
  inline void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method GetPartFromPartID, addr 0x39bbe7c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> GetPartFromPartID(int32_t partID);

  /// @brief Method GetParts, addr 0x39bc204, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* GetParts();

  /// @brief Method GetPartsByOutputType, addr 0x39bab58, size 0x198, virtual false, abstract: false, final false
  inline void GetPartsByOutputType(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* meshParts,
                                   ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* volumeParts);

  /// @brief Method GetVolumeCacheByTileIndex, addr 0x39bced0, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_VolumeCache> GetVolumeCacheByTileIndex(int32_t tileIndex);

  /// @brief Method HasAttribInstancer, addr 0x39bc20c, size 0x158, virtual false, abstract: false, final false
  inline bool HasAttribInstancer();

  /// @brief Method HasGeoNodeChanged, addr 0x39bb190, size 0xe8, virtual false, abstract: false, final false
  inline bool HasGeoNodeChanged(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method HideAllGeometry, addr 0x39bc674, size 0xa0, virtual false, abstract: false, final false
  inline void HideAllGeometry();

  /// @brief Method Initialize, addr 0x39b927c, size 0x130, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo, ::HoudiniEngineUnity::HEU_ObjectNode* containerObjectNode);

  /// @brief Method IsEquivalentTo, addr 0x39bd154, size 0x288, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeoNode* other);

  /// @brief Method IsGeoCurveType, addr 0x39b8bbc, size 0x10, virtual false, abstract: false, final false
  inline bool IsGeoCurveType();

  /// @brief Method IsGeoInputType, addr 0x39b8b9c, size 0x20, virtual false, abstract: false, final false
  inline bool IsGeoInputType();

  /// @brief Method IsIntermediate, addr 0x39b8b5c, size 0x10, virtual false, abstract: false, final false
  inline bool IsIntermediate();

  /// @brief Method IsIntermediateOrEditable, addr 0x39b8b6c, size 0x30, virtual false, abstract: false, final false
  inline bool IsIntermediateOrEditable();

  /// @brief Method IsUsingMaterial, addr 0x39bb778, size 0x170, virtual false, abstract: false, final false
  inline bool IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData);

  /// @brief Method IsVisible, addr 0x39b8b40, size 0x1c, virtual false, abstract: false, final false
  inline bool IsVisible();

  static inline ::HoudiniEngineUnity::HEU_GeoNode* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x39b8d24, size 0x138, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x39b8d20, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method ProcessGeoCurve, addr 0x39b9a3c, size 0x1b4, virtual false, abstract: false, final false
  inline void ProcessGeoCurve(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ProcessPart, addr 0x39b9bf0, size 0x93c, virtual false, abstract: false, final false
  inline void ProcessPart(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, ByRef<::HoudiniEngineUnity::HEU_PartData*> partData);

  /// @brief Method ProcessUnityScriptAttribute, addr 0x39ba52c, size 0x208, virtual false, abstract: false, final false
  inline void ProcessUnityScriptAttribute(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ProcessVolumeParts, addr 0x39bc850, size 0x680, virtual false, abstract: false, final false
  inline void ProcessVolumeParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* volumeParts, bool bRebuild);

  /// @brief Method RemoveAndDestroyPart, addr 0x39b9218, size 0x64, virtual false, abstract: false, final false
  inline void RemoveAndDestroyPart(::HoudiniEngineUnity::HEU_PartData* part);

  /// @brief Method Reset, addr 0x39b8c78, size 0xa8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetAttributeModifiersOnPartOutputs, addr 0x39bc364, size 0x204, virtual false, abstract: false, final false
  inline void SetAttributeModifiersOnPartOutputs(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SetGeoInfo, addr 0x39bb0ec, size 0x9c, virtual false, abstract: false, final false
  inline void SetGeoInfo(::HoudiniEngineUnity::HAPI_GeoInfo geoInfo);

  /// @brief Method SetupGameObjectAndTransform, addr 0x39ba804, size 0x27c, virtual false, abstract: false, final false
  inline void SetupGameObjectAndTransform(::HoudiniEngineUnity::HEU_PartData* partData, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method SetupGeoCurveGameObjectAndTransform, addr 0x39bae7c, size 0x1d8, virtual false, abstract: false, final false
  inline void SetupGeoCurveGameObjectAndTransform(::HoudiniEngineUnity::HEU_Curve* curve);

  /// @brief Method ToString, addr 0x39bd0e4, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateGeo, addr 0x39b940c, size 0x630, virtual false, abstract: false, final false
  inline void UpdateGeo(::HoudiniEngineUnity::HEU_SessionBase* session);

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> const& __cordl_internal_get__containerObjectNode() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>& __cordl_internal_get__containerObjectNode();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Curve> const& __cordl_internal_get__geoCurve() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Curve>& __cordl_internal_get__geoCurve();

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& __cordl_internal_get__geoInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& __cordl_internal_get__geoInfo();

  constexpr ::StringW const& __cordl_internal_get__geoName() const;

  constexpr ::StringW& __cordl_internal_get__geoName();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_InputNode> const& __cordl_internal_get__inputNode() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_InputNode>& __cordl_internal_get__inputNode();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*& __cordl_internal_get__parts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*> const& __cordl_internal_get__parts() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_VolumeCache> const& __cordl_internal_get__volumeCache() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>& __cordl_internal_get__volumeCache();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>*& __cordl_internal_get__volumeCaches();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>*> const& __cordl_internal_get__volumeCaches() const;

  constexpr void __cordl_internal_set__containerObjectNode(::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> value);

  constexpr void __cordl_internal_set__geoCurve(::UnityW<::HoudiniEngineUnity::HEU_Curve> value);

  constexpr void __cordl_internal_set__geoInfo(::HoudiniEngineUnity::HAPI_GeoInfo value);

  constexpr void __cordl_internal_set__geoName(::StringW value);

  constexpr void __cordl_internal_set__inputNode(::UnityW<::HoudiniEngineUnity::HEU_InputNode> value);

  constexpr void __cordl_internal_set__parts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* value);

  constexpr void __cordl_internal_set__volumeCache(::UnityW<::HoudiniEngineUnity::HEU_VolumeCache> value);

  constexpr void __cordl_internal_set__volumeCaches(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* value);

  /// @brief Method .ctor, addr 0x39b8c5c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Displayable, addr 0x39b8b38, size 0x8, virtual false, abstract: false, final false
  inline bool get_Displayable();

  /// @brief Method get_Editable, addr 0x39b8b30, size 0x8, virtual false, abstract: false, final false
  inline bool get_Editable();

  /// @brief Method get_GeoID, addr 0x39ae1ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GeoID();

  /// @brief Method get_GeoName, addr 0x39b8b20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GeoName();

  /// @brief Method get_GeoType, addr 0x39b8b28, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_GeoType get_GeoType();

  /// @brief Method get_ObjectNode, addr 0x39b8bcc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> get_ObjectNode();

  /// @brief Method get_ParentAsset, addr 0x39b8bd4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> get_ParentAsset();

  /// @brief Method get_VolumeCaches, addr 0x39b8c54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* get_VolumeCaches();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_GeoNode__() noexcept;

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeoNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeoNode(HEU_GeoNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeoNode(HEU_GeoNode const&) = delete;

  /// @brief Field _geoInfo, offset: 0x18, size: 0x24, def value: None
  ::HoudiniEngineUnity::HAPI_GeoInfo ____geoInfo;

  /// @brief Field _geoName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____geoName;

  /// @brief Field _parts, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* ____parts;

  /// @brief Field _containerObjectNode, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> ____containerObjectNode;

  /// @brief Field _inputNode, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_InputNode> ____inputNode;

  /// @brief Field _geoCurve, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_Curve> ____geoCurve;

  /// @brief Field _volumeCache, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_VolumeCache> ____volumeCache;

  /// @brief Field _volumeCaches, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* ____volumeCaches;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11578 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeoNode, 0x78>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____geoInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____geoName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____parts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____containerObjectNode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____inputNode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____geoCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____volumeCache) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoNode, ____volumeCaches) == 0x70, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoNode*, "HoudiniEngineUnity", "HEU_GeoNode");
