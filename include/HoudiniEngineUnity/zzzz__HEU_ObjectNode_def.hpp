#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ObjectNode)
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
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
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
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
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ObjectNode);
// Type: HoudiniEngineUnity::HEU_ObjectNode
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8954)), TypeDefinitionIndex(TypeDefinitionIndex(9518)), TypeDefinitionIndex(TypeDefinitionIndex(9530))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9446))
// CS Name: ::HoudiniEngineUnity::HEU_ObjectNode*
class CORDL_TYPE HEU_ObjectNode : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _objName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__objName, put = __cordl_internal_set__objName))::StringW _objName;

  /// @brief Field _parentAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parentAsset, put = __cordl_internal_set__parentAsset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _parentAsset;

  /// @brief Field _objectInfo, offset 0x28, size 0x1c
  __declspec(property(get = __cordl_internal_get__objectInfo, put = __cordl_internal_set__objectInfo))::HoudiniEngineUnity::HAPI_ObjectInfo _objectInfo;

  /// @brief Field _geoNodes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__geoNodes, put = __cordl_internal_set__geoNodes))::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* _geoNodes;

  /// @brief Field _objectTransform, offset 0x50, size 0x28
  __declspec(property(get = __cordl_internal_get__objectTransform, put = __cordl_internal_set__objectTransform))::HoudiniEngineUnity::HAPI_Transform _objectTransform;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_ObjectName))::StringW ObjectName;

  __declspec(property(get = get_ParentAsset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ParentAsset;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_ObjectNode__() noexcept;

  constexpr ::StringW& __cordl_internal_get__objName();

  constexpr ::StringW const& __cordl_internal_get__objName() const;

  constexpr void __cordl_internal_set__objName(::StringW value);

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__parentAsset();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__parentAsset() const;

  constexpr void __cordl_internal_set__parentAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo& __cordl_internal_get__objectInfo();

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo const& __cordl_internal_get__objectInfo() const;

  constexpr void __cordl_internal_set__objectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>*& __cordl_internal_get__geoNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>*> const& __cordl_internal_get__geoNodes() const;

  constexpr void __cordl_internal_set__geoNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* value);

  constexpr ::HoudiniEngineUnity::HAPI_Transform& __cordl_internal_get__objectTransform();

  constexpr ::HoudiniEngineUnity::HAPI_Transform const& __cordl_internal_get__objectTransform() const;

  constexpr void __cordl_internal_set__objectTransform(::HoudiniEngineUnity::HAPI_Transform value);

  /// @brief Method get_ObjectID, addr 0x22073b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_ObjectName, addr 0x22073bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectName();

  /// @brief Method get_ParentAsset, addr 0x22073c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> get_ParentAsset();

  /// @brief Method IsInstanced, addr 0x22073cc, size 0x8, virtual false, abstract: false, final false
  inline bool IsInstanced();

  /// @brief Method IsVisible, addr 0x22073d4, size 0x8, virtual false, abstract: false, final false
  inline bool IsVisible();

  static inline ::HoudiniEngineUnity::HEU_ObjectNode* New_ctor();

  /// @brief Method .ctor, addr 0x22073dc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Reset, addr 0x22073f8, size 0xd8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SyncWithObjectInfo, addr 0x22074d0, size 0xe8, virtual false, abstract: false, final false
  inline void SyncWithObjectInfo(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method Initialize, addr 0x22075b8, size 0x430, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_ObjectInfo objectInfo, ::HoudiniEngineUnity::HAPI_Transform objectTranform,
                         ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method DestroyAllData, addr 0x2207a9c, size 0x100, virtual false, abstract: false, final false
  inline void DestroyAllData(bool bIsRebuild);

  /// @brief Method CreateGeoNode, addr 0x22079e8, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> CreateGeoNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo);

  /// @brief Method GetDebugInfo, addr 0x2207b9c, size 0x2bc, virtual false, abstract: false, final false
  inline void GetDebugInfo(::System::Text::StringBuilder* sb);

  /// @brief Method SetObjectInfo, addr 0x2207e58, size 0x1c, virtual false, abstract: false, final false
  inline void SetObjectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo newObjectInfo);

  /// @brief Method UpdateObject, addr 0x2207e74, size 0x9f8, virtual false, abstract: false, final false
  inline void UpdateObject(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate);

  /// @brief Method GenerateGeometry, addr 0x220886c, size 0x714, virtual false, abstract: false, final false
  inline void GenerateGeometry(::HoudiniEngineUnity::HEU_SessionBase* session, bool bRebuild);

  /// @brief Method GeneratePartInstances, addr 0x22095b8, size 0x154, virtual false, abstract: false, final false
  inline void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateAttributesStore, addr 0x220970c, size 0x154, virtual false, abstract: false, final false
  inline void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ApplyObjectTransformToGeoNodes, addr 0x2209398, size 0x154, virtual false, abstract: false, final false
  inline void ApplyObjectTransformToGeoNodes();

  /// @brief Method IsUsingMaterial, addr 0x2209860, size 0x180, virtual false, abstract: false, final false
  inline bool IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData);

  /// @brief Method GetClonableParts, addr 0x22099e0, size 0x164, virtual false, abstract: false, final false
  inline void GetClonableParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* clonableParts);

  /// @brief Method GetOutputGameObjects, addr 0x2209b44, size 0x154, virtual false, abstract: false, final false
  inline void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method GetOutput, addr 0x2209c98, size 0x154, virtual false, abstract: false, final false
  inline void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);

  /// @brief Method GetHDAPartWithGameObject, addr 0x2209dec, size 0x1ac, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> GetHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetGeoNode, addr 0x2209f98, size 0x190, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> GetGeoNode(::StringW geoName);

  /// @brief Method GetCurves, addr 0x220a128, size 0x158, virtual false, abstract: false, final false
  inline void GetCurves(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* curves, bool bEditableOnly);

  /// @brief Method GetOutputGeoNodes, addr 0x220a280, size 0x1e0, virtual false, abstract: false, final false
  inline void GetOutputGeoNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* outGeoNodes);

  /// @brief Method GenerateObjectInstances, addr 0x220a460, size 0x48c, virtual false, abstract: false, final false
  inline void GenerateObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ClearObjectInstances, addr 0x220c0e4, size 0x184, virtual false, abstract: false, final false
  inline void ClearObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method PopulateObjectInstanceInfos, addr 0x220c578, size 0x138, virtual false, abstract: false, final false
  inline void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* objInstanceInfos);

  /// @brief Method ProcessUnityScriptAttributes, addr 0x220c708, size 0x154, virtual false, abstract: false, final false
  inline void ProcessUnityScriptAttributes(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method HideAllGeometry, addr 0x220c85c, size 0x14c, virtual false, abstract: false, final false
  inline void HideAllGeometry();

  /// @brief Method CalculateVisibility, addr 0x220c9a8, size 0x150, virtual false, abstract: false, final false
  inline void CalculateVisibility();

  /// @brief Method CalculateColliderState, addr 0x220caf8, size 0x14c, virtual false, abstract: false, final false
  inline void CalculateColliderState();

  /// @brief Method DisableAllColliders, addr 0x220cc44, size 0x14c, virtual false, abstract: false, final false
  inline void DisableAllColliders();

  /// @brief Method IsInstancer, addr 0x220a8ec, size 0x184, virtual false, abstract: false, final false
  inline bool IsInstancer();

  /// @brief Method ToString, addr 0x220cd90, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method IsEquivalentTo, addr 0x220ce00, size 0x280, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectNode* other);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ObjectNode(HEU_ObjectNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ObjectNode(HEU_ObjectNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ObjectNode();

public:
  /// @brief Field _objName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____objName;

  /// @brief Field _parentAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ____parentAsset;

  /// @brief Field _objectInfo, offset: 0x28, size: 0x1c, def value: None
  ::HoudiniEngineUnity::HAPI_ObjectInfo ____objectInfo;

  /// @brief Field _geoNodes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* ____geoNodes;

  /// @brief Field _objectTransform, offset: 0x50, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_Transform ____objectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ObjectNode, 0x78>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____objName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____parentAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____objectInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____geoNodes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____objectTransform) == 0x50, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ObjectNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ObjectNode*, "HoudiniEngineUnity", "HEU_ObjectNode");
