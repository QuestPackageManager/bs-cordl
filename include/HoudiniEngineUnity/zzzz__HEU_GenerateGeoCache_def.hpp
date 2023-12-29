#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GenerateGeoCache)
namespace UnityEngine {
class Material;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
namespace HoudiniEngineUnity {
class __HEU_GenerateGeoCache__HEU_ColliderInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
class __HEU_GenerateGeoCache____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace HoudiniEngineUnity {
class HEU_MeshIndexFormat;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_UnityMaterialInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace GlobalNamespace {
struct __HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache;
}
namespace HoudiniEngineUnity {
class __HEU_GenerateGeoCache__HEU_ColliderInfo;
}
namespace HoudiniEngineUnity {
class __HEU_GenerateGeoCache____c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GenerateGeoCache);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_GenerateGeoCache____c);
// Type: ::ColliderType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9758))
// CS Name: ::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType
struct CORDL_TYPE __HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType_Unwrapped
  enum struct ____HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_BOX = static_cast<int32_t>(0x1),
    __E_SPHERE = static_cast<int32_t>(0x2),
    __E_MESH = static_cast<int32_t>(0x3),
    __E_SIMPLE_BOX = static_cast<int32_t>(0x4),
    __E_SIMPLE_SPHERE = static_cast<int32_t>(0x5),
    __E_SIMPLE_CAPSULE = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType_Unwrapped() const noexcept {
    return static_cast<____HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const NONE;

  /// @brief Field BOX value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const BOX;

  /// @brief Field SPHERE value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SPHERE;

  /// @brief Field MESH value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const MESH;

  /// @brief Field SIMPLE_BOX value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SIMPLE_BOX;

  /// @brief Field SIMPLE_SPHERE value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SIMPLE_SPHERE;

  /// @brief Field SIMPLE_CAPSULE value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SIMPLE_CAPSULE;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HEU_ColliderInfo
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 85, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9758)), TypeDefinitionIndex(TypeDefinitionIndex(10176)),
// TypeDefinitionIndex(TypeDefinitionIndex(10037))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9759)) CS Name: ::HEU_GenerateGeoCache::HEU_ColliderInfo*
class CORDL_TYPE __HEU_GenerateGeoCache__HEU_ColliderInfo : public ::System::Object {
public:
  // Declarations
  using ColliderType = ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType;

  /// @brief Field _colliderType, offset 0x10, size 0x4
  __declspec(property(get = __get__colliderType, put = __set__colliderType))::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType _colliderType;

  /// @brief Field _colliderCenter, offset 0x14, size 0xc
  __declspec(property(get = __get__colliderCenter, put = __set__colliderCenter))::UnityEngine::Vector3 _colliderCenter;

  /// @brief Field _colliderSize, offset 0x20, size 0xc
  __declspec(property(get = __get__colliderSize, put = __set__colliderSize))::UnityEngine::Vector3 _colliderSize;

  /// @brief Field _colliderRadius, offset 0x2c, size 0x4
  __declspec(property(get = __get__colliderRadius, put = __set__colliderRadius)) float_t _colliderRadius;

  /// @brief Field _convexCollider, offset 0x30, size 0x1
  __declspec(property(get = __get__convexCollider, put = __set__convexCollider)) bool _convexCollider;

  /// @brief Field _collisionGroupName, offset 0x38, size 0x8
  __declspec(property(get = __get__collisionGroupName, put = __set__collisionGroupName))::StringW _collisionGroupName;

