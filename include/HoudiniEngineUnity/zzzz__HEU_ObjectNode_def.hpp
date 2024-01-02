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
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210)), TypeDefinitionIndex(TypeDefinitionIndex(9738)), TypeDefinitionIndex(TypeDefinitionIndex(9726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9654))
// CS Name: ::HoudiniEngineUnity::HEU_ObjectNode*
class CORDL_TYPE HEU_ObjectNode : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _objName, offset 0x18, size 0x8
  __declspec(property(get = __get__objName, put = __set__objName))::StringW _objName;

  /// @brief Field _parentAsset, offset 0x20, size 0x8
  __declspec(property(get = __get__parentAsset, put = __set__parentAsset))::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset;

  /// @brief Field _objectInfo, offset 0x28, size 0x1c
  __declspec(property(get = __get__objectInfo, put = __set__objectInfo))::HoudiniEngineUnity::HAPI_ObjectInfo _objectInfo;

  /// @brief Field _geoNodes, offset 0x48, size 0x8
  __declspec(property(get = __get__geoNodes, put = __set__geoNodes))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* _geoNodes;

  /// @brief Field _objectTransform, offset 0x50, size 0x28
  __declspec(property(get = __get__objectTransform, put = __set__objectTransform))::HoudiniEngineUnity::HAPI_Transform _objectTransform;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_ObjectName))::StringW ObjectName;

  __declspec(property(get = get_ParentAsset))::HoudiniEngineUnity::HEU_HoudiniAsset* ParentAsset;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectNode*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectNode*>*() noexcept;

  constexpr ::StringW& __get__objName();

  constexpr ::StringW const& __get__objName() const;

  constexpr void __set__objName(::StringW value);

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& __get__parentAsset();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& __get__parentAsset() const;

  constexpr void __set__parentAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* value);

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo& __get__objectInfo();

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo const& __get__objectInfo() const;

  constexpr void __set__objectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*& __get__geoNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*> const& __get__geoNodes() const;

  constexpr void __set__geoNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* value);

  constexpr ::HoudiniEngineUnity::HAPI_Transform& __get__objectTransform();

  constexpr ::HoudiniEngineUnity::HAPI_Transform const& __get__objectTransform() const;

  constexpr void __set__objectTransform(::HoudiniEngineUnity::HAPI_Transform value);

  /// @brief Method get_ObjectID, addr 0x2172ad0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_ObjectName, addr 0x2172ad8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectName();

  /// @brief Method get_ParentAsset, addr 0x2172ae0, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset();

  /// @brief Method IsInstanced, addr 0x2172ae8, size 0x8, virtual false, abstract: false, final false
  inline bool IsInstanced();

  /// @brief Method IsVisible, addr 0x2172af0, size 0x8, virtual false, abstract: false, final false
  inline bool IsVisible();

  static inline ::HoudiniEngineUnity::HEU_ObjectNode* New_ctor();

  /// @brief Method .ctor, addr 0x2172af8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Reset, addr 0x2172b14, size 0xd8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SyncWithObjectInfo, addr 0x2172bec, size 0xe8, virtual false, abstract: false, final false
  inline void SyncWithObjectInfo(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method Initialize, addr 0x2172cd4, size 0x430, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_ObjectInfo objectInfo, ::HoudiniEngineUnity::HAPI_Transform objectTranform,
                         ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method DestroyAllData, addr 0x21731b8, size 0x100, virtual false, abstract: false, final false
  /// @param bIsRebuild: bool (default: false)
  inline void DestroyAllData(bool bIsRebuild = false);

  /// @brief Method CreateGeoNode, addr 0x2173104, size 0xb4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_GeoNode* CreateGeoNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo);

  /// @brief Method GetDebugInfo, addr 0x21732b8, size 0x2bc, virtual false, abstract: false, final false
  inline void GetDebugInfo(::System::Text::StringBuilder* sb);

  /// @brief Method SetObjectInfo, addr 0x2173574, size 0x1c, virtual false, abstract: false, final false
  inline void SetObjectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo newObjectInfo);

  /// @brief Method UpdateObject, addr 0x2173590, size 0x9f8, virtual false, abstract: false, final false
  inline void UpdateObject(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate);

  /// @brief Method GenerateGeometry, addr 0x2173f88, size 0x714, virtual false, abstract: false, final false
  inline void GenerateGeometry(::HoudiniEngineUnity::HEU_SessionBase* session, bool bRebuild);

  /// @brief Method GeneratePartInstances, addr 0x2174cd4, size 0x154, virtual false, abstract: false, final false
  inline void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateAttributesStore, addr 0x2174e28, size 0x154, virtual false, abstract: false, final false
  inline void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ApplyObjectTransformToGeoNodes, addr 0x2174ab4, size 0x154, virtual false, abstract: false, final false
  inline void ApplyObjectTransformToGeoNodes();

  /// @brief Method IsUsingMaterial, addr 0x2174f7c, size 0x180, virtual false, abstract: false, final false
  inline bool IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData);

  /// @brief Method GetClonableParts, addr 0x21750fc, size 0x164, virtual false, abstract: false, final false
  inline void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* clonableParts);

  /// @brief Method GetOutputGameObjects, addr 0x2175260, size 0x154, virtual false, abstract: false, final false
  inline void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects);

  /// @brief Method GetOutput, addr 0x21753b4, size 0x154, virtual false, abstract: false, final false
  inline void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);

  /// @brief Method GetHDAPartWithGameObject, addr 0x2175508, size 0x1ac, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetGeoNode, addr 0x21756b4, size 0x190, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_GeoNode* GetGeoNode(::StringW geoName);

  /// @brief Method GetCurves, addr 0x2175844, size 0x158, virtual false, abstract: false, final false
  inline void GetCurves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* curves, bool bEditableOnly);

  /// @brief Method GetOutputGeoNodes, addr 0x217599c, size 0x1e0, virtual false, abstract: false, final false
  inline void GetOutputGeoNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* outGeoNodes);

  /// @brief Method GenerateObjectInstances, addr 0x2175b7c, size 0x48c, virtual false, abstract: false, final false
  inline void GenerateObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ClearObjectInstances, addr 0x2177800, size 0x184, virtual false, abstract: false, final false
  inline void ClearObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method PopulateObjectInstanceInfos, addr 0x2177c94, size 0x138, virtual false, abstract: false, final false
  inline void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* objInstanceInfos);

  /// @brief Method ProcessUnityScriptAttributes, addr 0x2177e24, size 0x154, virtual false, abstract: false, final false
  inline void ProcessUnityScriptAttributes(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method HideAllGeometry, addr 0x2177f78, size 0x14c, virtual false, abstract: false, final false
  inline void HideAllGeometry();

  /// @brief Method CalculateVisibility, addr 0x21780c4, size 0x150, virtual false, abstract: false, final false
  inline void CalculateVisibility();

  /// @brief Method CalculateColliderState, addr 0x2178214, size 0x14c, virtual false, abstract: false, final false
  inline void CalculateColliderState();

  /// @brief Method DisableAllColliders, addr 0x2178360, size 0x14c, virtual false, abstract: false, final false
  inline void DisableAllColliders();

  /// @brief Method IsInstancer, addr 0x2176008, size 0x184, virtual false, abstract: false, final false
  inline bool IsInstancer();

  /// @brief Method ToString, addr 0x21784ac, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method IsEquivalentTo, addr 0x217851c, size 0x280, virtual true, abstract: false, final true
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
  ::HoudiniEngineUnity::HEU_HoudiniAsset* ____parentAsset;

  /// @brief Field _objectInfo, offset: 0x28, size: 0x1c, def value: None
  ::HoudiniEngineUnity::HAPI_ObjectInfo ____objectInfo;

  /// @brief Field _geoNodes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* ____geoNodes;

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
