#pragma once
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
class HEU_VolumeCache;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeoNode);
// Type: HoudiniEngineUnity::HEU_GeoNode
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9739)), TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9629))
// CS Name: ::HoudiniEngineUnity::HEU_GeoNode*
class CORDL_TYPE HEU_GeoNode : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _geoInfo, offset 0x18, size 0x24
  __declspec(property(get = __get__geoInfo, put = __set__geoInfo))::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo;

  /// @brief Field _geoName, offset 0x40, size 0x8
  __declspec(property(get = __get__geoName, put = __set__geoName))::StringW _geoName;

  /// @brief Field _parts, offset 0x48, size 0x8
  __declspec(property(get = __get__parts, put = __set__parts))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* _parts;

  /// @brief Field _containerObjectNode, offset 0x50, size 0x8
  __declspec(property(get = __get__containerObjectNode, put = __set__containerObjectNode))::HoudiniEngineUnity::HEU_ObjectNode* _containerObjectNode;

  /// @brief Field _inputNode, offset 0x58, size 0x8
  __declspec(property(get = __get__inputNode, put = __set__inputNode))::HoudiniEngineUnity::HEU_InputNode* _inputNode;

  /// @brief Field _geoCurve, offset 0x60, size 0x8
  __declspec(property(get = __get__geoCurve, put = __set__geoCurve))::HoudiniEngineUnity::HEU_Curve* _geoCurve;

  /// @brief Field _volumeCache, offset 0x68, size 0x8
  __declspec(property(get = __get__volumeCache, put = __set__volumeCache))::HoudiniEngineUnity::HEU_VolumeCache* _volumeCache;

  /// @brief Field _volumeCaches, offset 0x70, size 0x8
  __declspec(property(get = __get__volumeCaches, put = __set__volumeCaches))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* _volumeCaches;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_GeoName))::StringW GeoName;

  __declspec(property(get = get_GeoType))::HoudiniEngineUnity::HAPI_GeoType GeoType;

  __declspec(property(get = get_Editable)) bool Editable;

  __declspec(property(get = get_Displayable)) bool Displayable;

  __declspec(property(get = get_ObjectNode))::HoudiniEngineUnity::HEU_ObjectNode* ObjectNode;

  __declspec(property(get = get_ParentAsset))::HoudiniEngineUnity::HEU_HoudiniAsset* ParentAsset;

  __declspec(property(get = get_VolumeCaches))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* VolumeCaches;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeoNode*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeoNode*>*() noexcept;

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& __get__geoInfo();

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& __get__geoInfo() const;

  constexpr void __set__geoInfo(::HoudiniEngineUnity::HAPI_GeoInfo value);

  constexpr ::StringW& __get__geoName();

  constexpr ::StringW const& __get__geoName() const;

  constexpr void __set__geoName(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*& __get__parts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*> const& __get__parts() const;

  constexpr void __set__parts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* value);

  constexpr ::HoudiniEngineUnity::HEU_ObjectNode*& __get__containerObjectNode();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ObjectNode*> const& __get__containerObjectNode() const;

  constexpr void __set__containerObjectNode(::HoudiniEngineUnity::HEU_ObjectNode* value);

  constexpr ::HoudiniEngineUnity::HEU_InputNode*& __get__inputNode();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputNode*> const& __get__inputNode() const;

  constexpr void __set__inputNode(::HoudiniEngineUnity::HEU_InputNode* value);

  constexpr ::HoudiniEngineUnity::HEU_Curve*& __get__geoCurve();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_Curve*> const& __get__geoCurve() const;

  constexpr void __set__geoCurve(::HoudiniEngineUnity::HEU_Curve* value);

  constexpr ::HoudiniEngineUnity::HEU_VolumeCache*& __get__volumeCache();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_VolumeCache*> const& __get__volumeCache() const;

  constexpr void __set__volumeCache(::HoudiniEngineUnity::HEU_VolumeCache* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*& __get__volumeCaches();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*> const& __get__volumeCaches() const;

  constexpr void __set__volumeCaches(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* value);

  /// @brief Method get_GeoID addr 0x214cab0 size 0x8 virtual false final false
  inline int32_t get_GeoID();

  /// @brief Method get_GeoName addr 0x2157350 size 0x8 virtual false final false
  inline ::StringW get_GeoName();

  /// @brief Method get_GeoType addr 0x2157358 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HAPI_GeoType get_GeoType();

  /// @brief Method get_Editable addr 0x2157360 size 0x8 virtual false final false
  inline bool get_Editable();

  /// @brief Method get_Displayable addr 0x2157368 size 0x8 virtual false final false
  inline bool get_Displayable();

  /// @brief Method IsVisible addr 0x2157370 size 0x1c virtual false final false
  inline bool IsVisible();

  /// @brief Method IsIntermediate addr 0x215738c size 0x10 virtual false final false
  inline bool IsIntermediate();

  /// @brief Method IsIntermediateOrEditable addr 0x215739c size 0x30 virtual false final false
  inline bool IsIntermediateOrEditable();

  /// @brief Method IsGeoInputType addr 0x21573cc size 0x20 virtual false final false
  inline bool IsGeoInputType();

  /// @brief Method IsGeoCurveType addr 0x21573ec size 0x10 virtual false final false
  inline bool IsGeoCurveType();

  /// @brief Method get_ObjectNode addr 0x21573fc size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_ObjectNode* get_ObjectNode();

  /// @brief Method get_ParentAsset addr 0x2157404 size 0x80 virtual false final false
  inline ::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset();

  /// @brief Method get_VolumeCaches addr 0x2157484 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* get_VolumeCaches();

  static inline ::HoudiniEngineUnity::HEU_GeoNode* New_ctor();

  /// @brief Method .ctor addr 0x215748c size 0x1c virtual false final false
  inline void _ctor();

  /// @brief Method OnBeforeSerialize addr 0x2157558 size 0x4 virtual true final true
  inline void OnBeforeSerialize();

  /// @brief Method OnAfterDeserialize addr 0x215755c size 0x13c virtual true final true
  inline void OnAfterDeserialize();

  /// @brief Method DestroyAllData addr 0x2157698 size 0x1ac virtual false final false
  inline void DestroyAllData(bool bIsRebuild);

  /// @brief Method RemoveAndDestroyPart addr 0x2157a54 size 0x64 virtual false final false
  inline void RemoveAndDestroyPart(::HoudiniEngineUnity::HEU_PartData* part);

  /// @brief Method Reset addr 0x21574a8 size 0xb0 virtual false final false
  inline void Reset();

  /// @brief Method Initialize addr 0x2157ab8 size 0x134 virtual false final false
  inline void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo, ::HoudiniEngineUnity::HEU_ObjectNode* containerObjectNode);

  /// @brief Method DoesThisRequirePotentialCook addr 0x2157bec size 0x60 virtual false final false
  inline bool DoesThisRequirePotentialCook();

  /// @brief Method UpdateGeo addr 0x2157c4c size 0x628 virtual false final false
  inline void UpdateGeo(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ProcessUnityScriptAttribute addr 0x2158d48 size 0x1f8 virtual false final false
  inline void ProcessUnityScriptAttribute(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ProcessPart addr 0x2158438 size 0x910 virtual false final false
  inline void ProcessPart(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, ByRef<::HoudiniEngineUnity::HEU_PartData*> partData);

  /// @brief Method SetupGameObjectAndTransform addr 0x2159014 size 0x280 virtual false final false
  inline void SetupGameObjectAndTransform(::HoudiniEngineUnity::HEU_PartData* partData, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method GetPartsByOutputType addr 0x2159408 size 0x19c virtual false final false
  inline void GetPartsByOutputType(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* meshParts,
                                   ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* volumeParts);

  /// @brief Method GeneratePartInstances addr 0x21595a4 size 0xe8 virtual false final false
  inline void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateAttributesStore addr 0x215968c size 0xa4 virtual false final false
  inline void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ProcessGeoCurve addr 0x2158274 size 0x1c4 virtual false final false
  inline void ProcessGeoCurve(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SetupGeoCurveGameObjectAndTransform addr 0x2159730 size 0x1e0 virtual false final false
  inline void SetupGeoCurveGameObjectAndTransform(::HoudiniEngineUnity::HEU_Curve* curve);

  /// @brief Method ClearObjectInstances addr 0x2159910 size 0x98 virtual false final false
  inline void ClearObjectInstances();

  /// @brief Method SetGeoInfo addr 0x21599a8 size 0x9c virtual false final false
  inline void SetGeoInfo(::HoudiniEngineUnity::HAPI_GeoInfo geoInfo);

  /// @brief Method GeneratePartFullName addr 0x2159294 size 0x16c virtual false final false
  inline ::StringW GeneratePartFullName(::StringW partName);

  /// @brief Method GenerateGeoCurveName addr 0x2159a44 size 0x8 virtual false final false
  inline ::StringW GenerateGeoCurveName();

  /// @brief Method HasGeoNodeChanged addr 0x2159a4c size 0xe8 virtual false final false
  inline bool HasGeoNodeChanged(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ApplyHAPITransform addr 0x2159b34 size 0x154 virtual false final false
  inline void ApplyHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform);

  /// @brief Method GetDebugInfo addr 0x2159c88 size 0x3ac virtual false final false
  inline void GetDebugInfo(::System::Text::StringBuilder* sb);

  /// @brief Method IsUsingMaterial addr 0x215a034 size 0x180 virtual false final false
  inline bool IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData);

  /// @brief Method GetClonableParts addr 0x215a1b4 size 0x154 virtual false final false
  inline void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* clonableParts);

  /// @brief Method GetOutputGameObjects addr 0x215a308 size 0x154 virtual false final false
  inline void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects);

  /// @brief Method GetOutput addr 0x215a45c size 0x154 virtual false final false
  inline void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);

  /// @brief Method GetHDAPartWithGameObject addr 0x215a5b0 size 0x1ac virtual false final false
  inline ::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetPartFromPartID addr 0x215a75c size 0xcc virtual false final false
  inline ::HoudiniEngineUnity::HEU_PartData* GetPartFromPartID(int32_t partID);

  /// @brief Method GetCurves addr 0x215a828 size 0x2c4 virtual false final false
  inline void GetCurves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* curves, bool bEditableOnly);

  /// @brief Method GetParts addr 0x215aaec size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* GetParts();

  /// @brief Method HasAttribInstancer addr 0x215aaf4 size 0x170 virtual false final false
  inline bool HasAttribInstancer();

  /// @brief Method SetAttributeModifiersOnPartOutputs addr 0x215ac64 size 0x204 virtual false final false
  inline void SetAttributeModifiersOnPartOutputs(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method CalculateVisiblity addr 0x215ae68 size 0x10c virtual false final false
  inline void CalculateVisiblity(bool bParentVisibility);

  /// @brief Method HideAllGeometry addr 0x215af74 size 0xa0 virtual false final false
  inline void HideAllGeometry();

  /// @brief Method CalculateColliderState addr 0x215b014 size 0x9c virtual false final false
  inline void CalculateColliderState();

  /// @brief Method DisableAllColliders addr 0x215b0b0 size 0xa0 virtual false final false
  inline void DisableAllColliders();

  /// @brief Method ProcessVolumeParts addr 0x215b150 size 0x68c virtual false final false
  inline void ProcessVolumeParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* volumeParts, bool bRebuild);

  /// @brief Method GetVolumeCacheByTileIndex addr 0x215b7dc size 0x164 virtual false final false
  inline ::HoudiniEngineUnity::HEU_VolumeCache* GetVolumeCacheByTileIndex(int32_t tileIndex);

  /// @brief Method DestroyVolumeCache addr 0x21578f4 size 0x160 virtual false final false
  inline void DestroyVolumeCache();

  /// @brief Method ToString addr 0x215b9e8 size 0x70 virtual true final false
  inline ::StringW ToString();

  /// @brief Method IsEquivalentTo addr 0x215ba58 size 0x2a0 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeoNode* other);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeoNode(HEU_GeoNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeoNode(HEU_GeoNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeoNode();

public:
  /// @brief Field _geoInfo, offset: 0x18, size: 0x24, def value: None
  ::HoudiniEngineUnity::HAPI_GeoInfo ____geoInfo;

  /// @brief Field _geoName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____geoName;

  /// @brief Field _parts, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* ____parts;

  /// @brief Field _containerObjectNode, offset: 0x50, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_ObjectNode* ____containerObjectNode;

  /// @brief Field _inputNode, offset: 0x58, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_InputNode* ____inputNode;

  /// @brief Field _geoCurve, offset: 0x60, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_Curve* ____geoCurve;

  /// @brief Field _volumeCache, offset: 0x68, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_VolumeCache* ____volumeCache;

  /// @brief Field _volumeCaches, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* ____volumeCaches;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeoNode, 0x78>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoNode*, "HoudiniEngineUnity", "HEU_GeoNode");
