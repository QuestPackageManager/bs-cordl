#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AttributesStore)
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
namespace HoudiniEngineUnity {
class HEU_AttributeData;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeType;
}
namespace HoudiniEngineUnity {
class __HEU_AttributesStore__SetAttributeValueFunc;
}
namespace HoudiniEngineUnity {
struct __HEU_ToolsInfo__PaintMergeMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AttributesStore;
}
namespace HoudiniEngineUnity {
class __HEU_AttributesStore__SetAttributeValueFunc;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AttributesStore);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc);
// Type: ::SetAttributeValueFunc
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9664))
// CS Name: ::HEU_AttributesStore::SetAttributeValueFunc*
class CORDL_TYPE __HEU_AttributesStore__SetAttributeValueFunc : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2183800, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x21838d8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor);

  /// @brief Method BeginInvoke, addr 0x21838ec, size 0xe0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                             float_t factor, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x21839cc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AttributesStore__SetAttributeValueFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_AttributesStore__SetAttributeValueFunc(__HEU_AttributesStore__SetAttributeValueFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AttributesStore__SetAttributeValueFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_AttributesStore__SetAttributeValueFunc(__HEU_AttributesStore__SetAttributeValueFunc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AttributesStore__SetAttributeValueFunc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AttributesStore
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 146, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9665))
// CS Name: ::HoudiniEngineUnity::HEU_AttributesStore*
class CORDL_TYPE HEU_AttributesStore : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using SetAttributeValueFunc = ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc;

  /// @brief Field _geoID, offset 0x18, size 0x4
  __declspec(property(get = __get__geoID, put = __set__geoID)) int32_t _geoID;

  /// @brief Field _partID, offset 0x1c, size 0x4
  __declspec(property(get = __get__partID, put = __set__partID)) int32_t _partID;

  /// @brief Field _geoName, offset 0x20, size 0x8
  __declspec(property(get = __get__geoName, put = __set__geoName))::StringW _geoName;

  /// @brief Field _attributeDatas, offset 0x28, size 0x8
  __declspec(property(get = __get__attributeDatas, put = __set__attributeDatas))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* _attributeDatas;

  /// @brief Field _hasColorAttribute, offset 0x30, size 0x1
  __declspec(property(get = __get__hasColorAttribute, put = __set__hasColorAttribute)) bool _hasColorAttribute;

  /// @brief Field _localMaterial, offset 0x38, size 0x8
  __declspec(property(get = __get__localMaterial, put = __set__localMaterial))::UnityEngine::Material* _localMaterial;

  /// @brief Field _outputTransform, offset 0x40, size 0x8
  __declspec(property(get = __get__outputTransform, put = __set__outputTransform))::UnityEngine::Transform* _outputTransform;

  /// @brief Field _positionAttributeValues, offset 0x48, size 0x8
  __declspec(property(get = __get__positionAttributeValues, put = __set__positionAttributeValues))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _positionAttributeValues;

  /// @brief Field _vertexIndices, offset 0x50, size 0x8
  __declspec(property(get = __get__vertexIndices, put = __set__vertexIndices))::ArrayW<int32_t, ::Array<int32_t>*> _vertexIndices;

  /// @brief Field _outputGameObject, offset 0x58, size 0x8
  __declspec(property(get = __get__outputGameObject, put = __set__outputGameObject))::UnityEngine::GameObject* _outputGameObject;

  /// @brief Field _outputMesh, offset 0x60, size 0x8
  __declspec(property(get = __get__outputMesh, put = __set__outputMesh))::UnityEngine::Mesh* _outputMesh;

  /// @brief Field _outputMaterials, offset 0x68, size 0x8
  __declspec(property(get = __get__outputMaterials, put = __set__outputMaterials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> _outputMaterials;

  /// @brief Field _outputCollider, offset 0x70, size 0x8
  __declspec(property(get = __get__outputCollider, put = __set__outputCollider))::UnityEngine::MeshCollider* _outputCollider;

  /// @brief Field _outputColliderMesh, offset 0x78, size 0x8
  __declspec(property(get = __get__outputColliderMesh, put = __set__outputColliderMesh))::UnityEngine::Mesh* _outputColliderMesh;

  /// @brief Field _outputMeshCollider, offset 0x80, size 0x8
  __declspec(property(get = __get__outputMeshCollider, put = __set__outputMeshCollider))::UnityEngine::MeshCollider* _outputMeshCollider;

  /// @brief Field _localMeshCollider, offset 0x88, size 0x8
  __declspec(property(get = __get__localMeshCollider, put = __set__localMeshCollider))::UnityEngine::MeshCollider* _localMeshCollider;

  /// @brief Field _outputMeshRendererInitiallyEnabled, offset 0x90, size 0x1
  __declspec(property(get = __get__outputMeshRendererInitiallyEnabled, put = __set__outputMeshRendererInitiallyEnabled)) bool _outputMeshRendererInitiallyEnabled;

  /// @brief Field _outputMeshColliderInitiallyEnabled, offset 0x91, size 0x1
  __declspec(property(get = __get__outputMeshColliderInitiallyEnabled, put = __set__outputMeshColliderInitiallyEnabled)) bool _outputMeshColliderInitiallyEnabled;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_PartID)) int32_t PartID;

  __declspec(property(get = get_GeoName))::StringW GeoName;

  __declspec(property(get = get_OutputTransform))::UnityEngine::Transform* OutputTransform;

  __declspec(property(get = get_OutputMesh))::UnityEngine::Mesh* OutputMesh;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributesStore*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributesStore*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributesStore*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributesStore*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_AttributesStore__() noexcept;

  constexpr int32_t& __get__geoID();

  constexpr int32_t const& __get__geoID() const;

  constexpr void __set__geoID(int32_t value);

  constexpr int32_t& __get__partID();

  constexpr int32_t const& __get__partID() const;

  constexpr void __set__partID(int32_t value);

  constexpr ::StringW& __get__geoName();

  constexpr ::StringW const& __get__geoName() const;

  constexpr void __set__geoName(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*& __get__attributeDatas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*> const& __get__attributeDatas() const;

  constexpr void __set__attributeDatas(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* value);

  constexpr bool& __get__hasColorAttribute();

  constexpr bool const& __get__hasColorAttribute() const;

  constexpr void __set__hasColorAttribute(bool value);

  constexpr ::UnityEngine::Material*& __get__localMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__localMaterial() const;

  constexpr void __set__localMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Transform*& __get__outputTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__outputTransform() const;

  constexpr void __set__outputTransform(::UnityEngine::Transform* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__positionAttributeValues();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__positionAttributeValues() const;

  constexpr void __set__positionAttributeValues(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__vertexIndices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__vertexIndices() const;

  constexpr void __set__vertexIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::UnityEngine::GameObject*& __get__outputGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__outputGameObject() const;

  constexpr void __set__outputGameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::Mesh*& __get__outputMesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__outputMesh() const;

  constexpr void __set__outputMesh(::UnityEngine::Mesh* value);

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& __get__outputMaterials();

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& __get__outputMaterials() const;

  constexpr void __set__outputMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  constexpr ::UnityEngine::MeshCollider*& __get__outputCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> const& __get__outputCollider() const;

  constexpr void __set__outputCollider(::UnityEngine::MeshCollider* value);

  constexpr ::UnityEngine::Mesh*& __get__outputColliderMesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__outputColliderMesh() const;

  constexpr void __set__outputColliderMesh(::UnityEngine::Mesh* value);

  constexpr ::UnityEngine::MeshCollider*& __get__outputMeshCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> const& __get__outputMeshCollider() const;

  constexpr void __set__outputMeshCollider(::UnityEngine::MeshCollider* value);

  constexpr ::UnityEngine::MeshCollider*& __get__localMeshCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> const& __get__localMeshCollider() const;

  constexpr void __set__localMeshCollider(::UnityEngine::MeshCollider* value);

  constexpr bool& __get__outputMeshRendererInitiallyEnabled();

  constexpr bool const& __get__outputMeshRendererInitiallyEnabled() const;

  constexpr void __set__outputMeshRendererInitiallyEnabled(bool value);

  constexpr bool& __get__outputMeshColliderInitiallyEnabled();

  constexpr bool const& __get__outputMeshColliderInitiallyEnabled() const;

  constexpr void __set__outputMeshColliderInitiallyEnabled(bool value);

  /// @brief Method get_GeoID, addr 0x217fc88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GeoID();

  /// @brief Method get_PartID, addr 0x217fc90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PartID();

  /// @brief Method get_GeoName, addr 0x217fc98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GeoName();

  /// @brief Method HasColorAttribute, addr 0x217fca0, size 0x8, virtual false, abstract: false, final false
  inline bool HasColorAttribute();

  /// @brief Method get_OutputTransform, addr 0x217fca8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_OutputTransform();

  /// @brief Method get_OutputMesh, addr 0x217fcb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh* get_OutputMesh();

  /// @brief Method DestroyAllData, addr 0x217e964, size 0xcc, virtual false, abstract: false, final false
  inline void DestroyAllData(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method SyncAllAttributesFrom, addr 0x217df28, size 0x698, virtual false, abstract: false, final false
  inline void SyncAllAttributesFrom(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* asset, int32_t geoID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo,
                                    ::UnityEngine::GameObject* outputGameObject);

  /// @brief Method SetupMeshAndMaterials, addr 0x217e5c0, size 0x3a4, virtual false, abstract: false, final false
  inline void SetupMeshAndMaterials(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HAPI_PartType partType, ::UnityEngine::GameObject* outputGameObject);

  /// @brief Method HasDirtyAttributes, addr 0x2180658, size 0x184, virtual false, abstract: false, final false
  inline bool HasDirtyAttributes();

  /// @brief Method SyncDirtyAttributesToHoudini, addr 0x21807dc, size 0x6c, virtual false, abstract: false, final false
  inline void SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method PopulateAttributeData, addr 0x217fefc, size 0x75c, virtual false, abstract: false, final false
  inline void PopulateAttributeData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_AttributeData* attributeData,
                                    ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo);

  /// @brief Method GetAttributesList, addr 0x2180d5c, size 0x268, virtual false, abstract: false, final false
  inline void GetAttributesList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributesList, ::HoudiniEngineUnity::HAPI_AttributeOwner ownerType,
                                int32_t attributeCount);

  /// @brief Method UpdateAttribute, addr 0x2180fc4, size 0x4bc, virtual false, abstract: false, final false
  inline void UpdateAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_AttributeData* attributeData);

  /// @brief Method UpdateAttributeList, addr 0x2181480, size 0x154, virtual false, abstract: false, final false
  inline void UpdateAttributeList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributeDataList);

  /// @brief Method RefreshUpstreamInputs, addr 0x21815d4, size 0x78, virtual false, abstract: false, final false
  inline void RefreshUpstreamInputs(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadAttributeViaMeshInput, addr 0x2180848, size 0x4f8, virtual false, abstract: false, final false
  inline bool UploadAttributeViaMeshInput(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID);

  /// @brief Method SetAttributeDataSyncd, addr 0x2180d40, size 0x1c, virtual false, abstract: false, final false
  static inline void SetAttributeDataSyncd(::HoudiniEngineUnity::HEU_AttributeData* attributeData);

  /// @brief Method SetAttributeDataDirty, addr 0x218164c, size 0x1c, virtual false, abstract: false, final false
  static inline void SetAttributeDataDirty(::HoudiniEngineUnity::HEU_AttributeData* attributeData);

  /// @brief Method CreateAttribute, addr 0x217fe48, size 0xb4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_AttributeData* CreateAttribute(::StringW attributeName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo);

  /// @brief Method GetAttributeData, addr 0x217fcb8, size 0x190, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData(::StringW name);

  /// @brief Method GetAttributeData, addr 0x2181668, size 0x84, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData(int32_t index);

  /// @brief Method GetAttributeNames, addr 0x21816ec, size 0x204, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetAttributeNames();

  /// @brief Method EnablePaintCollider, addr 0x21818f0, size 0x1a4, virtual false, abstract: false, final false
  inline void EnablePaintCollider();

  /// @brief Method DisablePaintCollider, addr 0x2181a94, size 0x118, virtual false, abstract: false, final false
  inline void DisablePaintCollider();

  /// @brief Method ShowPaintMesh, addr 0x2181bac, size 0x124, virtual false, abstract: false, final false
  inline void ShowPaintMesh();

  /// @brief Method HidePaintMesh, addr 0x2181cd0, size 0xe8, virtual false, abstract: false, final false
  inline void HidePaintMesh();

  /// @brief Method HasMeshForPainting, addr 0x2181db8, size 0x60, virtual false, abstract: false, final false
  inline bool HasMeshForPainting();

  /// @brief Method GetPaintMeshCollider, addr 0x2181e18, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshCollider* GetPaintMeshCollider();

  /// @brief Method PaintAttribute, addr 0x2181e90, size 0x54, virtual false, abstract: false, final false
  inline void PaintAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t attributeIndex, float_t paintFactor,
                             ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc* setAttrFunc);

  /// @brief Method SetAttributeEditValueInt, addr 0x2181ee4, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAttributeEditValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetAttributeEditValueFloat, addr 0x2181f50, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAttributeEditValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetAttributeEditValueString, addr 0x2181fbc, size 0xdc, virtual false, abstract: false, final false
  static inline void SetAttributeEditValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method ReplaceAttributeValueInt, addr 0x2182098, size 0x1e4, virtual false, abstract: false, final false
  static inline void ReplaceAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                              float_t factor);

  /// @brief Method AddAttributeValueInt, addr 0x218227c, size 0x1b4, virtual false, abstract: false, final false
  static inline void AddAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                          float_t factor);

  /// @brief Method SubtractAttributeValueInt, addr 0x2182430, size 0x1b4, virtual false, abstract: false, final false
  static inline void SubtractAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                               float_t factor);

  /// @brief Method MultiplyAttributeValueInt, addr 0x21825e4, size 0x1e8, virtual false, abstract: false, final false
  static inline void MultiplyAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                               float_t factor);

  /// @brief Method ReplaceAttributeValueFloat, addr 0x21827cc, size 0xa8, virtual false, abstract: false, final false
  static inline void ReplaceAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                                float_t factor);

  /// @brief Method AddAttributeValueFloat, addr 0x2182874, size 0xa0, virtual false, abstract: false, final false
  static inline void AddAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                            float_t factor);

  /// @brief Method SubtractAttributeValueFloat, addr 0x2182914, size 0xa0, virtual false, abstract: false, final false
  static inline void SubtractAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                                 float_t factor);

  /// @brief Method MultiplyAttributeValueFloat, addr 0x21829b4, size 0xb8, virtual false, abstract: false, final false
  static inline void MultiplyAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                                 float_t factor);

  /// @brief Method SetAttributeValueString, addr 0x2182a6c, size 0xdc, virtual false, abstract: false, final false
  static inline void SetAttributeValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                             float_t factor);

  /// @brief Method FillAttribute, addr 0x2182b48, size 0xa0, virtual false, abstract: false, final false
  inline void FillAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools);

  /// @brief Method AreAttributesDirty, addr 0x2182df4, size 0x174, virtual false, abstract: false, final false
  inline bool AreAttributesDirty();

  /// @brief Method GetPositionAttributeValues, addr 0x2182f68, size 0xc, virtual false, abstract: false, final false
  inline void GetPositionAttributeValues(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> positionArray);

  /// @brief Method GetVertexIndices, addr 0x2182f74, size 0xc, virtual false, abstract: false, final false
  inline void GetVertexIndices(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices);

  /// @brief Method GetAttributeSetValueFunction, addr 0x2182be8, size 0x20c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc* GetAttributeSetValueFunction(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType attrType,
                                                                                                                 ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode paintMergeMode);

  /// @brief Method CopyAttributeValuesTo, addr 0x2182f80, size 0x1d8, virtual false, abstract: false, final false
  inline void CopyAttributeValuesTo(::HoudiniEngineUnity::HEU_AttributesStore* destAttrStore);

  /// @brief Method IsValidStore, addr 0x2183158, size 0x64, virtual false, abstract: false, final false
  inline bool IsValidStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method IsEquivalentTo, addr 0x21831bc, size 0x578, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributesStore* other);

  static inline ::HoudiniEngineUnity::HEU_AttributesStore* New_ctor();

  /// @brief Method .ctor, addr 0x2183734, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AttributesStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AttributesStore(HEU_AttributesStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AttributesStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AttributesStore(HEU_AttributesStore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AttributesStore();

