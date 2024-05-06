#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PartData)
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_AttributesStore;
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
class HEU_ObjectNode;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct TransformData;
}
namespace HoudiniEngineUnity {
struct __HEU_PartData__PartOutputType;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c__DisplayClass86_0;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c__DisplayClass88_0;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c__DisplayClass88_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LOD;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_PartData__PartOutputType;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c__DisplayClass86_0;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c__DisplayClass88_0;
}
namespace HoudiniEngineUnity {
class __HEU_PartData____c__DisplayClass88_1;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_PartData__PartOutputType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PartData);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_PartData____c);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1);
// Type: ::PartOutputType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_PartData::PartOutputType
struct CORDL_TYPE __HEU_PartData__PartOutputType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_PartData__PartOutputType_Unwrapped
  enum struct ____HEU_PartData__PartOutputType_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_MESH = static_cast<int32_t>(0x1),
    __E_VOLUME = static_cast<int32_t>(0x2),
    __E_CURVE = static_cast<int32_t>(0x3),
    __E_INSTANCER = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_PartData__PartOutputType_Unwrapped() const noexcept {
    return static_cast<____HEU_PartData__PartOutputType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PartData__PartOutputType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_PartData__PartOutputType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CURVE value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_PartData__PartOutputType const CURVE;

  /// @brief Field INSTANCER value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_PartData__PartOutputType const INSTANCER;

  /// @brief Field MESH value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_PartData__PartOutputType const MESH;

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_PartData__PartOutputType const NONE;

  /// @brief Field VOLUME value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_PartData__PartOutputType const VOLUME;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PartData__PartOutputType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PartData__PartOutputType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_PartData::<>c*
class CORDL_TYPE __HEU_PartData____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HoudiniEngineUnity::__HEU_PartData____c* __9;

  /// @brief Field <>9__85_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__85_0, put = setStaticF___9__85_0))::System::Comparison_1<::UnityEngine::LOD>* __9__85_0;

  static inline ::HoudiniEngineUnity::__HEU_PartData____c* New_ctor();

  /// @brief Method <CopyGameObjectComponents>b__85_0, addr 0x2563380, size 0x18, virtual false, abstract: false, final false
  inline int32_t _CopyGameObjectComponents_b__85_0(::UnityEngine::LOD a, ::UnityEngine::LOD b);

  /// @brief Method .ctor, addr 0x2563378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::__HEU_PartData____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::LOD>* getStaticF___9__85_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::__HEU_PartData____c* value);

  static inline void setStaticF___9__85_0(::System::Comparison_1<::UnityEngine::LOD>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PartData____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PartData____c(__HEU_PartData____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PartData____c(__HEU_PartData____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PartData____c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c__DisplayClass86_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_PartData::<>c__DisplayClass86_0*
class CORDL_TYPE __HEU_PartData____c__DisplayClass86_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field previousTransformValues, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_previousTransformValues,
                      put = __cordl_internal_set_previousTransformValues))::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues;

  static inline ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0* New_ctor();

  /// @brief Method <CopyChildGameObjects>b__0, addr 0x2563398, size 0x10c, virtual false, abstract: false, final false
  inline void _CopyChildGameObjects_b__0(::UnityEngine::Transform* trans);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& __cordl_internal_get_previousTransformValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> const& __cordl_internal_get_previousTransformValues() const;

  constexpr void __cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value);

  /// @brief Method .ctor, addr 0x2561140, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PartData____c__DisplayClass86_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c__DisplayClass86_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PartData____c__DisplayClass86_0(__HEU_PartData____c__DisplayClass86_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c__DisplayClass86_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PartData____c__DisplayClass86_0(__HEU_PartData____c__DisplayClass86_0 const&) = delete;

  /// @brief Field previousTransformValues, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* ___previousTransformValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0, ___previousTransformValues) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c__DisplayClass88_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_PartData::<>c__DisplayClass88_0*
class CORDL_TYPE __HEU_PartData____c__DisplayClass88_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field previousTransformValues, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_previousTransformValues,
                      put = __cordl_internal_set_previousTransformValues))::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues;

  static inline ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0* New_ctor();

  /// @brief Method <BakePartToGameObject>b__0, addr 0x25634a4, size 0x10c, virtual false, abstract: false, final false
  inline void _BakePartToGameObject_b__0(::UnityEngine::Transform* trans);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& __cordl_internal_get_previousTransformValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> const& __cordl_internal_get_previousTransformValues() const;

  constexpr void __cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value);

  /// @brief Method .ctor, addr 0x2561bb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PartData____c__DisplayClass88_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c__DisplayClass88_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PartData____c__DisplayClass88_0(__HEU_PartData____c__DisplayClass88_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c__DisplayClass88_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PartData____c__DisplayClass88_0(__HEU_PartData____c__DisplayClass88_0 const&) = delete;

  /// @brief Field previousTransformValues, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* ___previousTransformValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0, ___previousTransformValues) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c__DisplayClass88_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_PartData::<>c__DisplayClass88_1*
