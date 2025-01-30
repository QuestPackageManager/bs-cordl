#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GenerateGeoCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GenerateGeoCache)
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache_HEU_ColliderInfo;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache___c;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
namespace HoudiniEngineUnity {
class HEU_MeshIndexFormat;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_UnityMaterialInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache_HEU_ColliderInfo;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache___c;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GenerateGeoCache);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GenerateGeoCache___c);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache/HEU_ColliderInfo/ColliderType
struct CORDL_TYPE HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType_Unwrapped
  enum struct __HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_BOX = static_cast<int32_t>(0x1),
    __E_SPHERE = static_cast<int32_t>(0x2),
    __E_MESH = static_cast<int32_t>(0x3),
    __E_SIMPLE_BOX = static_cast<int32_t>(0x4),
    __E_SIMPLE_SPHERE = static_cast<int32_t>(0x5),
    __E_SIMPLE_CAPSULE = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType_Unwrapped() const noexcept {
    return static_cast<__HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType(int32_t value__) noexcept;

  /// @brief Field BOX value: I32(1)
  static ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const BOX;

  /// @brief Field MESH value: I32(3)
  static ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const MESH;

  /// @brief Field NONE value: I32(0)
  static ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const NONE;

  /// @brief Field SIMPLE_BOX value: I32(4)
  static ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const SIMPLE_BOX;

  /// @brief Field SIMPLE_CAPSULE value: I32(6)
  static ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const SIMPLE_CAPSULE;

  /// @brief Field SIMPLE_SPHERE value: I32(5)
  static ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const SIMPLE_SPHERE;

  /// @brief Field SPHERE value: I32(2)
  static ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const SPHERE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11816 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType, System.Object, UnityEngine.MeshTopology, UnityEngine.Vector3
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache/HEU_ColliderInfo
class CORDL_TYPE HEU_GenerateGeoCache_HEU_ColliderInfo : public ::System::Object {
public:
  // Declarations
  using ColliderType = ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType;

  /// @brief Field _colliderCenter, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get__colliderCenter, put = __cordl_internal_set__colliderCenter)) ::UnityEngine::Vector3 _colliderCenter;

  /// @brief Field _colliderRadius, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__colliderRadius, put = __cordl_internal_set__colliderRadius)) float_t _colliderRadius;

  /// @brief Field _colliderSize, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__colliderSize, put = __cordl_internal_set__colliderSize)) ::UnityEngine::Vector3 _colliderSize;

  /// @brief Field _colliderType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__colliderType, put = __cordl_internal_set__colliderType)) ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType _colliderType;

  /// @brief Field _collisionGroupName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__collisionGroupName, put = __cordl_internal_set__collisionGroupName)) ::StringW _collisionGroupName;

  /// @brief Field _collisionIndices, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__collisionIndices, put = __cordl_internal_set__collisionIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> _collisionIndices;

  /// @brief Field _collisionVertices, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__collisionVertices, put = __cordl_internal_set__collisionVertices)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      _collisionVertices;

  /// @brief Field _convexCollider, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__convexCollider, put = __cordl_internal_set__convexCollider)) bool _convexCollider;

  /// @brief Field _isTrigger, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__isTrigger, put = __cordl_internal_set__isTrigger)) bool _isTrigger;

  /// @brief Field _meshTopology, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__meshTopology, put = __cordl_internal_set__meshTopology)) ::UnityEngine::MeshTopology _meshTopology;

  static inline ::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__colliderCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__colliderCenter();

  constexpr float_t const& __cordl_internal_get__colliderRadius() const;

  constexpr float_t& __cordl_internal_get__colliderRadius();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__colliderSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__colliderSize();

  constexpr ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType const& __cordl_internal_get__colliderType() const;

  constexpr ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType& __cordl_internal_get__colliderType();

  constexpr ::StringW const& __cordl_internal_get__collisionGroupName() const;

  constexpr ::StringW& __cordl_internal_get__collisionGroupName();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__collisionIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__collisionIndices();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__collisionVertices() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__collisionVertices();

  constexpr bool const& __cordl_internal_get__convexCollider() const;

  constexpr bool& __cordl_internal_get__convexCollider();

  constexpr bool const& __cordl_internal_get__isTrigger() const;

  constexpr bool& __cordl_internal_get__isTrigger();

  constexpr ::UnityEngine::MeshTopology const& __cordl_internal_get__meshTopology() const;

  constexpr ::UnityEngine::MeshTopology& __cordl_internal_get__meshTopology();

  constexpr void __cordl_internal_set__colliderCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__colliderRadius(float_t value);

  constexpr void __cordl_internal_set__colliderSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__colliderType(::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType value);

  constexpr void __cordl_internal_set__collisionGroupName(::StringW value);

  constexpr void __cordl_internal_set__collisionIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__collisionVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__convexCollider(bool value);

  constexpr void __cordl_internal_set__isTrigger(bool value);

  constexpr void __cordl_internal_set__meshTopology(::UnityEngine::MeshTopology value);

  /// @brief Method .ctor, addr 0x3a7ace8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GenerateGeoCache_HEU_ColliderInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache_HEU_ColliderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GenerateGeoCache_HEU_ColliderInfo(HEU_GenerateGeoCache_HEU_ColliderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache_HEU_ColliderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GenerateGeoCache_HEU_ColliderInfo(HEU_GenerateGeoCache_HEU_ColliderInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11817 };

  /// @brief Field _colliderType, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType ____colliderType;

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
static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____colliderType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____colliderCenter) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____colliderSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____colliderRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____convexCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____collisionGroupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____collisionVertices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____collisionIndices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____meshTopology) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, ____isTrigger) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo, 0x58>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache/<>c
class CORDL_TYPE HEU_GenerateGeoCache___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HoudiniEngineUnity::HEU_GenerateGeoCache___c* __9;

  /// @brief Field <>9__63_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__63_0, put = setStaticF___9__63_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Material>>* __9__63_0;

  /// @brief Field <>9__65_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__65_0, put = setStaticF___9__65_0)) ::System::Comparison_1<float_t>* __9__65_0;

  static inline ::HoudiniEngineUnity::HEU_GenerateGeoCache___c* New_ctor();

  /// @brief Method <GenerateLODMeshesFromGeoGroups>b__65_0, addr 0x3a7d08c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _GenerateLODMeshesFromGeoGroups_b__65_0(float_t a, float_t b);

  /// @brief Method <GetFinalMaterialsFromComparingNewWithPrevious>b__63_0, addr 0x3a7d030, size 0x5c, virtual false, abstract: false, final false
  inline bool _GetFinalMaterialsFromComparingNewWithPrevious_b__63_0(::UnityEngine::Material* material);

  /// @brief Method .ctor, addr 0x3a7d028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::HEU_GenerateGeoCache___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Material>>* getStaticF___9__63_0();

  static inline ::System::Comparison_1<float_t>* getStaticF___9__65_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::HEU_GenerateGeoCache___c* value);

  static inline void setStaticF___9__63_0(::System::Predicate_1<::UnityW<::UnityEngine::Material>>* value);

  static inline void setStaticF___9__65_0(::System::Comparison_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GenerateGeoCache___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GenerateGeoCache___c(HEU_GenerateGeoCache___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GenerateGeoCache___c(HEU_GenerateGeoCache___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11818 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GenerateGeoCache___c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HAPI_AttributeInfo, HoudiniEngineUnity.HAPI_GeoInfo, HoudiniEngineUnity.HAPI_PartInfo, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache
class CORDL_TYPE HEU_GenerateGeoCache : public ::System::Object {
public:
  // Declarations
  using HEU_ColliderInfo = ::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo;

  using __c = ::HoudiniEngineUnity::HEU_GenerateGeoCache___c;

  __declspec(property(get = get_AssetID, put = set_AssetID)) int32_t AssetID;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_PartID)) int32_t PartID;

  /// @brief Field <AssetID>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__AssetID_k__BackingField, put = __cordl_internal_set__AssetID_k__BackingField)) int32_t _AssetID_k__BackingField;

  /// @brief Field _LODTransitionValues, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get__LODTransitionValues, put = __cordl_internal_set__LODTransitionValues)) ::ArrayW<float_t, ::Array<float_t>*> _LODTransitionValues;

  /// @brief Field _allCollisionFaceIndices, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get__allCollisionFaceIndices, put = __cordl_internal_set__allCollisionFaceIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> _allCollisionFaceIndices;

  /// @brief Field _allCollisionVertexList, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get__allCollisionVertexList, put = __cordl_internal_set__allCollisionVertexList)) ::ArrayW<int32_t, ::Array<int32_t>*> _allCollisionVertexList;

  /// @brief Field _alphaAttr, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__alphaAttr, put = __cordl_internal_set__alphaAttr)) ::ArrayW<float_t, ::Array<float_t>*> _alphaAttr;

  /// @brief Field _alphaAttrInfo, offset 0x1c0, size 0x28
  __declspec(property(get = __cordl_internal_get__alphaAttrInfo, put = __cordl_internal_set__alphaAttrInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _alphaAttrInfo;

  /// @brief Field _assetCacheFolderPath, offset 0x2a8, size 0x8
  __declspec(property(get = __cordl_internal_get__assetCacheFolderPath, put = __cordl_internal_set__assetCacheFolderPath)) ::StringW _assetCacheFolderPath;

  /// @brief Field _colliderInfos, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get__colliderInfos,
                      put = __cordl_internal_set__colliderInfos)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*>* _colliderInfos;

  /// @brief Field _colorAttr, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get__colorAttr, put = __cordl_internal_set__colorAttr)) ::ArrayW<float_t, ::Array<float_t>*> _colorAttr;

  /// @brief Field _colorAttrInfo, offset 0x198, size 0x28
  __declspec(property(get = __cordl_internal_get__colorAttrInfo, put = __cordl_internal_set__colorAttrInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _colorAttrInfo;

  /// @brief Field _faceCounts, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__faceCounts, put = __cordl_internal_set__faceCounts)) ::ArrayW<int32_t, ::Array<int32_t>*> _faceCounts;

  /// @brief Field _geoInfo, offset 0x14, size 0x24
  __declspec(property(get = __cordl_internal_get__geoInfo, put = __cordl_internal_set__geoInfo)) ::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo;

  /// @brief Field _groupSplitFaceIndices, offset 0x258, size 0x8
  __declspec(property(
      get = __cordl_internal_get__groupSplitFaceIndices,
      put = __cordl_internal_set__groupSplitFaceIndices)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* _groupSplitFaceIndices;

  /// @brief Field _groupSplitVertexIndices, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get__groupSplitVertexIndices,
                      put = __cordl_internal_set__groupSplitVertexIndices)) ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>* _groupSplitVertexIndices;

  /// @brief Field _groupVertexOffsets, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get__groupVertexOffsets,
                      put = __cordl_internal_set__groupVertexOffsets)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* _groupVertexOffsets;

  /// @brief Field _groups, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get__groups, put = __cordl_internal_set__groups)) ::ArrayW<::StringW, ::Array<::StringW>*> _groups;

  /// @brief Field _hasGroupGeometry, offset 0x248, size 0x1
  __declspec(property(get = __cordl_internal_get__hasGroupGeometry, put = __cordl_internal_set__hasGroupGeometry)) bool _hasGroupGeometry;

  /// @brief Field _hasLODGroups, offset 0x27c, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLODGroups, put = __cordl_internal_set__hasLODGroups)) bool _hasLODGroups;

  /// @brief Field _houdiniMaterialIDs, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__houdiniMaterialIDs, put = __cordl_internal_set__houdiniMaterialIDs)) ::ArrayW<int32_t, ::Array<int32_t>*> _houdiniMaterialIDs;

  /// @brief Field _inUseMaterials, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__inUseMaterials,
                      put = __cordl_internal_set__inUseMaterials)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* _inUseMaterials;

  /// @brief Field _isMeshReadWrite, offset 0x288, size 0x1
  __declspec(property(get = __cordl_internal_get__isMeshReadWrite, put = __cordl_internal_set__isMeshReadWrite)) bool _isMeshReadWrite;

  /// @brief Field _materialCache, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get__materialCache,
                      put = __cordl_internal_set__materialCache)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* _materialCache;

  /// @brief Field _materialIDToDataMap, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get__materialIDToDataMap,
                      put = __cordl_internal_set__materialIDToDataMap)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* _materialIDToDataMap;

  /// @brief Field _meshIndexFormat, offset 0x2b0, size 0x8
  __declspec(property(get = __cordl_internal_get__meshIndexFormat, put = __cordl_internal_set__meshIndexFormat)) ::HoudiniEngineUnity::HEU_MeshIndexFormat* _meshIndexFormat;

  /// @brief Field _normalAttr, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__normalAttr, put = __cordl_internal_set__normalAttr)) ::ArrayW<float_t, ::Array<float_t>*> _normalAttr;

  /// @brief Field _normalAttrInfo, offset 0x170, size 0x28
  __declspec(property(get = __cordl_internal_get__normalAttrInfo, put = __cordl_internal_set__normalAttrInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _normalAttrInfo;

  /// @brief Field _normalCosineThreshold, offset 0x278, size 0x4
  __declspec(property(get = __cordl_internal_get__normalCosineThreshold, put = __cordl_internal_set__normalCosineThreshold)) float_t _normalCosineThreshold;

  /// @brief Field _partInfo, offset 0x38, size 0x30
  __declspec(property(get = __cordl_internal_get__partInfo, put = __cordl_internal_set__partInfo)) ::HoudiniEngineUnity::HAPI_PartInfo _partInfo;

  /// @brief Field _partName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__partName, put = __cordl_internal_set__partName)) ::StringW _partName;

  /// @brief Field _posAttr, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__posAttr, put = __cordl_internal_set__posAttr)) ::ArrayW<float_t, ::Array<float_t>*> _posAttr;

  /// @brief Field _posAttrInfo, offset 0x140, size 0x28
  __declspec(property(get = __cordl_internal_get__posAttrInfo, put = __cordl_internal_set__posAttrInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _posAttrInfo;

  /// @brief Field _singleFaceHoudiniMaterial, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get__singleFaceHoudiniMaterial, put = __cordl_internal_set__singleFaceHoudiniMaterial)) bool _singleFaceHoudiniMaterial;

  /// @brief Field _singleFaceUnityMaterial, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__singleFaceUnityMaterial, put = __cordl_internal_set__singleFaceUnityMaterial)) bool _singleFaceUnityMaterial;

  /// @brief Field _substanceMaterialAttrIndex, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__substanceMaterialAttrIndex, put = __cordl_internal_set__substanceMaterialAttrIndex)) ::ArrayW<int32_t, ::Array<int32_t>*> _substanceMaterialAttrIndex;

  /// @brief Field _substanceMaterialAttrIndexInfo, offset 0x108, size 0x28
  __declspec(property(get = __cordl_internal_get__substanceMaterialAttrIndexInfo,
                      put = __cordl_internal_set__substanceMaterialAttrIndexInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrIndexInfo;

  /// @brief Field _substanceMaterialAttrName, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__substanceMaterialAttrName, put = __cordl_internal_set__substanceMaterialAttrName)) ::ArrayW<int32_t, ::Array<int32_t>*> _substanceMaterialAttrName;

  /// @brief Field _substanceMaterialAttrNameInfo, offset 0xd0, size 0x28
  __declspec(property(get = __cordl_internal_get__substanceMaterialAttrNameInfo,
                      put = __cordl_internal_set__substanceMaterialAttrNameInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrNameInfo;

  /// @brief Field _substanceMaterialAttrStringsMap, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__substanceMaterialAttrStringsMap,
                      put = __cordl_internal_set__substanceMaterialAttrStringsMap)) ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _substanceMaterialAttrStringsMap;

  /// @brief Field _tangentAttr, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get__tangentAttr, put = __cordl_internal_set__tangentAttr)) ::ArrayW<float_t, ::Array<float_t>*> _tangentAttr;

  /// @brief Field _tangentAttrInfo, offset 0x1e8, size 0x28
  __declspec(property(get = __cordl_internal_get__tangentAttrInfo, put = __cordl_internal_set__tangentAttrInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _tangentAttrInfo;

  /// @brief Field _unityMaterialAttrInfo, offset 0x98, size 0x28
  __declspec(property(get = __cordl_internal_get__unityMaterialAttrInfo, put = __cordl_internal_set__unityMaterialAttrInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _unityMaterialAttrInfo;

  /// @brief Field _unityMaterialAttrName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__unityMaterialAttrName, put = __cordl_internal_set__unityMaterialAttrName)) ::ArrayW<int32_t, ::Array<int32_t>*> _unityMaterialAttrName;

  /// @brief Field _unityMaterialAttrStringsMap, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__unityMaterialAttrStringsMap,
                      put = __cordl_internal_set__unityMaterialAttrStringsMap)) ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _unityMaterialAttrStringsMap;

  /// @brief Field _unityMaterialInfos, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__unityMaterialInfos,
                      put = __cordl_internal_set__unityMaterialInfos)) ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* _unityMaterialInfos;

  /// @brief Field _uvsAttr, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__uvsAttr, put = __cordl_internal_set__uvsAttr)) ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*>
      _uvsAttr;

  /// @brief Field _uvsAttrInfo, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__uvsAttrInfo,
                      put = __cordl_internal_set__uvsAttrInfo)) ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>
      _uvsAttrInfo;

  /// @brief Field _vertexList, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__vertexList, put = __cordl_internal_set__vertexList)) ::ArrayW<int32_t, ::Array<int32_t>*> _vertexList;

  /// @brief Method CalculateGroupMeshTopology, addr 0x3a7acf0, size 0x1e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshTopology CalculateGroupMeshTopology(::System::Collections::Generic::List_1<int32_t>* groupFaces, ::ArrayW<int32_t, ::Array<int32_t>*> allFaceCounts);

  /// @brief Method CombineMeshes, addr 0x3a77ce4, size 0x354, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CombineMeshes(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap,
                                                            ::System::Collections::Generic::List_1<int32_t>* submeshIndices, bool bGenerateUVs, bool bGenerateNormals,
                                                            ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat);

  /// @brief Method CombineQuadMeshes, addr 0x3a7770c, size 0x5d8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CombineQuadMeshes(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap,
                                                                ::System::Collections::Generic::List_1<int32_t>* subMeshIndices, bool bGenerateNormals);

  /// @brief Method CreateMaterialInfoEntryFromAttributeIndex, addr 0x3a74748, size 0x118, virtual false, abstract: false, final false
  static inline void CreateMaterialInfoEntryFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, int32_t materialAttributeIndex);

  /// @brief Method CreateMeshFromMeshData, addr 0x3a7745c, size 0x2b0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateMeshFromMeshData(::HoudiniEngineUnity::HEU_MeshData* submesh, bool bGenerateUVs, bool bGenerateNormals,
                                                                     ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat);

  /// @brief Method GenerateGeoGroupUsingGeoCachePoints, addr 0x3a7b0b4, size 0x1f18, virtual false, abstract: false, final false
  static inline bool GenerateGeoGroupUsingGeoCachePoints(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, bool bGenerateUVs,
                                                         bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced,
                                                         ::ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> LODGroupMeshes, ::ByRef<int32_t> defaultMaterialKey);

  /// @brief Method GenerateGeoGroupUsingGeoCacheVertices, addr 0x3a7836c, size 0x297c, virtual false, abstract: false, final false
  static inline bool GenerateGeoGroupUsingGeoCacheVertices(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, bool bGenerateUVs,
                                                           bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced,
                                                           ::ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> LODGroupMeshes, ::ByRef<int32_t> defaultMaterialKey);

  /// @brief Method GenerateLODMeshesFromGeoGroups, addr 0x3a76408, size 0xb78, virtual false, abstract: false, final false
  static inline bool GenerateLODMeshesFromGeoGroups(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* GeoGroupMeshes,
                                                    ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput, int32_t defaultMaterialKey,
                                                    bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced);

  /// @brief Method GenerateMeshFromGeoGroup, addr 0x3a75908, size 0xb00, virtual false, abstract: false, final false
  static inline bool GenerateMeshFromGeoGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache,
                                              int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced, ::ByRef<::UnityEngine::Mesh*> newMesh,
                                              ::ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> newMaterials);

  /// @brief Method GenerateMeshFromSingleGroup, addr 0x3a75750, size 0x1b8, virtual false, abstract: false, final false
  static inline bool GenerateMeshFromSingleGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache,
                                                 ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents,
                                                 bool bGenerateNormals, bool bPartInstanced);

  /// @brief Method GetFinalMaterialsFromComparingNewWithPrevious, addr 0x3a7539c, size 0x3b4, virtual false, abstract: false, final false
  static inline void GetFinalMaterialsFromComparingNewWithPrevious(::UnityEngine::GameObject* gameObject, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> previousMaterials,
                                                                   ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials,
                                                                   ::ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> finalMaterials);

  /// @brief Method GetMaterialKeyFromAttributeIndex, addr 0x3a74860, size 0x15c, virtual false, abstract: false, final false
  static inline int32_t GetMaterialKeyFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, int32_t attributeIndex, ::ByRef<::StringW> unityMaterialName,
                                                         ::ByRef<::StringW> substanceName, ::ByRef<int32_t> substanceIndex);

  /// @brief Method GetPopulatedGeoCache, addr 0x3a7222c, size 0x2fc, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_GenerateGeoCache* GetPopulatedGeoCache(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t geoID, int32_t partID, bool bUseLODGroups,
                                                                                 ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache,
                                                                                 ::StringW assetCacheFolderPath);

  static inline ::HoudiniEngineUnity::HEU_GenerateGeoCache* New_ctor();

  /// @brief Method ParseLODTransitionAttribute, addr 0x3a749bc, size 0x1b8, virtual false, abstract: false, final false
  static inline void ParseLODTransitionAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> LODTransitionValues);

  /// @brief Method PopulateGeometryData, addr 0x3a72d00, size 0x1a48, virtual false, abstract: false, final false
  inline bool PopulateGeometryData(::HoudiniEngineUnity::HEU_SessionBase* session, bool bUseLODGroups);

  /// @brief Method PopulateUnityMaterialData, addr 0x3a72718, size 0x5e8, virtual false, abstract: false, final false
  inline void PopulateUnityMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method TransferRegularAttributesToVertices, addr 0x3a78084, size 0x2e8, virtual false, abstract: false, final false
  static inline void TransferRegularAttributesToVertices(::ArrayW<int32_t, ::Array<int32_t>*> groupVertexList, ::ArrayW<int32_t, ::Array<int32_t>*> allFaceCounts,
                                                         ::System::Collections::Generic::List_1<int32_t>* groupFaces, ::System::Collections::Generic::List_1<int32_t>* groupVertexOffset,
                                                         ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo, ::ArrayW<float_t, ::Array<float_t>*> inData,
                                                         ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> outData);

  /// @brief Method UpdateCollider, addr 0x3a74cc4, size 0x6d8, virtual false, abstract: false, final false
  static inline void UpdateCollider(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData,
                                    ::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo* colliderInfo);

  /// @brief Method UpdateColliders, addr 0x3a74b74, size 0x150, virtual false, abstract: false, final false
  static inline void UpdateColliders(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData);

  constexpr int32_t const& __cordl_internal_get__AssetID_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__AssetID_k__BackingField();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__LODTransitionValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__LODTransitionValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__allCollisionFaceIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__allCollisionFaceIndices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__allCollisionVertexList() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__allCollisionVertexList();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__alphaAttr() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__alphaAttr();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__alphaAttrInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__alphaAttrInfo();

  constexpr ::StringW const& __cordl_internal_get__assetCacheFolderPath() const;

  constexpr ::StringW& __cordl_internal_get__assetCacheFolderPath();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*>* const& __cordl_internal_get__colliderInfos() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*>*& __cordl_internal_get__colliderInfos();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__colorAttr() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__colorAttr();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__colorAttrInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__colorAttrInfo();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__faceCounts() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__faceCounts();

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& __cordl_internal_get__geoInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& __cordl_internal_get__geoInfo();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get__groupSplitFaceIndices() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get__groupSplitFaceIndices();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>* const& __cordl_internal_get__groupSplitVertexIndices() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>*& __cordl_internal_get__groupSplitVertexIndices();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get__groupVertexOffsets() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get__groupVertexOffsets();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__groups() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__groups();

  constexpr bool const& __cordl_internal_get__hasGroupGeometry() const;

  constexpr bool& __cordl_internal_get__hasGroupGeometry();

  constexpr bool const& __cordl_internal_get__hasLODGroups() const;

  constexpr bool& __cordl_internal_get__hasLODGroups();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__houdiniMaterialIDs() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__houdiniMaterialIDs();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* const& __cordl_internal_get__inUseMaterials() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*& __cordl_internal_get__inUseMaterials();

  constexpr bool const& __cordl_internal_get__isMeshReadWrite() const;

  constexpr bool& __cordl_internal_get__isMeshReadWrite();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* const& __cordl_internal_get__materialCache() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*& __cordl_internal_get__materialCache();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* const& __cordl_internal_get__materialIDToDataMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*& __cordl_internal_get__materialIDToDataMap();

  constexpr ::HoudiniEngineUnity::HEU_MeshIndexFormat* const& __cordl_internal_get__meshIndexFormat() const;

  constexpr ::HoudiniEngineUnity::HEU_MeshIndexFormat*& __cordl_internal_get__meshIndexFormat();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__normalAttr() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__normalAttr();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__normalAttrInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__normalAttrInfo();

  constexpr float_t const& __cordl_internal_get__normalCosineThreshold() const;

  constexpr float_t& __cordl_internal_get__normalCosineThreshold();

  constexpr ::HoudiniEngineUnity::HAPI_PartInfo const& __cordl_internal_get__partInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_PartInfo& __cordl_internal_get__partInfo();

  constexpr ::StringW const& __cordl_internal_get__partName() const;

  constexpr ::StringW& __cordl_internal_get__partName();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__posAttr() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__posAttr();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__posAttrInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__posAttrInfo();

  constexpr bool const& __cordl_internal_get__singleFaceHoudiniMaterial() const;

  constexpr bool& __cordl_internal_get__singleFaceHoudiniMaterial();

  constexpr bool const& __cordl_internal_get__singleFaceUnityMaterial() const;

  constexpr bool& __cordl_internal_get__singleFaceUnityMaterial();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__substanceMaterialAttrIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__substanceMaterialAttrIndex();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__substanceMaterialAttrIndexInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__substanceMaterialAttrIndexInfo();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__substanceMaterialAttrName() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__substanceMaterialAttrName();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__substanceMaterialAttrNameInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__substanceMaterialAttrNameInfo();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* const& __cordl_internal_get__substanceMaterialAttrStringsMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __cordl_internal_get__substanceMaterialAttrStringsMap();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__tangentAttr() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__tangentAttr();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__tangentAttrInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__tangentAttrInfo();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__unityMaterialAttrInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__unityMaterialAttrInfo();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__unityMaterialAttrName() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__unityMaterialAttrName();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* const& __cordl_internal_get__unityMaterialAttrStringsMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __cordl_internal_get__unityMaterialAttrStringsMap();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* const& __cordl_internal_get__unityMaterialInfos() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*& __cordl_internal_get__unityMaterialInfos();

  constexpr ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> const& __cordl_internal_get__uvsAttr() const;

  constexpr ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*>& __cordl_internal_get__uvsAttr();

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> const& __cordl_internal_get__uvsAttrInfo() const;

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>& __cordl_internal_get__uvsAttrInfo();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__vertexList() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__vertexList();

  constexpr void __cordl_internal_set__AssetID_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LODTransitionValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__allCollisionFaceIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__allCollisionVertexList(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__alphaAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__alphaAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__assetCacheFolderPath(::StringW value);

  constexpr void __cordl_internal_set__colliderInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*>* value);

  constexpr void __cordl_internal_set__colorAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__colorAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__faceCounts(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__geoInfo(::HoudiniEngineUnity::HAPI_GeoInfo value);

  constexpr void __cordl_internal_set__groupSplitFaceIndices(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr void __cordl_internal_set__groupSplitVertexIndices(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>* value);

  constexpr void __cordl_internal_set__groupVertexOffsets(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr void __cordl_internal_set__groups(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__hasGroupGeometry(bool value);

  constexpr void __cordl_internal_set__hasLODGroups(bool value);

  constexpr void __cordl_internal_set__houdiniMaterialIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__inUseMaterials(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* value);

  constexpr void __cordl_internal_set__isMeshReadWrite(bool value);

  constexpr void __cordl_internal_set__materialCache(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* value);

  constexpr void __cordl_internal_set__materialIDToDataMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* value);

  constexpr void __cordl_internal_set__meshIndexFormat(::HoudiniEngineUnity::HEU_MeshIndexFormat* value);

  constexpr void __cordl_internal_set__normalAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__normalAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__normalCosineThreshold(float_t value);

  constexpr void __cordl_internal_set__partInfo(::HoudiniEngineUnity::HAPI_PartInfo value);

  constexpr void __cordl_internal_set__partName(::StringW value);

  constexpr void __cordl_internal_set__posAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__posAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__singleFaceHoudiniMaterial(bool value);

  constexpr void __cordl_internal_set__singleFaceUnityMaterial(bool value);

  constexpr void __cordl_internal_set__substanceMaterialAttrIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__substanceMaterialAttrIndexInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__substanceMaterialAttrName(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__substanceMaterialAttrNameInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__substanceMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  constexpr void __cordl_internal_set__tangentAttr(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__tangentAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__unityMaterialAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__unityMaterialAttrName(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__unityMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  constexpr void __cordl_internal_set__unityMaterialInfos(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* value);

  constexpr void __cordl_internal_set__uvsAttr(::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> value);

  constexpr void __cordl_internal_set__uvsAttrInfo(::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> value);

  constexpr void __cordl_internal_set__vertexList(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x3a72528, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AssetID, addr 0x3a7221c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AssetID();

  /// @brief Method get_GeoID, addr 0x3a7220c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GeoID();

  /// @brief Method get_PartID, addr 0x3a72214, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PartID();

  /// @brief Method set_AssetID, addr 0x3a72224, size 0x8, virtual false, abstract: false, final false
  inline void set_AssetID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GenerateGeoCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GenerateGeoCache(HEU_GenerateGeoCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GenerateGeoCache(HEU_GenerateGeoCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11819 };

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
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* ____inUseMaterials;

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
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*>* ____colliderInfos;

  /// @brief Field _materialCache, offset: 0x298, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* ____materialCache;

  /// @brief Field _materialIDToDataMap, offset: 0x2a0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* ____materialIDToDataMap;

  /// @brief Field _assetCacheFolderPath, offset: 0x2a8, size: 0x8, def value: None
  ::StringW ____assetCacheFolderPath;

  /// @brief Field _meshIndexFormat, offset: 0x2b0, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_MeshIndexFormat* ____meshIndexFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GenerateGeoCache, 0x2b8>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ColliderInfo_HEU_GenerateGeoCache_ColliderType, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo/ColliderType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GenerateGeoCache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateGeoCache*, "HoudiniEngineUnity", "HEU_GenerateGeoCache");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GenerateGeoCache___c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateGeoCache___c*, "HoudiniEngineUnity", "HEU_GenerateGeoCache/<>c");