public:
  /// @brief Field _geoID, offset: 0x18, size: 0x4, def value: None
  int32_t ____geoID;

  /// @brief Field _partID, offset: 0x1c, size: 0x4, def value: None
  int32_t ____partID;

  /// @brief Field _geoName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____geoName;

  /// @brief Field _attributeDatas, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* ____attributeDatas;

  /// @brief Field _hasColorAttribute, offset: 0x30, size: 0x1, def value: None
  bool ____hasColorAttribute;

  /// @brief Field _localMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Material* ____localMaterial;

  /// @brief Field _outputTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____outputTransform;

  /// @brief Field _positionAttributeValues, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____positionAttributeValues;

  /// @brief Field _vertexIndices, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____vertexIndices;

  /// @brief Field _outputGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____outputGameObject;

  /// @brief Field _outputMesh, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____outputMesh;

  /// @brief Field _outputMaterials, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> ____outputMaterials;

  /// @brief Field _outputCollider, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::MeshCollider* ____outputCollider;

  /// @brief Field _outputColliderMesh, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____outputColliderMesh;

  /// @brief Field _outputMeshCollider, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::MeshCollider* ____outputMeshCollider;

  /// @brief Field _localMeshCollider, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::MeshCollider* ____localMeshCollider;

  /// @brief Field _outputMeshRendererInitiallyEnabled, offset: 0x90, size: 0x1, def value: None
  bool ____outputMeshRendererInitiallyEnabled;

  /// @brief Field _outputMeshColliderInitiallyEnabled, offset: 0x91, size: 0x1, def value: None
  bool ____outputMeshColliderInitiallyEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AttributesStore, 0x98>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____geoID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____partID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____geoName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____attributeDatas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____hasColorAttribute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____localMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____positionAttributeValues) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____vertexIndices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputGameObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMaterials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputCollider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputColliderMesh) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMeshCollider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____localMeshCollider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMeshRendererInitiallyEnabled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMeshColliderInitiallyEnabled) == 0x91, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AttributesStore);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributesStore*, "HoudiniEngineUnity", "HEU_AttributesStore");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc*, "HoudiniEngineUnity", "HEU_AttributesStore/SetAttributeValueFunc");