class CORDL_TYPE __HEU_PartData____c__DisplayClass88_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field previousTransformValues, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_previousTransformValues,
                      put = __cordl_internal_set_previousTransformValues))::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues;

  static inline ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1* New_ctor();

  /// @brief Method <BakePartToGameObject>b__1, addr 0x25635b0, size 0x10c, virtual false, abstract: false, final false
  inline void _BakePartToGameObject_b__1(::UnityEngine::Transform* trans);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& __cordl_internal_get_previousTransformValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> const& __cordl_internal_get_previousTransformValues() const;

  constexpr void __cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value);

  /// @brief Method .ctor, addr 0x2561bb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PartData____c__DisplayClass88_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c__DisplayClass88_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PartData____c__DisplayClass88_1(__HEU_PartData____c__DisplayClass88_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PartData____c__DisplayClass88_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PartData____c__DisplayClass88_1(__HEU_PartData____c__DisplayClass88_1 const&) = delete;

  /// @brief Field previousTransformValues, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* ___previousTransformValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1, ___previousTransformValues) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PartData
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_PartData*
class CORDL_TYPE HEU_PartData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using PartOutputType = ::HoudiniEngineUnity::__HEU_PartData__PartOutputType;

  using __c = ::HoudiniEngineUnity::__HEU_PartData____c;

  using __c__DisplayClass86_0 = ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0;

  using __c__DisplayClass88_0 = ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0;

  using __c__DisplayClass88_1 = ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1;

  __declspec(property(get = get_GeneratedOutput))::HoudiniEngineUnity::HEU_GeneratedOutput* GeneratedOutput;

  __declspec(property(get = get_MeshVertexCount)) int32_t MeshVertexCount;

  __declspec(property(get = get_ObjectInstancesBeenGenerated, put = set_ObjectInstancesBeenGenerated)) bool ObjectInstancesBeenGenerated;

  __declspec(property(get = get_OutputGameObject))::UnityW<::UnityEngine::GameObject> OutputGameObject;

  __declspec(property(get = get_ParentAsset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ParentAsset;

  __declspec(property(get = get_ParentGeoNode))::UnityW<::HoudiniEngineUnity::HEU_GeoNode> ParentGeoNode;

  __declspec(property(get = get_PartID)) int32_t PartID;

  __declspec(property(get = get_PartName))::StringW PartName;

  /// @brief Field _assetDBTerrainData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__assetDBTerrainData, put = __cordl_internal_set__assetDBTerrainData))::UnityW<::UnityEngine::Object> _assetDBTerrainData;

  /// @brief Field _attributesStore, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__attributesStore, put = __cordl_internal_set__attributesStore))::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> _attributesStore;

  /// @brief Field _curve, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__curve, put = __cordl_internal_set__curve))::UnityW<::HoudiniEngineUnity::HEU_Curve> _curve;

  /// @brief Field _generatedOutput, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__generatedOutput, put = __cordl_internal_set__generatedOutput))::HoudiniEngineUnity::HEU_GeneratedOutput* _generatedOutput;

  /// @brief Field _geoID, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__geoID, put = __cordl_internal_set__geoID)) int32_t _geoID;

  /// @brief Field _geoNode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__geoNode, put = __cordl_internal_set__geoNode))::UnityW<::HoudiniEngineUnity::HEU_GeoNode> _geoNode;

  /// @brief Field _haveInstancesBeenGenerated, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__haveInstancesBeenGenerated, put = __cordl_internal_set__haveInstancesBeenGenerated)) bool _haveInstancesBeenGenerated;

  /// @brief Field _isAttribInstancer, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isAttribInstancer, put = __cordl_internal_set__isAttribInstancer)) bool _isAttribInstancer;

  /// @brief Field _isObjectInstancer, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isObjectInstancer, put = __cordl_internal_set__isObjectInstancer)) bool _isObjectInstancer;

  /// @brief Field _isPartEditable, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__isPartEditable, put = __cordl_internal_set__isPartEditable)) bool _isPartEditable;

  /// @brief Field _isPartInstanced, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__isPartInstanced, put = __cordl_internal_set__isPartInstanced)) bool _isPartInstanced;

  /// @brief Field _meshVertexCount, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__meshVertexCount, put = __cordl_internal_set__meshVertexCount)) int32_t _meshVertexCount;

  /// @brief Field _objectInstanceInfos, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__objectInstanceInfos,
                      put = __cordl_internal_set__objectInstanceInfos))::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* _objectInstanceInfos;

  /// @brief Field _objectInstancesGenerated, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__objectInstancesGenerated, put = __cordl_internal_set__objectInstancesGenerated)) bool _objectInstancesGenerated;

  /// @brief Field _objectNodeID, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__objectNodeID, put = __cordl_internal_set__objectNodeID)) int32_t _objectNodeID;

  /// @brief Field _partID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__partID, put = __cordl_internal_set__partID)) int32_t _partID;

  /// @brief Field _partName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__partName, put = __cordl_internal_set__partName))::StringW _partName;

  /// @brief Field _partOutputType, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__partOutputType, put = __cordl_internal_set__partOutputType))::HoudiniEngineUnity::__HEU_PartData__PartOutputType _partOutputType;

  /// @brief Field _partPointCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__partPointCount, put = __cordl_internal_set__partPointCount)) int32_t _partPointCount;

  /// @brief Field _partType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__partType, put = __cordl_internal_set__partType))::HoudiniEngineUnity::HAPI_PartType _partType;

  /// @brief Field _terrainOffsetPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get__terrainOffsetPosition, put = __cordl_internal_set__terrainOffsetPosition))::UnityEngine::Vector3 _terrainOffsetPosition;

  /// @brief Field _volumeLayerName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeLayerName, put = __cordl_internal_set__volumeLayerName))::StringW _volumeLayerName;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*() noexcept;

  /// @brief Method AppendBakedCloneName, addr 0x2561288, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW AppendBakedCloneName(::StringW name);

  /// @brief Method ApplyHAPITransform, addr 0x255cec0, size 0x168, virtual false, abstract: false, final false
  inline void ApplyHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform);

  /// @brief Method BakePartToGameObject, addr 0x25613b8, size 0x7f8, virtual false, abstract: false, final false
  static inline void BakePartToGameObject(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* srcGO, ::UnityEngine::GameObject* targetGO, ::StringW assetName, bool bIsInstancer,
                                          bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath,
                                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                                          ByRef<::UnityEngine::Object*> assetDBObject, ::StringW assetObjectFileName, bool bReconnectPrefabInstances, bool bKeepPreviousTransformValues);

  /// @brief Method BakePartToGameObject, addr 0x25612d4, size 0xe4, virtual false, abstract: false, final false
  inline void BakePartToGameObject(::UnityEngine::GameObject* targetGO, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bWriteMeshesToAssetDatabase,
                                   ByRef<::StringW> bakedAssetPath, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                                   ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                                   ByRef<::UnityEngine::Object*> assetDBObject, ::StringW assetObjectFileName, bool bReconnectPrefabInstances, bool bKeepPreviousTransformValues);

  /// @brief Method BakePartToNewGameObject, addr 0x2561148, size 0x140, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject>
  BakePartToNewGameObject(::UnityEngine::Transform* parentTransform, bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath,
                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                          ByRef<::UnityEngine::Object*> assetDBObject, ::StringW assetObjectFileName, bool bReconnectPrefabInstances);

  /// @brief Method CalculateColliderState, addr 0x255ec6c, size 0x2d8, virtual false, abstract: false, final false
  inline void CalculateColliderState();

  /// @brief Method CalculateVisibility, addr 0x255ec20, size 0x30, virtual false, abstract: false, final false
  inline void CalculateVisibility(bool bParentVisibility, bool bParentDisplayGeo);

  /// @brief Method ClearGeneratedData, addr 0x255d6b8, size 0x18, virtual false, abstract: false, final false
  inline void ClearGeneratedData();

  /// @brief Method ClearGeneratedMeshOutput, addr 0x255d6d0, size 0x88, virtual false, abstract: false, final false
  inline void ClearGeneratedMeshOutput();

  /// @brief Method ClearGeneratedVolumeOutput, addr 0x255d758, size 0x34, virtual false, abstract: false, final false
  inline void ClearGeneratedVolumeOutput();

  /// @brief Method ClearInstances, addr 0x255b87c, size 0x110, virtual false, abstract: false, final false
  inline void ClearInstances();

  /// @brief Method ClearInvalidObjectInstanceInfos, addr 0x255b98c, size 0x200, virtual false, abstract: false, final false
  inline void ClearInvalidObjectInstanceInfos();

  /// @brief Method ClearObjectInstanceInfos, addr 0x255cd1c, size 0xcc, virtual false, abstract: false, final false
  inline void ClearObjectInstanceInfos();

  /// @brief Method CopyChildGameObjects, addr 0x2560d24, size 0x41c, virtual false, abstract: false, final false
  static inline void CopyChildGameObjects(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::StringW assetName,
                                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                                          bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath, ByRef<::UnityEngine::Object*> assetDBObject, ::StringW assetObjectFileName,
                                          bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bKeepPreviousTransformValues);

  /// @brief Method CopyGameObjectComponents, addr 0x255ef44, size 0x1de0, virtual false, abstract: false, final false
  static inline void CopyGameObjectComponents(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::StringW assetName,
                                              ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                                              ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                                              bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath, ByRef<::UnityEngine::Object*> assetDBObject, ::StringW assetObjectFileName,
                                              bool bDeleteExistingComponents, bool bDontDeletePersistantResources,
                                              ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* lodTransformValues);

  /// @brief Method CreateNewInstanceFromObject, addr 0x255df90, size 0x408, virtual false, abstract: false, final false
  inline void CreateNewInstanceFromObject(::UnityEngine::GameObject* sourceObject, int32_t instanceIndex, ::UnityEngine::Transform* parentTransform,
                                          ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, int32_t instancedObjectNodeID, ::StringW instancedObjectPath,
                                          ::UnityEngine::Vector3 rotationOffset, ::UnityEngine::Vector3 scaleOffset, ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes,
                                          ::UnityEngine::GameObject* collisionSrcGO, bool copyParentFlags);

  /// @brief Method CreateObjectInstanceInfo, addr 0x255e770, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> CreateObjectInstanceInfo(::UnityEngine::GameObject* instancedObject, int32_t instancedObjectNodeID, ::StringW instancedObjectPath);

  /// @brief Method DestroyAllData, addr 0x255cbe8, size 0x134, virtual false, abstract: false, final false
  inline void DestroyAllData();

  /// @brief Method DestroyAttributesStore, addr 0x255cde8, size 0xd8, virtual false, abstract: false, final false
  inline void DestroyAttributesStore();

  /// @brief Method DestroyPart, addr 0x2558980, size 0x2c, virtual false, abstract: false, final false
  static inline void DestroyPart(::HoudiniEngineUnity::HEU_PartData* part);

  /// @brief Method DestroyParts, addr 0x2562cb8, size 0xd4, virtual false, abstract: false, final false
  static inline void DestroyParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* parts);

  /// @brief Method GenerateAttributesStore, addr 0x255e8fc, size 0xb4, virtual false, abstract: false, final false
  inline void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateInstancesFromObject, addr 0x255e398, size 0x300, virtual false, abstract: false, final false
  inline void GenerateInstancesFromObject(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_ObjectNode* sourceObject,
                                          ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes);

  /// @brief Method GenerateInstancesFromObjectID, addr 0x255b324, size 0x3d4, virtual false, abstract: false, final false
  inline void GenerateInstancesFromObjectID(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t objectNodeID, ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes);

  /// @brief Method GenerateInstancesFromObjectIds, addr 0x255a094, size 0x600, virtual false, abstract: false, final false
  inline void GenerateInstancesFromObjectIds(::HoudiniEngineUnity::HEU_SessionBase* session, ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes);

  /// @brief Method GenerateInstancesFromUnityAssetPathAttribute, addr 0x255a694, size 0xc90, virtual false, abstract: false, final false
  inline void GenerateInstancesFromUnityAssetPathAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW unityInstanceAttr);

  /// @brief Method GenerateMesh, addr 0x2558594, size 0x3ec, virtual false, abstract: false, final false
  inline bool GenerateMesh(::HoudiniEngineUnity::HEU_SessionBase* session, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups);

  /// @brief Method GeneratePartInstances, addr 0x255d78c, size 0x738, virtual false, abstract: false, final false
  inline void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetClonableObjects, addr 0x255d278, size 0x100, virtual false, abstract: false, final false
  inline void GetClonableObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* clonableObjects);

  /// @brief Method GetClonableParts, addr 0x255d378, size 0xf8, virtual false, abstract: false, final false
  inline void GetClonableParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* clonableParts);

  /// @brief Method GetCurve, addr 0x255e9b0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_Curve> GetCurve(bool bEditableOnly);

  /// @brief Method GetDebugInfo, addr 0x255d028, size 0x22c, virtual false, abstract: false, final false
  inline void GetDebugInfo(::System::Text::StringBuilder* sb);

  /// @brief Method GetHDAPartWithGameObject, addr 0x255d628, size 0x84, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> GetHDAPartWithGameObject(::UnityEngine::GameObject* inGameObject);

  /// @brief Method GetObjectInstanceInfoWithObjectID, addr 0x255dec4, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> GetObjectInstanceInfoWithObjectID(int32_t objNodeID);

  /// @brief Method GetObjectInstanceInfoWithObjectPath, addr 0x255e698, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> GetObjectInstanceInfoWithObjectPath(::StringW path);

  /// @brief Method GetObjectInstanceInfos, addr 0x2562a94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* GetObjectInstanceInfos();

  /// @brief Method GetOutput, addr 0x255d570, size 0xb8, virtual false, abstract: false, final false
  inline void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);

  /// @brief Method GetOutputGameObjects, addr 0x255d470, size 0x100, virtual false, abstract: false, final false
  inline void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method GetPartPointCount, addr 0x255c780, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPartPointCount();

  /// @brief Method GetVolumeLayerName, addr 0x255cbe0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetVolumeLayerName();

  /// @brief Method HaveInstancesBeenGenerated, addr 0x255c7cc, size 0x8, virtual false, abstract: false, final false
  inline bool HaveInstancesBeenGenerated();

  /// @brief Method Initialize, addr 0x255c888, size 0x1e4, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID, int32_t geoID, int32_t objectNodeID, ::HoudiniEngineUnity::HEU_GeoNode* geoNode,
                         ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, ::HoudiniEngineUnity::__HEU_PartData__PartOutputType partOutputType, bool isEditable, bool isObjectInstancer,
                         bool isAttribInstancer);

  /// @brief Method IsAttribInstancer, addr 0x255c744, size 0x8, virtual false, abstract: false, final false
  inline bool IsAttribInstancer();

  /// @brief Method IsEquivalentTo, addr 0x2562d8c, size 0x588, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_PartData* other);

  /// @brief Method IsInstancerAnyType, addr 0x255c74c, size 0x2c, virtual false, abstract: false, final false
  inline bool IsInstancerAnyType();

  /// @brief Method IsObjectInstancer, addr 0x255c788, size 0x8, virtual false, abstract: false, final false
  inline bool IsObjectInstancer();

  /// @brief Method IsPartCurve, addr 0x255c7a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsPartCurve();

  /// @brief Method IsPartEditable, addr 0x255c7c4, size 0x8, virtual false, abstract: false, final false
  inline bool IsPartEditable();

  /// @brief Method IsPartInstanced, addr 0x255c778, size 0x8, virtual false, abstract: false, final false
  inline bool IsPartInstanced();

  /// @brief Method IsPartInstancer, addr 0x255c734, size 0x10, virtual false, abstract: false, final false
  inline bool IsPartInstancer();

  /// @brief Method IsPartMesh, addr 0x255c7b4, size 0x10, virtual false, abstract: false, final false
  inline bool IsPartMesh();

  /// @brief Method IsPartVolume, addr 0x255a084, size 0x10, virtual false, abstract: false, final false
  inline bool IsPartVolume();

  /// @brief Method IsUsingMaterial, addr 0x255d254, size 0x24, virtual false, abstract: false, final false
  inline bool IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData);

  static inline ::HoudiniEngineUnity::HEU_PartData* New_ctor();

  /// @brief Method PopulateObjectInstanceInfos, addr 0x255bcc4, size 0x58, virtual false, abstract: false, final false
  inline void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* objInstanceInfos);

  /// @brief Method ProcessCurvePart, addr 0x2561bc0, size 0x138, virtual false, abstract: false, final false
  inline void ProcessCurvePart(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SetColliderState, addr 0x255ec50, size 0x1c, virtual false, abstract: false, final false
  inline void SetColliderState(bool bEnabled);

  /// @brief Method SetGameObject, addr 0x255cbb4, size 0x24, virtual false, abstract: false, final false
  inline void SetGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method SetGameObjectName, addr 0x255ca6c, size 0x148, virtual false, abstract: false, final false
  inline void SetGameObjectName(::StringW partName);

  /// @brief Method SetObjectInstanceInfos, addr 0x2562928, size 0x16c, virtual false, abstract: false, final false
  inline void SetObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* sourceObjectInstanceInfos);

  /// @brief Method SetObjectInstancer, addr 0x255d6ac, size 0xc, virtual false, abstract: false, final false
  inline void SetObjectInstancer(bool bObjectInstancer);

  /// @brief Method SetTerrainData, addr 0x2562aa8, size 0x1a0, virtual false, abstract: false, final false
  inline void SetTerrainData(::UnityEngine::TerrainData* terrainData, ::StringW exportPathRelative, ::StringW exportPathUser);

  /// @brief Method SetTerrainOffsetPosition, addr 0x2562a9c, size 0xc, virtual false, abstract: false, final false
  inline void SetTerrainOffsetPosition(::UnityEngine::Vector3 offsetPosition);

  /// @brief Method SetVisiblity, addr 0x255ea48, size 0x1d8, virtual false, abstract: false, final false
  inline void SetVisiblity(bool bVisibility);

  /// @brief Method SetVolumeLayerName, addr 0x255cbd8, size 0x8, virtual false, abstract: false, final false
  inline void SetVolumeLayerName(::StringW name);

  /// @brief Method SetupAttributeGeometry, addr 0x2558b00, size 0xcc, virtual false, abstract: false, final false
  inline void SetupAttributeGeometry(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SyncAttributesStore, addr 0x2561cf8, size 0x128, virtual false, abstract: false, final false
  inline void SyncAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method ToString, addr 0x2562c48, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__assetDBTerrainData() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__assetDBTerrainData();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> const& __cordl_internal_get__attributesStore() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>& __cordl_internal_get__attributesStore();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Curve> const& __cordl_internal_get__curve() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Curve>& __cordl_internal_get__curve();

  constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput*& __cordl_internal_get__generatedOutput();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeneratedOutput*> const& __cordl_internal_get__generatedOutput() const;

  constexpr int32_t const& __cordl_internal_get__geoID() const;

  constexpr int32_t& __cordl_internal_get__geoID();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> const& __cordl_internal_get__geoNode() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_GeoNode>& __cordl_internal_get__geoNode();

  constexpr bool const& __cordl_internal_get__haveInstancesBeenGenerated() const;

  constexpr bool& __cordl_internal_get__haveInstancesBeenGenerated();

  constexpr bool const& __cordl_internal_get__isAttribInstancer() const;

  constexpr bool& __cordl_internal_get__isAttribInstancer();

  constexpr bool const& __cordl_internal_get__isObjectInstancer() const;

  constexpr bool& __cordl_internal_get__isObjectInstancer();

  constexpr bool const& __cordl_internal_get__isPartEditable() const;

  constexpr bool& __cordl_internal_get__isPartEditable();

  constexpr bool const& __cordl_internal_get__isPartInstanced() const;

  constexpr bool& __cordl_internal_get__isPartInstanced();

  constexpr int32_t const& __cordl_internal_get__meshVertexCount() const;

  constexpr int32_t& __cordl_internal_get__meshVertexCount();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*& __cordl_internal_get__objectInstanceInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*> const&
  __cordl_internal_get__objectInstanceInfos() const;

  constexpr bool const& __cordl_internal_get__objectInstancesGenerated() const;

  constexpr bool& __cordl_internal_get__objectInstancesGenerated();

  constexpr int32_t const& __cordl_internal_get__objectNodeID() const;

  constexpr int32_t& __cordl_internal_get__objectNodeID();

  constexpr int32_t const& __cordl_internal_get__partID() const;

  constexpr int32_t& __cordl_internal_get__partID();

  constexpr ::StringW const& __cordl_internal_get__partName() const;

  constexpr ::StringW& __cordl_internal_get__partName();

  constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType const& __cordl_internal_get__partOutputType() const;

  constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType& __cordl_internal_get__partOutputType();

  constexpr int32_t const& __cordl_internal_get__partPointCount() const;

  constexpr int32_t& __cordl_internal_get__partPointCount();

  constexpr ::HoudiniEngineUnity::HAPI_PartType const& __cordl_internal_get__partType() const;

  constexpr ::HoudiniEngineUnity::HAPI_PartType& __cordl_internal_get__partType();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__terrainOffsetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__terrainOffsetPosition();

  constexpr ::StringW const& __cordl_internal_get__volumeLayerName() const;

  constexpr ::StringW& __cordl_internal_get__volumeLayerName();

  constexpr void __cordl_internal_set__assetDBTerrainData(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set__attributesStore(::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> value);

  constexpr void __cordl_internal_set__curve(::UnityW<::HoudiniEngineUnity::HEU_Curve> value);

  constexpr void __cordl_internal_set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* value);

  constexpr void __cordl_internal_set__geoID(int32_t value);

  constexpr void __cordl_internal_set__geoNode(::UnityW<::HoudiniEngineUnity::HEU_GeoNode> value);

  constexpr void __cordl_internal_set__haveInstancesBeenGenerated(bool value);

  constexpr void __cordl_internal_set__isAttribInstancer(bool value);

  constexpr void __cordl_internal_set__isObjectInstancer(bool value);

  constexpr void __cordl_internal_set__isPartEditable(bool value);

  constexpr void __cordl_internal_set__isPartInstanced(bool value);

  constexpr void __cordl_internal_set__meshVertexCount(int32_t value);

  constexpr void __cordl_internal_set__objectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* value);

  constexpr void __cordl_internal_set__objectInstancesGenerated(bool value);

  constexpr void __cordl_internal_set__objectNodeID(int32_t value);

  constexpr void __cordl_internal_set__partID(int32_t value);

  constexpr void __cordl_internal_set__partName(::StringW value);

  constexpr void __cordl_internal_set__partOutputType(::HoudiniEngineUnity::__HEU_PartData__PartOutputType value);

  constexpr void __cordl_internal_set__partPointCount(int32_t value);

  constexpr void __cordl_internal_set__partType(::HoudiniEngineUnity::HAPI_PartType value);

  constexpr void __cordl_internal_set__terrainOffsetPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__volumeLayerName(::StringW value);

  /// @brief Method .ctor, addr 0x255c808, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GeneratedOutput, addr 0x255c7dc, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_GeneratedOutput* get_GeneratedOutput();

  /// @brief Method get_MeshVertexCount, addr 0x255c7d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MeshVertexCount();

  /// @brief Method get_ObjectInstancesBeenGenerated, addr 0x255c790, size 0x8, virtual false, abstract: false, final false
  inline bool get_ObjectInstancesBeenGenerated();

  /// @brief Method get_OutputGameObject, addr 0x255c7e4, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_OutputGameObject();

  /// @brief Method get_ParentAsset, addr 0x255c6ac, size 0x88, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> get_ParentAsset();

  /// @brief Method get_ParentGeoNode, addr 0x255c6a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> get_ParentGeoNode();

  /// @brief Method get_PartID, addr 0x255c694, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PartID();

  /// @brief Method get_PartName, addr 0x255c69c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PartName();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_PartData__() noexcept;

  /// @brief Method set_ObjectInstancesBeenGenerated, addr 0x255c798, size 0xc, virtual false, abstract: false, final false
  inline void set_ObjectInstancesBeenGenerated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PartData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PartData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PartData(HEU_PartData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PartData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PartData(HEU_PartData const&) = delete;

  /// @brief Field _partID, offset: 0x18, size: 0x4, def value: None
  int32_t ____partID;

  /// @brief Field _partName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____partName;

  /// @brief Field _objectNodeID, offset: 0x28, size: 0x4, def value: None
  int32_t ____objectNodeID;

  /// @brief Field _geoID, offset: 0x2c, size: 0x4, def value: None
  int32_t ____geoID;

  /// @brief Field _partType, offset: 0x30, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_PartType ____partType;

  /// @brief Field _geoNode, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> ____geoNode;

  /// @brief Field _isAttribInstancer, offset: 0x40, size: 0x1, def value: None
  bool ____isAttribInstancer;

  /// @brief Field _isPartInstanced, offset: 0x41, size: 0x1, def value: None
  bool ____isPartInstanced;

  /// @brief Field _partPointCount, offset: 0x44, size: 0x4, def value: None
  int32_t ____partPointCount;

  /// @brief Field _isObjectInstancer, offset: 0x48, size: 0x1, def value: None
  bool ____isObjectInstancer;

  /// @brief Field _objectInstancesGenerated, offset: 0x49, size: 0x1, def value: None
  bool ____objectInstancesGenerated;

  /// @brief Field _objectInstanceInfos, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* ____objectInstanceInfos;

  /// @brief Field _terrainOffsetPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____terrainOffsetPosition;

  /// @brief Field _assetDBTerrainData, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ____assetDBTerrainData;

  /// @brief Field _isPartEditable, offset: 0x70, size: 0x1, def value: None
  bool ____isPartEditable;

  /// @brief Field _partOutputType, offset: 0x74, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_PartData__PartOutputType ____partOutputType;

  /// @brief Field _curve, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_Curve> ____curve;

  /// @brief Field _attributesStore, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> ____attributesStore;

  /// @brief Field _haveInstancesBeenGenerated, offset: 0x88, size: 0x1, def value: None
  bool ____haveInstancesBeenGenerated;

  /// @brief Field _meshVertexCount, offset: 0x8c, size: 0x4, def value: None
  int32_t ____meshVertexCount;

  /// @brief Field _generatedOutput, offset: 0x90, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_GeneratedOutput* ____generatedOutput;

  /// @brief Field _volumeLayerName, offset: 0x98, size: 0x8, def value: None
  ::StringW ____volumeLayerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PartData, 0xa0>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____partID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____partName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____objectNodeID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____geoID) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____partType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____geoNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____isAttribInstancer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____isPartInstanced) == 0x41, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____partPointCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____isObjectInstancer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____objectInstancesGenerated) == 0x49, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____objectInstanceInfos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____terrainOffsetPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____assetDBTerrainData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____isPartEditable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____partOutputType) == 0x74, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____curve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____attributesStore) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____haveInstancesBeenGenerated) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____meshVertexCount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____generatedOutput) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PartData, ____volumeLayerName) == 0x98, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PartData__PartOutputType, "HoudiniEngineUnity", "HEU_PartData/PartOutputType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PartData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PartData*, "HoudiniEngineUnity", "HEU_PartData");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_PartData____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PartData____c*, "HoudiniEngineUnity", "HEU_PartData/<>c");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0*, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass86_0");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0*, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass88_0");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1*, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass88_1");