  /// @brief Field _collisionVertices, offset 0x40, size 0x8
  __declspec(property(get = __get__collisionVertices, put = __set__collisionVertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _collisionVertices;

  /// @brief Field _collisionIndices, offset 0x48, size 0x8
  __declspec(property(get = __get__collisionIndices, put = __set__collisionIndices))::ArrayW<int32_t, ::Array<int32_t>*> _collisionIndices;

  /// @brief Field _meshTopology, offset 0x50, size 0x4
  __declspec(property(get = __get__meshTopology, put = __set__meshTopology))::UnityEngine::MeshTopology _meshTopology;

  /// @brief Field _isTrigger, offset 0x54, size 0x1
  __declspec(property(get = __get__isTrigger, put = __set__isTrigger)) bool _isTrigger;

  constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType& __get__colliderType();

  constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const& __get__colliderType() const;

  constexpr void __set__colliderType(::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType value);

  constexpr ::UnityEngine::Vector3& __get__colliderCenter();

  constexpr ::UnityEngine::Vector3 const& __get__colliderCenter() const;

  constexpr void __set__colliderCenter(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__colliderSize();

  constexpr ::UnityEngine::Vector3 const& __get__colliderSize() const;

  constexpr void __set__colliderSize(::UnityEngine::Vector3 value);

  constexpr float_t& __get__colliderRadius();

  constexpr float_t const& __get__colliderRadius() const;

  constexpr void __set__colliderRadius(float_t value);

  constexpr bool& __get__convexCollider();

  constexpr bool const& __get__convexCollider() const;

  constexpr void __set__convexCollider(bool value);

  constexpr ::StringW& __get__collisionGroupName();

  constexpr ::StringW const& __get__collisionGroupName() const;

  constexpr void __set__collisionGroupName(::StringW value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__collisionVertices();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__collisionVertices() const;

  constexpr void __set__collisionVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__collisionIndices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__collisionIndices() const;

  constexpr void __set__collisionIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::UnityEngine::MeshTopology& __get__meshTopology();

  constexpr ::UnityEngine::MeshTopology const& __get__meshTopology() const;

  constexpr void __set__meshTopology(::UnityEngine::MeshTopology value);

  constexpr bool& __get__isTrigger();

  constexpr bool const& __get__isTrigger() const;

  constexpr void __set__isTrigger(bool value);

  static inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo* New_ctor();

  /// @brief Method .ctor addr 0x206b5b0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GenerateGeoCache__HEU_ColliderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_GenerateGeoCache__HEU_ColliderInfo(__HEU_GenerateGeoCache__HEU_ColliderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GenerateGeoCache__HEU_ColliderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_GenerateGeoCache__HEU_ColliderInfo(__HEU_GenerateGeoCache__HEU_ColliderInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GenerateGeoCache__HEU_ColliderInfo();

public:
  /// @brief Field _colliderType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType ____colliderType;

  /// @brief Field _colliderCenter, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____colliderCenter;

  /// @brief Field _colliderSize, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____colliderSize;

  /// @brief Field _colliderRadius, offset: 0x2c, size: 0x4, def value: None
  float_t ____colliderRadius;

  /// @brief Field _convexCollider, offset: 0x30, size: 0x1, def value: None
  bool ____convexCollider;

  /// @brief Field _collisionGroupName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____collisionGroupName;

  /// @brief Field _collisionVertices, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____collisionVertices;

  /// @brief Field _collisionIndices, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____collisionIndices;

  /// @brief Field _meshTopology, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::MeshTopology ____meshTopology;

  /// @brief Field _isTrigger, offset: 0x54, size: 0x1, def value: None
  bool ____isTrigger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, 0x58>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____colliderType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____colliderCenter) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____colliderSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____colliderRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____convexCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____collisionGroupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____collisionVertices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____collisionIndices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____meshTopology) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo, ____isTrigger) == 0x54, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9760))
// CS Name: ::HEU_GenerateGeoCache::<>c*
class CORDL_TYPE __HEU_GenerateGeoCache____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* __9;

  /// @brief Field <>9__63_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__63_0, put = setStaticF___9__63_0))::System::Predicate_1<::UnityEngine::Material*>* __9__63_0;

  /// @brief Field <>9__65_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__65_0, put = setStaticF___9__65_0))::System::Comparison_1<float_t>* __9__65_0;

  static inline void setStaticF___9(::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* value);

  static inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* getStaticF___9();

  static inline void setStaticF___9__63_0(::System::Predicate_1<::UnityEngine::Material*>* value);

  static inline ::System::Predicate_1<::UnityEngine::Material*>* getStaticF___9__63_0();

  static inline void setStaticF___9__65_0(::System::Comparison_1<float_t>* value);

  static inline ::System::Comparison_1<float_t>* getStaticF___9__65_0();

  static inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* New_ctor();

  /// @brief Method .ctor addr 0x206dc28 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetFinalMaterialsFromComparingNewWithPrevious>b__63_0 addr 0x206dc30 size 0x5c virtual false final false
  inline bool _GetFinalMaterialsFromComparingNewWithPrevious_b__63_0(::UnityEngine::Material* material);

