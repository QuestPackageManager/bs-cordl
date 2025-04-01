#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ObjectNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
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
// Dependencies HoudiniEngineUnity.HAPI_ObjectInfo, HoudiniEngineUnity.HAPI_Transform, HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.ScriptableObject
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ObjectNode
class CORDL_TYPE HEU_ObjectNode : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_ObjectName)) ::StringW ObjectName;

  __declspec(property(get = get_ParentAsset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ParentAsset;

  /// @brief Field _geoNodes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__geoNodes, put = __cordl_internal_set__geoNodes)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* _geoNodes;

  /// @brief Field _objName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__objName, put = __cordl_internal_set__objName)) ::StringW _objName;

  /// @brief Field _objectInfo, offset 0x28, size 0x1c
  __declspec(property(get = __cordl_internal_get__objectInfo, put = __cordl_internal_set__objectInfo)) ::HoudiniEngineUnity::HAPI_ObjectInfo _objectInfo;

  /// @brief Field _objectTransform, offset 0x50, size 0x28
  __declspec(property(get = __cordl_internal_get__objectTransform, put = __cordl_internal_set__objectTransform)) ::HoudiniEngineUnity::HAPI_Transform _objectTransform;

  /// @brief Field _parentAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parentAsset, put = __cordl_internal_set__parentAsset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _parentAsset;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>*() noexcept;

  /// @brief Method ApplyObjectTransformToGeoNodes, addr 0x3a26678, size 0x154, virtual false, abstract: false, final false
  inline void ApplyObjectTransformToGeoNodes();

  /// @brief Method CalculateColliderState, addr 0x3a29d48, size 0x14c, virtual false, abstract: false, final false
  inline void CalculateColliderState();

  /// @brief Method CalculateVisibility, addr 0x3a29bf8, size 0x150, virtual false, abstract: false, final false
  inline void CalculateVisibility();

  /// @brief Method ClearObjectInstances, addr 0x3a29334, size 0x184, virtual false, abstract: false, final false
  inline void ClearObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method CreateGeoNode, addr 0x3a24c88, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> CreateGeoNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo);

  /// @brief Method DestroyAllData, addr 0x3a24d3c, size 0x100, virtual false, abstract: false, final false
  inline void DestroyAllData(bool bIsRebuild);

  /// @brief Method DisableAllColliders, addr 0x3a29e94, size 0x14c, virtual false, abstract: false, final false
  inline void DisableAllColliders();

  /// @brief Method GenerateAttributesStore, addr 0x3a269ec, size 0x154, virtual false, abstract: false, final false
  inline void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateGeometry, addr 0x3a25b50, size 0x714, virtual false, abstract: false, final false
  inline void GenerateGeometry(::HoudiniEngineUnity::HEU_SessionBase* session, bool bRebuild);

  /// @brief Method GenerateObjectInstances, addr 0x3a276f0, size 0x48c, virtual false, abstract: false, final false
  inline void GenerateObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GeneratePartInstances, addr 0x3a26898, size 0x154, virtual false, abstract: false, final false
  inline void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetClonableParts, addr 0x3a26cb0, size 0x164, virtual false, abstract: false, final false
  inline void GetClonableParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* clonableParts);

  /// @brief Method GetCurves, addr 0x3a273bc, size 0x158, virtual false, abstract: false, final false
  inline void GetCurves(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* curves, bool bEditableOnly);

  /// @brief Method GetDebugInfo, addr 0x3a24e3c, size 0x2bc, virtual false, abstract: false, final false
  inline void GetDebugInfo(::System::Text::StringBuilder* sb);

  /// @brief Method GetGeoNode, addr 0x3a27254, size 0x168, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> GetGeoNode(::StringW geoName);

  /// @brief Method GetHDAPartWithGameObject, addr 0x3a270bc, size 0x198, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> GetHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetOutput, addr 0x3a26f68, size 0x154, virtual false, abstract: false, final false
  inline void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);

  /// @brief Method GetOutputGameObjects, addr 0x3a26e14, size 0x154, virtual false, abstract: false, final false
  inline void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method GetOutputGeoNodes, addr 0x3a27514, size 0x1dc, virtual false, abstract: false, final false
  inline void GetOutputGeoNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* outGeoNodes);

  /// @brief Method HideAllGeometry, addr 0x3a29aac, size 0x14c, virtual false, abstract: false, final false
  inline void HideAllGeometry();

  /// @brief Method Initialize, addr 0x3a24864, size 0x424, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_ObjectInfo objectInfo, ::HoudiniEngineUnity::HAPI_Transform objectTranform,
                         ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method IsEquivalentTo, addr 0x3a2a050, size 0x268, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectNode* other);

  /// @brief Method IsInstanced, addr 0x3a24684, size 0x8, virtual false, abstract: false, final false
  inline bool IsInstanced();

  /// @brief Method IsInstancer, addr 0x3a27b7c, size 0x180, virtual false, abstract: false, final false
  inline bool IsInstancer();

  /// @brief Method IsUsingMaterial, addr 0x3a26b40, size 0x170, virtual false, abstract: false, final false
  inline bool IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData);

  /// @brief Method IsVisible, addr 0x3a2468c, size 0x8, virtual false, abstract: false, final false
  inline bool IsVisible();

  static inline ::HoudiniEngineUnity::HEU_ObjectNode* New_ctor();

  /// @brief Method PopulateObjectInstanceInfos, addr 0x3a297c8, size 0x138, virtual false, abstract: false, final false
  inline void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* objInstanceInfos);

  /// @brief Method ProcessUnityScriptAttributes, addr 0x3a29958, size 0x154, virtual false, abstract: false, final false
  inline void ProcessUnityScriptAttributes(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method Reset, addr 0x3a246b0, size 0xd0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetObjectInfo, addr 0x3a250f8, size 0x1c, virtual false, abstract: false, final false
  inline void SetObjectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo newObjectInfo);

  /// @brief Method SyncWithObjectInfo, addr 0x3a24780, size 0xe4, virtual false, abstract: false, final false
  inline void SyncWithObjectInfo(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ToString, addr 0x3a29fe0, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateObject, addr 0x3a25114, size 0xa3c, virtual false, abstract: false, final false
  inline void UpdateObject(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* const& __cordl_internal_get__geoNodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>*& __cordl_internal_get__geoNodes();

  constexpr ::StringW const& __cordl_internal_get__objName() const;

  constexpr ::StringW& __cordl_internal_get__objName();

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo const& __cordl_internal_get__objectInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo& __cordl_internal_get__objectInfo();

  constexpr ::HoudiniEngineUnity::HAPI_Transform const& __cordl_internal_get__objectTransform() const;

  constexpr ::HoudiniEngineUnity::HAPI_Transform& __cordl_internal_get__objectTransform();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__parentAsset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__parentAsset();

  constexpr void __cordl_internal_set__geoNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* value);

  constexpr void __cordl_internal_set__objName(::StringW value);

  constexpr void __cordl_internal_set__objectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo value);

  constexpr void __cordl_internal_set__objectTransform(::HoudiniEngineUnity::HAPI_Transform value);

  constexpr void __cordl_internal_set__parentAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  /// @brief Method .ctor, addr 0x3a24694, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ObjectID, addr 0x3a2466c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_ObjectName, addr 0x3a24674, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectName();

  /// @brief Method get_ParentAsset, addr 0x3a2467c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> get_ParentAsset();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_ObjectNode__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ObjectNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ObjectNode(HEU_ObjectNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ObjectNode(HEU_ObjectNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11641 };

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
static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____objName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____parentAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____objectInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____geoNodes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectNode, ____objectTransform) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ObjectNode, 0x78>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ObjectNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ObjectNode*, "HoudiniEngineUnity", "HEU_ObjectNode");