  /// @brief Method <GenerateLODMeshesFromGeoGroups>b__65_0 addr 0x206dc8c size 0x1c virtual false final false
  inline int32_t _GenerateLODMeshesFromGeoGroups_b__65_0(float_t a, float_t b);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GenerateGeoCache____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_GenerateGeoCache____c(__HEU_GenerateGeoCache____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GenerateGeoCache____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_GenerateGeoCache____c(__HEU_GenerateGeoCache____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GenerateGeoCache____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_GenerateGeoCache
// SizeInfo { instance_size: 696, native_size: -1, calculated_instance_size: 696, calculated_native_size: 696, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9667)), TypeDefinitionIndex(TypeDefinitionIndex(9666)), TypeDefinitionIndex(TypeDefinitionIndex(2611)),
// TypeDefinitionIndex(TypeDefinitionIndex(9668))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9761)) CS Name: ::HoudiniEngineUnity::HEU_GenerateGeoCache*
class CORDL_TYPE HEU_GenerateGeoCache : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c;

  using HEU_ColliderInfo = ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo;

  /// @brief Field <AssetID>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__AssetID_k__BackingField, put = __set__AssetID_k__BackingField)) int32_t _AssetID_k__BackingField;

  /// @brief Field _geoInfo, offset 0x14, size 0x24
  __declspec(property(get = __get__geoInfo, put = __set__geoInfo))::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo;

  /// @brief Field _partInfo, offset 0x38, size 0x30
  __declspec(property(get = __get__partInfo, put = __set__partInfo))::HoudiniEngineUnity::HAPI_PartInfo _partInfo;

  /// @brief Field _partName, offset 0x68, size 0x8
  __declspec(property(get = __get__partName, put = __set__partName))::StringW _partName;

  /// @brief Field _vertexList, offset 0x70, size 0x8
  __declspec(property(get = __get__vertexList, put = __set__vertexList))::ArrayW<int32_t, ::Array<int32_t>*> _vertexList;

  /// @brief Field _faceCounts, offset 0x78, size 0x8
  __declspec(property(get = __get__faceCounts, put = __set__faceCounts))::ArrayW<int32_t, ::Array<int32_t>*> _faceCounts;

  /// @brief Field _houdiniMaterialIDs, offset 0x80, size 0x8
  __declspec(property(get = __get__houdiniMaterialIDs, put = __set__houdiniMaterialIDs))::ArrayW<int32_t, ::Array<int32_t>*> _houdiniMaterialIDs;

  /// @brief Field _singleFaceUnityMaterial, offset 0x88, size 0x1
  __declspec(property(get = __get__singleFaceUnityMaterial, put = __set__singleFaceUnityMaterial)) bool _singleFaceUnityMaterial;

  /// @brief Field _singleFaceHoudiniMaterial, offset 0x89, size 0x1
  __declspec(property(get = __get__singleFaceHoudiniMaterial, put = __set__singleFaceHoudiniMaterial)) bool _singleFaceHoudiniMaterial;

  /// @brief Field _unityMaterialInfos, offset 0x90, size 0x8
  __declspec(property(get = __get__unityMaterialInfos,
                      put = __set__unityMaterialInfos))::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* _unityMaterialInfos;

  /// @brief Field _unityMaterialAttrInfo, offset 0x98, size 0x28
  __declspec(property(get = __get__unityMaterialAttrInfo, put = __set__unityMaterialAttrInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _unityMaterialAttrInfo;

  /// @brief Field _unityMaterialAttrName, offset 0xc0, size 0x8
  __declspec(property(get = __get__unityMaterialAttrName, put = __set__unityMaterialAttrName))::ArrayW<int32_t, ::Array<int32_t>*> _unityMaterialAttrName;

  /// @brief Field _unityMaterialAttrStringsMap, offset 0xc8, size 0x8
  __declspec(property(get = __get__unityMaterialAttrStringsMap,
                      put = __set__unityMaterialAttrStringsMap))::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _unityMaterialAttrStringsMap;

  /// @brief Field _substanceMaterialAttrNameInfo, offset 0xd0, size 0x28
  __declspec(property(get = __get__substanceMaterialAttrNameInfo, put = __set__substanceMaterialAttrNameInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrNameInfo;

  /// @brief Field _substanceMaterialAttrName, offset 0xf8, size 0x8
  __declspec(property(get = __get__substanceMaterialAttrName, put = __set__substanceMaterialAttrName))::ArrayW<int32_t, ::Array<int32_t>*> _substanceMaterialAttrName;

  /// @brief Field _substanceMaterialAttrStringsMap, offset 0x100, size 0x8
  __declspec(property(get = __get__substanceMaterialAttrStringsMap,
                      put = __set__substanceMaterialAttrStringsMap))::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _substanceMaterialAttrStringsMap;

  /// @brief Field _substanceMaterialAttrIndexInfo, offset 0x108, size 0x28
  __declspec(property(get = __get__substanceMaterialAttrIndexInfo, put = __set__substanceMaterialAttrIndexInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrIndexInfo;

  /// @brief Field _substanceMaterialAttrIndex, offset 0x130, size 0x8
  __declspec(property(get = __get__substanceMaterialAttrIndex, put = __set__substanceMaterialAttrIndex))::ArrayW<int32_t, ::Array<int32_t>*> _substanceMaterialAttrIndex;

  /// @brief Field _inUseMaterials, offset 0x138, size 0x8
  __declspec(property(get = __get__inUseMaterials, put = __set__inUseMaterials))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* _inUseMaterials;

  /// @brief Field _posAttrInfo, offset 0x140, size 0x28
  __declspec(property(get = __get__posAttrInfo, put = __set__posAttrInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _posAttrInfo;

  /// @brief Field _uvsAttrInfo, offset 0x168, size 0x8
  __declspec(property(get = __get__uvsAttrInfo, put = __set__uvsAttrInfo))::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> _uvsAttrInfo;

  /// @brief Field _normalAttrInfo, offset 0x170, size 0x28
  __declspec(property(get = __get__normalAttrInfo, put = __set__normalAttrInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _normalAttrInfo;

  /// @brief Field _colorAttrInfo, offset 0x198, size 0x28
  __declspec(property(get = __get__colorAttrInfo, put = __set__colorAttrInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _colorAttrInfo;

  /// @brief Field _alphaAttrInfo, offset 0x1c0, size 0x28
  __declspec(property(get = __get__alphaAttrInfo, put = __set__alphaAttrInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _alphaAttrInfo;

  /// @brief Field _tangentAttrInfo, offset 0x1e8, size 0x28
  __declspec(property(get = __get__tangentAttrInfo, put = __set__tangentAttrInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _tangentAttrInfo;

  /// @brief Field _posAttr, offset 0x210, size 0x8
  __declspec(property(get = __get__posAttr, put = __set__posAttr))::ArrayW<float_t, ::Array<float_t>*> _posAttr;

  /// @brief Field _uvsAttr, offset 0x218, size 0x8
  __declspec(property(get = __get__uvsAttr, put = __set__uvsAttr))::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> _uvsAttr;

  /// @brief Field _normalAttr, offset 0x220, size 0x8
  __declspec(property(get = __get__normalAttr, put = __set__normalAttr))::ArrayW<float_t, ::Array<float_t>*> _normalAttr;

  /// @brief Field _colorAttr, offset 0x228, size 0x8
  __declspec(property(get = __get__colorAttr, put = __set__colorAttr))::ArrayW<float_t, ::Array<float_t>*> _colorAttr;

  /// @brief Field _alphaAttr, offset 0x230, size 0x8
  __declspec(property(get = __get__alphaAttr, put = __set__alphaAttr))::ArrayW<float_t, ::Array<float_t>*> _alphaAttr;

  /// @brief Field _tangentAttr, offset 0x238, size 0x8
  __declspec(property(get = __get__tangentAttr, put = __set__tangentAttr))::ArrayW<float_t, ::Array<float_t>*> _tangentAttr;

  /// @brief Field _groups, offset 0x240, size 0x8
  __declspec(property(get = __get__groups, put = __set__groups))::ArrayW<::StringW, ::Array<::StringW>*> _groups;

  /// @brief Field _hasGroupGeometry, offset 0x248, size 0x1
  __declspec(property(get = __get__hasGroupGeometry, put = __set__hasGroupGeometry)) bool _hasGroupGeometry;

  /// @brief Field _groupSplitVertexIndices, offset 0x250, size 0x8
  __declspec(property(get = __get__groupSplitVertexIndices,
                      put = __set__groupSplitVertexIndices))::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>* _groupSplitVertexIndices;

  /// @brief Field _groupSplitFaceIndices, offset 0x258, size 0x8
  __declspec(property(get = __get__groupSplitFaceIndices,
                      put = __set__groupSplitFaceIndices))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* _groupSplitFaceIndices;

  /// @brief Field _groupVertexOffsets, offset 0x260, size 0x8
  __declspec(property(get = __get__groupVertexOffsets,
                      put = __set__groupVertexOffsets))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* _groupVertexOffsets;

  /// @brief Field _allCollisionVertexList, offset 0x268, size 0x8
  __declspec(property(get = __get__allCollisionVertexList, put = __set__allCollisionVertexList))::ArrayW<int32_t, ::Array<int32_t>*> _allCollisionVertexList;

  /// @brief Field _allCollisionFaceIndices, offset 0x270, size 0x8
  __declspec(property(get = __get__allCollisionFaceIndices, put = __set__allCollisionFaceIndices))::ArrayW<int32_t, ::Array<int32_t>*> _allCollisionFaceIndices;

  /// @brief Field _normalCosineThreshold, offset 0x278, size 0x4
  __declspec(property(get = __get__normalCosineThreshold, put = __set__normalCosineThreshold)) float_t _normalCosineThreshold;

  /// @brief Field _hasLODGroups, offset 0x27c, size 0x1
  __declspec(property(get = __get__hasLODGroups, put = __set__hasLODGroups)) bool _hasLODGroups;

  /// @brief Field _LODTransitionValues, offset 0x280, size 0x8
  __declspec(property(get = __get__LODTransitionValues, put = __set__LODTransitionValues))::ArrayW<float_t, ::Array<float_t>*> _LODTransitionValues;

  /// @brief Field _isMeshReadWrite, offset 0x288, size 0x1
  __declspec(property(get = __get__isMeshReadWrite, put = __set__isMeshReadWrite)) bool _isMeshReadWrite;

  /// @brief Field _colliderInfos, offset 0x290, size 0x8
  __declspec(property(get = __get__colliderInfos, put = __set__colliderInfos))::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>* _colliderInfos;

  /// @brief Field _materialCache, offset 0x298, size 0x8
  __declspec(property(get = __get__materialCache, put = __set__materialCache))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* _materialCache;

  /// @brief Field _materialIDToDataMap, offset 0x2a0, size 0x8
  __declspec(property(get = __get__materialIDToDataMap,
                      put = __set__materialIDToDataMap))::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>* _materialIDToDataMap;

  /// @brief Field _assetCacheFolderPath, offset 0x2a8, size 0x8
  __declspec(property(get = __get__assetCacheFolderPath, put = __set__assetCacheFolderPath))::StringW _assetCacheFolderPath;

  /// @brief Field _meshIndexFormat, offset 0x2b0, size 0x8
  __declspec(property(get = __get__meshIndexFormat, put = __set__meshIndexFormat))::HoudiniEngineUnity::HEU_MeshIndexFormat* _meshIndexFormat;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_PartID)) int32_t PartID;

  __declspec(property(get = get_AssetID, put = set_AssetID)) int32_t AssetID;

  constexpr int32_t& __get__AssetID_k__BackingField();

  constexpr int32_t const& __get__AssetID_k__BackingField() const;

  constexpr void __set__AssetID_k__BackingField(int32_t value);

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& __get__geoInfo();

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& __get__geoInfo() const;

  constexpr void __set__geoInfo(::HoudiniEngineUnity::HAPI_GeoInfo value);

  constexpr ::HoudiniEngineUnity::HAPI_PartInfo& __get__partInfo();

  constexpr ::HoudiniEngineUnity::HAPI_PartInfo const& __get__partInfo() const;

  constexpr void __set__partInfo(::HoudiniEngineUnity::HAPI_PartInfo value);

  constexpr ::StringW& __get__partName();

  constexpr ::StringW const& __get__partName() const;

  constexpr void __set__partName(::StringW value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__vertexList();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__vertexList() const;

  constexpr void __set__vertexList(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__faceCounts();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__faceCounts() const;

  constexpr void __set__faceCounts(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__houdiniMaterialIDs();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__houdiniMaterialIDs() const;

  constexpr void __set__houdiniMaterialIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get__singleFaceUnityMaterial();

  constexpr bool const& __get__singleFaceUnityMaterial() const;

  constexpr void __set__singleFaceUnityMaterial(bool value);

  constexpr bool& __get__singleFaceHoudiniMaterial();

  constexpr bool const& __get__singleFaceHoudiniMaterial() const;

  constexpr void __set__singleFaceHoudiniMaterial(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*& __get__unityMaterialInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*> const& __get__unityMaterialInfos() const;

  constexpr void __set__unityMaterialInfos(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__unityMaterialAttrInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__unityMaterialAttrInfo() const;

  constexpr void __set__unityMaterialAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__unityMaterialAttrName();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__unityMaterialAttrName() const;

  constexpr void __set__unityMaterialAttrName(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __get__unityMaterialAttrStringsMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*> const& __get__unityMaterialAttrStringsMap() const;

  constexpr void __set__unityMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__substanceMaterialAttrNameInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__substanceMaterialAttrNameInfo() const;

  constexpr void __set__substanceMaterialAttrNameInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__substanceMaterialAttrName();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__substanceMaterialAttrName() const;

  constexpr void __set__substanceMaterialAttrName(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __get__substanceMaterialAttrStringsMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*> const& __get__substanceMaterialAttrStringsMap() const;

  constexpr void __set__substanceMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__substanceMaterialAttrIndexInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__substanceMaterialAttrIndexInfo() const;

  constexpr void __set__substanceMaterialAttrIndexInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__substanceMaterialAttrIndex();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__substanceMaterialAttrIndex() const;

  constexpr void __set__substanceMaterialAttrIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*& __get__inUseMaterials();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> const& __get__inUseMaterials() const;

  constexpr void __set__inUseMaterials(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__posAttrInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__posAttrInfo() const;

  constexpr void __set__posAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>& __get__uvsAttrInfo();

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> const& __get__uvsAttrInfo() const;

  constexpr void __set__uvsAttrInfo(::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__normalAttrInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__normalAttrInfo() const;

  constexpr void __set__normalAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__colorAttrInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__colorAttrInfo() const;

  constexpr void __set__colorAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__alphaAttrInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__alphaAttrInfo() const;

  constexpr void __set__alphaAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__tangentAttrInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__tangentAttrInfo() const;

  constexpr void __set__tangentAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__posAttr();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__posAttr() const;

  constexpr void __set__posAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*>& __get__uvsAttr();

  constexpr ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> const& __get__uvsAttr() const;

  constexpr void __set__uvsAttr(::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__normalAttr();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__normalAttr() const;

  constexpr void __set__normalAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__colorAttr();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__colorAttr() const;

  constexpr void __set__colorAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__alphaAttr();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__alphaAttr() const;

  constexpr void __set__alphaAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__tangentAttr();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__tangentAttr() const;

  constexpr void __set__tangentAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__groups();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__groups() const;

  constexpr void __set__groups(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr bool& __get__hasGroupGeometry();

  constexpr bool const& __get__hasGroupGeometry() const;

  constexpr void __set__hasGroupGeometry(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>*& __get__groupSplitVertexIndices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __get__groupSplitVertexIndices() const;

  constexpr void __set__groupSplitVertexIndices(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& __get__groupSplitFaceIndices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*> const& __get__groupSplitFaceIndices() const;

  constexpr void __set__groupSplitFaceIndices(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& __get__groupVertexOffsets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*> const& __get__groupVertexOffsets() const;

  constexpr void __set__groupVertexOffsets(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__allCollisionVertexList();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__allCollisionVertexList() const;

  constexpr void __set__allCollisionVertexList(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__allCollisionFaceIndices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__allCollisionFaceIndices() const;

  constexpr void __set__allCollisionFaceIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr float_t& __get__normalCosineThreshold();

  constexpr float_t const& __get__normalCosineThreshold() const;

  constexpr void __set__normalCosineThreshold(float_t value);

  constexpr bool& __get__hasLODGroups();

  constexpr bool const& __get__hasLODGroups() const;

  constexpr void __set__hasLODGroups(bool value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__LODTransitionValues();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__LODTransitionValues() const;

  constexpr void __set__LODTransitionValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr bool& __get__isMeshReadWrite();

  constexpr bool const& __get__isMeshReadWrite() const;

  constexpr void __set__isMeshReadWrite(bool value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*& __get__colliderInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*> const& __get__colliderInfos() const;

  constexpr void __set__colliderInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*& __get__materialCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> const& __get__materialCache() const;

  constexpr void __set__materialCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>*& __get__materialIDToDataMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>*> const& __get__materialIDToDataMap() const;

  constexpr void __set__materialIDToDataMap(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>* value);

  constexpr ::StringW& __get__assetCacheFolderPath();

  constexpr ::StringW const& __get__assetCacheFolderPath() const;

  constexpr void __set__assetCacheFolderPath(::StringW value);

  constexpr ::HoudiniEngineUnity::HEU_MeshIndexFormat*& __get__meshIndexFormat();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_MeshIndexFormat*> const& __get__meshIndexFormat() const;

  constexpr void __set__meshIndexFormat(::HoudiniEngineUnity::HEU_MeshIndexFormat* value);

  /// @brief Method get_GeoID addr 0x206278c size 0x8 virtual false final false
  inline int32_t get_GeoID();

  /// @brief Method get_PartID addr 0x2062794 size 0x8 virtual false final false
  inline int32_t get_PartID();

  /// @brief Method get_AssetID addr 0x206279c size 0x8 virtual false final false
  inline int32_t get_AssetID();

  /// @brief Method set_AssetID addr 0x20627a4 size 0x8 virtual false final false
  inline void set_AssetID(int32_t value);

  /// @brief Method GetPopulatedGeoCache addr 0x20627ac size 0x304 virtual false final false
  static inline ::HoudiniEngineUnity::HEU_GenerateGeoCache* GetPopulatedGeoCache(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t geoID, int32_t partID, bool bUseLODGroups,
                                                                                 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache,
                                                                                 ::StringW assetCacheFolderPath);

  /// @brief Method PopulateUnityMaterialData addr 0x2062cac size 0x614 virtual false final false
  inline void PopulateUnityMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetMaterialKeyFromAttributeIndex addr 0x2064ec0 size 0x15c virtual false final false
  static inline int32_t GetMaterialKeyFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, int32_t attributeIndex, ByRef<::StringW> unityMaterialName,
                                                         ByRef<::StringW> substanceName, ByRef<int32_t> substanceIndex);

  /// @brief Method CreateMaterialInfoEntryFromAttributeIndex addr 0x2064da4 size 0x11c virtual false final false
  static inline void CreateMaterialInfoEntryFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, int32_t materialAttributeIndex);

  /// @brief Method PopulateGeometryData addr 0x20632c0 size 0x1ae4 virtual false final false
  inline bool PopulateGeometryData(::HoudiniEngineUnity::HEU_SessionBase* session, bool bUseLODGroups);

  /// @brief Method ParseLODTransitionAttribute addr 0x206501c size 0x1bc virtual false final false
  static inline void ParseLODTransitionAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ByRef<::ArrayW<float_t, ::Array<float_t>*>> LODTransitionValues);

  /// @brief Method UpdateColliders addr 0x20651d8 size 0x150 virtual false final false
  static inline void UpdateColliders(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData);

  /// @brief Method UpdateCollider addr 0x2065328 size 0x644 virtual false final false
  static inline void UpdateCollider(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData,
                                    ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo* colliderInfo);

  /// @brief Method GetFinalMaterialsFromComparingNewWithPrevious addr 0x206596c size 0x3a4 virtual false final false
  static inline void GetFinalMaterialsFromComparingNewWithPrevious(::UnityEngine::GameObject* gameObject, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> previousMaterials,
                                                                   ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials,
                                                                   ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> finalMaterials);

  /// @brief Method GenerateMeshFromSingleGroup addr 0x2065d10 size 0x1bc virtual false final false
  static inline bool GenerateMeshFromSingleGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache,
                                                 ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents,
                                                 bool bGenerateNormals, bool bPartInstanced);

  /// @brief Method GenerateLODMeshesFromGeoGroups addr 0x20669b8 size 0xb64 virtual false final false
  static inline bool GenerateLODMeshesFromGeoGroups(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* GeoGroupMeshes,
                                                    ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput, int32_t defaultMaterialKey,
                                                    bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced);

  /// @brief Method GenerateMeshFromGeoGroup addr 0x2065ecc size 0xaec virtual false final false
  static inline bool GenerateMeshFromGeoGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache,
                                              int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced, ByRef<::UnityEngine::Mesh*> newMesh,
                                              ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> newMaterials);

  /// @brief Method CombineQuadMeshes addr 0x2067c90 size 0x5a4 virtual false final false
  static inline ::UnityEngine::Mesh* CombineQuadMeshes(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap,
                                                       ::System::Collections::Generic::List_1<int32_t>* subMeshIndices, bool bGenerateNormals);

  /// @brief Method CombineMeshes addr 0x2068234 size 0x344 virtual false final false
  static inline ::UnityEngine::Mesh* CombineMeshes(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap,
                                                   ::System::Collections::Generic::List_1<int32_t>* submeshIndices, bool bGenerateUVs, bool bGenerateNormals,
                                                   ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat);

  /// @brief Method CreateMeshFromMeshData addr 0x20679f4 size 0x29c virtual false final false
  static inline ::UnityEngine::Mesh* CreateMeshFromMeshData(::HoudiniEngineUnity::HEU_MeshData* submesh, bool bGenerateUVs, bool bGenerateNormals,
                                                            ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat);

  /// @brief Method TransferRegularAttributesToVertices addr 0x20685c4 size 0x2ec virtual false final false
  static inline void TransferRegularAttributesToVertices(::ArrayW<int32_t, ::Array<int32_t>*> groupVertexList, ::ArrayW<int32_t, ::Array<int32_t>*> allFaceCounts,
                                                         ::System::Collections::Generic::List_1<int32_t>* groupFaces, ::System::Collections::Generic::List_1<int32_t>* groupVertexOffset,
                                                         ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo, ::ArrayW<float_t, ::Array<float_t>*> inData,
                                                         ByRef<::ArrayW<float_t, ::Array<float_t>*>> outData);

  /// @brief Method GenerateGeoGroupUsingGeoCacheVertices addr 0x20688b0 size 0x2d00 virtual false final false
  static inline bool GenerateGeoGroupUsingGeoCacheVertices(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, bool bGenerateUVs,
                                                           bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced,
                                                           ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> LODGroupMeshes, ByRef<int32_t> defaultMaterialKey);

  /// @brief Method GenerateGeoGroupUsingGeoCachePoints addr 0x206b958 size 0x226c virtual false final false
  static inline bool GenerateGeoGroupUsingGeoCachePoints(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, bool bGenerateUVs,
                                                         bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced,
                                                         ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> LODGroupMeshes, ByRef<int32_t> defaultMaterialKey);

  /// @brief Method CalculateGroupMeshTopology addr 0x206b5b8 size 0x1c8 virtual false final false
  static inline ::UnityEngine::MeshTopology CalculateGroupMeshTopology(::System::Collections::Generic::List_1<int32_t>* groupFaces, ::ArrayW<int32_t, ::Array<int32_t>*> allFaceCounts);

  static inline ::HoudiniEngineUnity::HEU_GenerateGeoCache* New_ctor();

  /// @brief Method .ctor addr 0x2062ab0 size 0x1fc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GenerateGeoCache(HEU_GenerateGeoCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GenerateGeoCache(HEU_GenerateGeoCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GenerateGeoCache();

public:
  /// @brief Field <AssetID>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____AssetID_k__BackingField;

  /// @brief Field _geoInfo, offset: 0x14, size: 0x24, def value: None
  ::HoudiniEngineUnity::HAPI_GeoInfo ____geoInfo;

  /// @brief Field _partInfo, offset: 0x38, size: 0x30, def value: None
  ::HoudiniEngineUnity::HAPI_PartInfo ____partInfo;

  /// @brief Field _partName, offset: 0x68, size: 0x8, def value: None
  ::StringW ____partName;

  /// @brief Field _vertexList, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____vertexList;

  /// @brief Field _faceCounts, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____faceCounts;

  /// @brief Field _houdiniMaterialIDs, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____houdiniMaterialIDs;

  /// @brief Field _singleFaceUnityMaterial, offset: 0x88, size: 0x1, def value: None
  bool ____singleFaceUnityMaterial;

  /// @brief Field _singleFaceHoudiniMaterial, offset: 0x89, size: 0x1, def value: None
  bool ____singleFaceHoudiniMaterial;

  /// @brief Field _unityMaterialInfos, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* ____unityMaterialInfos;

  /// @brief Field _unityMaterialAttrInfo, offset: 0x98, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____unityMaterialAttrInfo;

  /// @brief Field _unityMaterialAttrName, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____unityMaterialAttrName;

  /// @brief Field _unityMaterialAttrStringsMap, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* ____unityMaterialAttrStringsMap;

  /// @brief Field _substanceMaterialAttrNameInfo, offset: 0xd0, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____substanceMaterialAttrNameInfo;

  /// @brief Field _substanceMaterialAttrName, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____substanceMaterialAttrName;

  /// @brief Field _substanceMaterialAttrStringsMap, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* ____substanceMaterialAttrStringsMap;

  /// @brief Field _substanceMaterialAttrIndexInfo, offset: 0x108, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____substanceMaterialAttrIndexInfo;

  /// @brief Field _substanceMaterialAttrIndex, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____substanceMaterialAttrIndex;

  /// @brief Field _inUseMaterials, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* ____inUseMaterials;

  /// @brief Field _posAttrInfo, offset: 0x140, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____posAttrInfo;

  /// @brief Field _uvsAttrInfo, offset: 0x168, size: 0x8, def value: None
  ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> ____uvsAttrInfo;

  /// @brief Field _normalAttrInfo, offset: 0x170, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____normalAttrInfo;

  /// @brief Field _colorAttrInfo, offset: 0x198, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____colorAttrInfo;

  /// @brief Field _alphaAttrInfo, offset: 0x1c0, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____alphaAttrInfo;

  /// @brief Field _tangentAttrInfo, offset: 0x1e8, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____tangentAttrInfo;

  /// @brief Field _posAttr, offset: 0x210, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____posAttr;

  /// @brief Field _uvsAttr, offset: 0x218, size: 0x8, def value: None
  ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> ____uvsAttr;

  /// @brief Field _normalAttr, offset: 0x220, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____normalAttr;

  /// @brief Field _colorAttr, offset: 0x228, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____colorAttr;

  /// @brief Field _alphaAttr, offset: 0x230, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____alphaAttr;

  /// @brief Field _tangentAttr, offset: 0x238, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____tangentAttr;

  /// @brief Field _groups, offset: 0x240, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____groups;

  /// @brief Field _hasGroupGeometry, offset: 0x248, size: 0x1, def value: None
  bool ____hasGroupGeometry;

  /// @brief Field _groupSplitVertexIndices, offset: 0x250, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>* ____groupSplitVertexIndices;

  /// @brief Field _groupSplitFaceIndices, offset: 0x258, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* ____groupSplitFaceIndices;

  /// @brief Field _groupVertexOffsets, offset: 0x260, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* ____groupVertexOffsets;

  /// @brief Field _allCollisionVertexList, offset: 0x268, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____allCollisionVertexList;

  /// @brief Field _allCollisionFaceIndices, offset: 0x270, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____allCollisionFaceIndices;

  /// @brief Field _normalCosineThreshold, offset: 0x278, size: 0x4, def value: None
  float_t ____normalCosineThreshold;

  /// @brief Field _hasLODGroups, offset: 0x27c, size: 0x1, def value: None
  bool ____hasLODGroups;

  /// @brief Field _LODTransitionValues, offset: 0x280, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____LODTransitionValues;

  /// @brief Field _isMeshReadWrite, offset: 0x288, size: 0x1, def value: None
  bool ____isMeshReadWrite;

  /// @brief Field _colliderInfos, offset: 0x290, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>* ____colliderInfos;

  /// @brief Field _materialCache, offset: 0x298, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* ____materialCache;

  /// @brief Field _materialIDToDataMap, offset: 0x2a0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>* ____materialIDToDataMap;

  /// @brief Field _assetCacheFolderPath, offset: 0x2a8, size: 0x8, def value: None
  ::StringW ____assetCacheFolderPath;

  /// @brief Field _meshIndexFormat, offset: 0x2b0, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_MeshIndexFormat* ____meshIndexFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GenerateGeoCache, 0x2b8>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____AssetID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____geoInfo) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____partInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____partName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____vertexList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____faceCounts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____houdiniMaterialIDs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____singleFaceUnityMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____singleFaceHoudiniMaterial) == 0x89, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____unityMaterialInfos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____unityMaterialAttrInfo) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____unityMaterialAttrName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____unityMaterialAttrStringsMap) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____substanceMaterialAttrNameInfo) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____substanceMaterialAttrName) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____substanceMaterialAttrStringsMap) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____substanceMaterialAttrIndexInfo) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____substanceMaterialAttrIndex) == 0x130, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____inUseMaterials) == 0x138, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____posAttrInfo) == 0x140, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____uvsAttrInfo) == 0x168, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____normalAttrInfo) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____colorAttrInfo) == 0x198, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____alphaAttrInfo) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____tangentAttrInfo) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____posAttr) == 0x210, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____uvsAttr) == 0x218, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____normalAttr) == 0x220, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____colorAttr) == 0x228, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____alphaAttr) == 0x230, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____tangentAttr) == 0x238, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____groups) == 0x240, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____hasGroupGeometry) == 0x248, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____groupSplitVertexIndices) == 0x250, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____groupSplitFaceIndices) == 0x258, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____groupVertexOffsets) == 0x260, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____allCollisionVertexList) == 0x268, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____allCollisionFaceIndices) == 0x270, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____normalCosineThreshold) == 0x278, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____hasLODGroups) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____LODTransitionValues) == 0x280, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____isMeshReadWrite) == 0x288, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____colliderInfos) == 0x290, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____materialCache) == 0x298, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____materialIDToDataMap) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____assetCacheFolderPath) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache, ____meshIndexFormat) == 0x2b0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo/ColliderType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GenerateGeoCache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateGeoCache*, "HoudiniEngineUnity", "HEU_GenerateGeoCache");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_GenerateGeoCache____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*, "HoudiniEngineUnity", "HEU_GenerateGeoCache/<>c");
