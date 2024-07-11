#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeneralUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GeneralUtility)
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_Handle;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct TransformData;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_GeneralUtility__GetArray1ArgDel_1;
}
namespace HoudiniEngineUnity {
template <typename ARG2, typename T> class __HEU_GeneralUtility__GetArray2ArgDel_2;
}
namespace HoudiniEngineUnity {
template <typename ARG3, typename ARG2, typename T> class __HEU_GeneralUtility__GetArray3ArgDel_3;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_GeneralUtility__SetAttributeArrayFunc_1;
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
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
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
class Object;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeneralUtility;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_GeneralUtility__GetArray1ArgDel_1;
}
namespace HoudiniEngineUnity {
template <typename ARG2, typename T> class __HEU_GeneralUtility__GetArray2ArgDel_2;
}
namespace HoudiniEngineUnity {
template <typename ARG3, typename ARG2, typename T> class __HEU_GeneralUtility__GetArray3ArgDel_3;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_GeneralUtility__SetAttributeArrayFunc_1;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeneralUtility);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1);
// Type: ::GetArray1ArgDel`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t arg1, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t length, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(int32_t arg1, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t length);

  static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GeneralUtility__GetArray1ArgDel_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename ARG2, typename T>
// Is value type: false
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t length, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t length);

  static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GeneralUtility__GetArray2ArgDel_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename ARG3, typename ARG2, typename T>
// Is value type: false
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t length, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t length);

  static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3, ARG2, T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GeneralUtility__GetArray3ArgDel_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T, ::Array<T>*>> items, int32_t start,
                                             int32_t end, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> info, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T, ::Array<T>*>> items, int32_t start, int32_t end);

  static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GeneralUtility__GetAttributeArrayInputFunc_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: ::SetAttributeArrayFunc`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HEU_GeneralUtility::SetAttributeArrayFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__SetAttributeArrayFunc_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T, ::Array<T>*> items, int32_t start,
                                             int32_t end, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T, ::Array<T>*> items, int32_t start, int32_t end);

  static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_GeneralUtility__SetAttributeArrayFunc_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_GeneralUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_GeneralUtility*
class CORDL_TYPE HEU_GeneralUtility : public ::System::Object {
public:
  // Declarations
  template <typename T> using GetArray1ArgDel_1 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>;

  template <typename ARG2, typename T> using GetArray2ArgDel_2 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>;

  template <typename ARG3, typename ARG2, typename T> using GetArray3ArgDel_3 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3, ARG2, T>;

  template <typename T> using GetAttributeArrayInputFunc_1 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>;

  template <typename T> using SetAttributeArrayFunc_1 = ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>;

  /// @brief Method ApplyTransformTo, addr 0x25c4fc0, size 0xd4, virtual false, abstract: false, final false
  static inline void ApplyTransformTo(::UnityEngine::Transform* src, ::UnityEngine::Transform* target);

  /// @brief Method AssignUnityLayer, addr 0x25c78d4, size 0x258, virtual false, abstract: false, final false
  static inline void AssignUnityLayer(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::UnityEngine::GameObject* gameObject);

  /// @brief Method AssignUnityTag, addr 0x25c75fc, size 0x2d8, virtual false, abstract: false, final false
  static inline void AssignUnityTag(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::UnityEngine::GameObject* gameObject);

  /// @brief Method AttachScriptWithInvokeFunction, addr 0x25c8958, size 0x550, virtual false, abstract: false, final false
  static inline void AttachScriptWithInvokeFunction(::StringW scriptSet, ::UnityEngine::GameObject* gameObject);

  /// @brief Method BiLerpf, addr 0x25c9d08, size 0x48, virtual false, abstract: false, final false
  static inline float_t BiLerpf(float_t p00, float_t p10, float_t p01, float_t p11, float_t fracX, float_t fracY);

  /// @brief Method CheckAttributeExists, addr 0x25c4900, size 0x50, virtual false, abstract: false, final false
  static inline bool CheckAttributeExists(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attribName, ::HoudiniEngineUnity::HAPI_AttributeOwner attribOwner);

  /// @brief Method ColorToString, addr 0x25c6eb8, size 0x1f0, virtual false, abstract: false, final false
  static inline ::StringW ColorToString(::UnityEngine::Color c);

  /// @brief Method CopyComponents, addr 0x25c93a4, size 0x4, virtual false, abstract: false, final false
  static inline void CopyComponents(::UnityEngine::GameObject* srcGO, ::UnityEngine::GameObject* destGO);

  /// @brief Method CopyFlags, addr 0x25c7494, size 0x68, virtual false, abstract: false, final false
  static inline void CopyFlags(::UnityEngine::GameObject* srcGO, ::UnityEngine::GameObject* dstGO, bool bIncludeChildren);

  /// @brief Method CopyHAPITransform, addr 0x25c9854, size 0x94, virtual false, abstract: false, final false
  static inline void CopyHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform> src, ByRef<::HoudiniEngineUnity::HAPI_Transform> dest);

  /// @brief Method CopyLocalTransformValues, addr 0x25c5094, size 0x68, virtual false, abstract: false, final false
  static inline void CopyLocalTransformValues(::UnityEngine::Transform* src, ::UnityEngine::Transform* dest);

  /// @brief Method CopyWorldTransformValues, addr 0x25c4f58, size 0x68, virtual false, abstract: false, final false
  static inline void CopyWorldTransformValues(::UnityEngine::Transform* src, ::UnityEngine::Transform* dest);

  /// @brief Method CreateOutputAttribute, addr 0x25c4bf4, size 0x2e4, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_OutputAttribute* CreateOutputAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                                 ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo);

  /// @brief Method CreateOutputAttributeHelper, addr 0x25c4ed8, size 0x80, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_OutputAttribute* CreateOutputAttributeHelper(::StringW attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo);

  /// @brief Method DestroyBakedGameObjects, addr 0x25c601c, size 0x8, virtual false, abstract: false, final false
  static inline void DestroyBakedGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* gameObjectsToDestroy);

  /// @brief Method DestroyBakedGameObjectsWithEndName, addr 0x25c6024, size 0x140, virtual false, abstract: false, final false
  static inline void DestroyBakedGameObjectsWithEndName(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* gameObjectsToDestroy, ::StringW endName);

  /// @brief Method DestroyComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DestroyComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method DestroyGeneratedComponents, addr 0x25c5c4c, size 0x120, virtual false, abstract: false, final false
  static inline void DestroyGeneratedComponents(::UnityEngine::GameObject* gameObject);

  /// @brief Method DestroyGeneratedMaterial, addr 0x25c68b8, size 0x134, virtual false, abstract: false, final false
  static inline void DestroyGeneratedMaterial(::UnityEngine::Material* material);

  /// @brief Method DestroyGeneratedMeshComponents, addr 0x25c5d6c, size 0xb8, virtual false, abstract: false, final false
  static inline void DestroyGeneratedMeshComponents(::UnityEngine::GameObject* gameObject);

  /// @brief Method DestroyGeneratedMeshMaterialsLODGroups, addr 0x25c6164, size 0x26c, virtual false, abstract: false, final false
  static inline void DestroyGeneratedMeshMaterialsLODGroups(::UnityEngine::GameObject* targetGO, bool bDontDeletePersistantResources);

  /// @brief Method DestroyImmediate, addr 0x25c5fd8, size 0x44, virtual false, abstract: false, final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj, bool bAllowDestroyingAssets, bool bRegisterUndo);

  /// @brief Method DestroyLODGroup, addr 0x25c63d0, size 0x1ec, virtual false, abstract: false, final false
  static inline void DestroyLODGroup(::UnityEngine::GameObject* targetGO, bool bDontDeletePersistantResources);

  /// @brief Method DestroyMeshCollider, addr 0x25c69ec, size 0x134, virtual false, abstract: false, final false
  static inline void DestroyMeshCollider(::UnityEngine::MeshCollider* meshCollider, bool bDontDeletePersistantResources);

  /// @brief Method DestroyTerrainComponents, addr 0x25c5e24, size 0x1b4, virtual false, abstract: false, final false
  static inline void DestroyTerrainComponents(::UnityEngine::GameObject* gameObject);

  /// @brief Method DoArrayElementsMatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool DoArrayElementsMatch(::ArrayW<T, ::Array<T>*> array1, ::ArrayW<T, ::Array<T>*> array2);

  /// @brief Method DoArrayElementsMatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool DoArrayElementsMatch(::ArrayW<T, ::Array<T>*> array1, int32_t startOffset1, ::ArrayW<T, ::Array<T>*> array2, int32_t startOffset2, int32_t length);

  /// @brief Method DoesUnityTagExist, addr 0x25c72cc, size 0x8, virtual false, abstract: false, final false
  static inline bool DoesUnityTagExist(::StringW tagName);

  /// @brief Method FindOrGenerateHandles, addr 0x25c8f40, size 0x464, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*
  FindOrGenerateHandles(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_AssetInfo> assetInfo, int32_t assetID, ::StringW assetName,
                        ::HoudiniEngineUnity::HEU_Parameters* parameters, ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* currentHandles);

  /// @brief Method Fractionalf, addr 0x25c9d50, size 0xc, virtual false, abstract: false, final false
  static inline float_t Fractionalf(float_t value);

  /// @brief Method GetArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ARG3, typename ARG2, typename T>
  static inline bool GetArray(int32_t arg1, ARG2 arg2, ARG3 arg3, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>* func1,
                              ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>* func2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3, ARG2, T>* func3,
                              ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t count, int32_t tupleSize);

  /// @brief Method GetArray1Arg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool GetArray1Arg(int32_t arg1, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>* func, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t count);

  /// @brief Method GetArray2Arg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ARG2, typename T>
  static inline bool GetArray2Arg(int32_t arg1, ARG2 arg2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>* func, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start,
                                  int32_t count);

  /// @brief Method GetArray3Arg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ARG3, typename ARG2, typename T>
  static inline bool GetArray3Arg(int32_t arg1, ARG2 arg2, ARG3 arg3, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3, ARG2, T>* func, ByRef<::ArrayW<T, ::Array<T>*>> data,
                                  int32_t start, int32_t count);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool GetAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> info,
                                  ByRef<::ArrayW<T, ::Array<T>*>> data, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>* getFunc);

  /// @brief Method GetAttributeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool GetAttributeArray(int32_t geoID, int32_t partID, ::StringW name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> info, ::ArrayW<T, ::Array<T>*> items,
                                       ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>* getFunc, int32_t count);

  /// @brief Method GetAttributeColorSingle, addr 0x25c86e8, size 0x1cc, virtual false, abstract: false, final false
  static inline bool GetAttributeColorSingle(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::UnityEngine::Color> value);

  /// @brief Method GetAttributeFloatSingle, addr 0x25c8428, size 0x160, virtual false, abstract: false, final false
  static inline bool GetAttributeFloatSingle(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<float_t> value);

  /// @brief Method GetAttributeInfo, addr 0x25c4950, size 0x94, virtual false, abstract: false, final false
  static inline bool GetAttributeInfo(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attribName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo);

  /// @brief Method GetAttributeIntSingle, addr 0x25c8588, size 0x160, virtual false, abstract: false, final false
  static inline bool GetAttributeIntSingle(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<int32_t> value);

  /// @brief Method GetAttributeStrict, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool GetAttributeStrict(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HAPI_AttributeOwner attrOwner, ::StringW name,
                                        ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T, ::Array<T>*>> data,
                                        ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>* getFunc);

  /// @brief Method GetAttributeStringData, addr 0x25c47cc, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAttributeStringData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW name,
                                                                                ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo);

  /// @brief Method GetAttributeStringDataHelper, addr 0x25c45f8, size 0x1d4, virtual false, abstract: false, final false
  static inline void GetAttributeStringDataHelper(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> info,
                                                  ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> data);

  /// @brief Method GetAttributeStringValueSingle, addr 0x25c7e04, size 0x2a4, virtual false, abstract: false, final false
  static inline ::StringW GetAttributeStringValueSingle(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                        ::HoudiniEngineUnity::HAPI_AttributeOwner attrOwner);

  /// @brief Method GetAttributeStringValueSingleStrict, addr 0x25c80a8, size 0x380, virtual false, abstract: false, final false
  static inline ::StringW GetAttributeStringValueSingleStrict(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                              ::HoudiniEngineUnity::HAPI_AttributeOwner attrOwner);

  /// @brief Method GetChildGameObjects, addr 0x25c50fc, size 0x3a0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetChildGameObjects(::UnityEngine::GameObject* parentGO);

  /// @brief Method GetChildGameObjectsWithNamePattern, addr 0x25c549c, size 0x420, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetChildGameObjectsWithNamePattern(::UnityEngine::GameObject* parentGO, ::StringW pattern, bool bExclude);

  /// @brief Method GetGameObjectByName, addr 0x25c5954, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetGameObjectByName(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* goList, ::StringW name);

  /// @brief Method GetGameObjectByNameInProjectOnly, addr 0x25c5adc, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetGameObjectByNameInProjectOnly(::StringW name);

  /// @brief Method GetGameObjectByNameInScene, addr 0x25c5bb4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetGameObjectByNameInScene(::StringW name);

  /// @brief Method GetHDAByGameObjectNameInScene, addr 0x25c5c00, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot> GetHDAByGameObjectNameInScene(::StringW name);

  /// @brief Method GetInstanceChildObjects, addr 0x25c58bc, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetInstanceChildObjects(::UnityEngine::GameObject* parentGO);

  /// @brief Method GetLODTransforms, addr 0x25c65bc, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* GetLODTransforms(::UnityEngine::GameObject* targetGO);

  /// @brief Method GetMaterialAttributeValueFromPart, addr 0x25c98e8, size 0x178, virtual false, abstract: false, final false
  static inline ::StringW GetMaterialAttributeValueFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID);

  /// @brief Method GetNonInstanceChildObjects, addr 0x25c5908, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetNonInstanceChildObjects(::UnityEngine::GameObject* parentGO);

  /// @brief Method GetOrCreateComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrCreateComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method GetPrefabFromPath, addr 0x25c9f40, size 0x250, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetPrefabFromPath(::StringW path);

  /// @brief Method GetRawOperatorName, addr 0x25c9ee8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetRawOperatorName(::StringW assetOpName);

  /// @brief Method GetSystemTypeByName, addr 0x25c75b0, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Type* GetSystemTypeByName(::StringW typeName);

  /// @brief Method GetUnityScriptAttributeValue, addr 0x25c7c9c, size 0x168, virtual false, abstract: false, final false
  static inline ::StringW GetUnityScriptAttributeValue(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID);

  /// @brief Method HasAttribute, addr 0x25c88b4, size 0xa4, virtual false, abstract: false, final false
  static inline bool HasAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner attrOwner);

  /// @brief Method HasValidInstanceAttribute, addr 0x25c49e4, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasValidInstanceAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attribName);

  /// @brief Method IsGameObjectInProject, addr 0x25c5bac, size 0x8, virtual false, abstract: false, final false
  static inline bool IsGameObjectInProject(::UnityEngine::GameObject* go);

  /// @brief Method IsInCameraView, addr 0x25c8ea8, size 0x98, virtual false, abstract: false, final false
  static inline bool IsInCameraView(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 point);

  /// @brief Method IsMouseOverRect, addr 0x25c756c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsMouseOverRect(::UnityEngine::Camera* camera, ::UnityEngine::Vector2 mousePosition, ByRef<::UnityEngine::Rect> rect);

  /// @brief Method IsMouseWithinSceneView, addr 0x25c74fc, size 0x70, virtual false, abstract: false, final false
  static inline bool IsMouseWithinSceneView(::UnityEngine::Camera* camera, ::UnityEngine::Vector2 mousePosition);

  /// @brief Method LoadTextureFromFile, addr 0x25c93a8, size 0x1f4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> LoadTextureFromFile(::StringW filePath);

  /// @brief Method LongestCommonPrefix, addr 0x25c9d5c, size 0x18c, virtual false, abstract: false, final false
  static inline ::StringW LongestCommonPrefix(::System::Collections::Generic::List_1<::StringW>* list);

  /// @brief Method MakeStaticIfHasAttribute, addr 0x25c7b2c, size 0x170, virtual false, abstract: false, final false
  static inline void MakeStaticIfHasAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::UnityEngine::GameObject* gameObject);

  /// @brief Method MakeTexture, addr 0x25c959c, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> MakeTexture(int32_t width, int32_t height, ::UnityEngine::Color color);

  static inline ::HoudiniEngineUnity::HEU_GeneralUtility* New_ctor();

  /// @brief Method ReplaceColliderMeshFromMeshCollider, addr 0x25c9bb8, size 0x150, virtual false, abstract: false, final false
  static inline void ReplaceColliderMeshFromMeshCollider(::UnityEngine::GameObject* targetGO, ::UnityEngine::GameObject* sourceColliderGO);

  /// @brief Method ReplaceColliderMeshFromMeshFilter, addr 0x25c9a60, size 0x158, virtual false, abstract: false, final false
  static inline void ReplaceColliderMeshFromMeshFilter(::UnityEngine::GameObject* targetGO, ::UnityEngine::GameObject* sourceColliderGO);

  /// @brief Method ReplaceFirstOccurrence, addr 0x25c96d0, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW ReplaceFirstOccurrence(::StringW srcStr, ::StringW searchStr, ::StringW replaceStr);

  /// @brief Method SetArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ARG2, typename T>
  static inline bool SetArray(int32_t arg1, ARG2 arg2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>* func1,
                              ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>* func2, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t count, int32_t tupleSize);

  /// @brief Method SetArray1Arg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool SetArray1Arg(int32_t arg1, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>* func, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start, int32_t count);

  /// @brief Method SetArray2Arg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ARG2, typename T>
  static inline bool SetArray2Arg(int32_t arg1, ARG2 arg2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>* func, ByRef<::ArrayW<T, ::Array<T>*>> data, int32_t start,
                                  int32_t count);

  /// @brief Method SetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool SetAttribute(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T, ::Array<T>*> items,
                                  ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>* setFunc);

  /// @brief Method SetAttributeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool SetAttributeArray(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T, ::Array<T>*> items,
                                       ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>* setFunc, int32_t count);

  /// @brief Method SetGameObjectChildrenColliderState, addr 0x25c6dd0, size 0xe8, virtual false, abstract: false, final false
  static inline void SetGameObjectChildrenColliderState(::UnityEngine::GameObject* gameObject, bool bVisible);

  /// @brief Method SetGameObjectChildrenRenderVisibility, addr 0x25c6c04, size 0xe8, virtual false, abstract: false, final false
  static inline void SetGameObjectChildrenRenderVisibility(::UnityEngine::GameObject* gameObject, bool bVisible);

  /// @brief Method SetGameObjectColliderState, addr 0x25c6cec, size 0xe4, virtual false, abstract: false, final false
  static inline void SetGameObjectColliderState(::UnityEngine::GameObject* gameObject, bool bEnabled);

  /// @brief Method SetGameObjectRenderVisiblity, addr 0x25c6b20, size 0xe4, virtual false, abstract: false, final false
  static inline void SetGameObjectRenderVisiblity(::UnityEngine::GameObject* gameObject, bool bVisible);

  /// @brief Method SetLODTransformValues, addr 0x25c6774, size 0x144, virtual false, abstract: false, final false
  static inline void SetLODTransformValues(::UnityEngine::GameObject* targetGO, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* transformData);

  /// @brief Method SetLayer, addr 0x25c72d4, size 0xe0, virtual false, abstract: false, final false
  static inline void SetLayer(::UnityEngine::GameObject* rootGO, int32_t layer, bool bIncludeChildren);

  /// @brief Method SetParentWithCleanTransform, addr 0x25c9764, size 0xf0, virtual false, abstract: false, final false
  static inline void SetParentWithCleanTransform(::UnityEngine::Transform* parentTransform, ::UnityEngine::Transform* childTransform);

  /// @brief Method SetTag, addr 0x25c73b4, size 0xe0, virtual false, abstract: false, final false
  static inline void SetTag(::UnityEngine::GameObject* rootGO, ::StringW tag, bool bIncludeChildren);

  /// @brief Method StringToColor, addr 0x25c70a8, size 0x224, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color StringToColor(::StringW colorString);

  /// @brief Method UpdateGeneratedAttributeStore, addr 0x25c4a20, size 0x1d4, virtual false, abstract: false, final false
  static inline void UpdateGeneratedAttributeStore(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::UnityEngine::GameObject* go);

  /// @brief Method .ctor, addr 0x25ca190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeneralUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeneralUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeneralUtility(HEU_GeneralUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeneralUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeneralUtility(HEU_GeneralUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeneralUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneralUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneralUtility*, "HoudiniEngineUnity", "HEU_GeneralUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray1ArgDel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray2ArgDel`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray3ArgDel`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1, "HoudiniEngineUnity", "HEU_GeneralUtility/GetAttributeArrayInputFunc`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1, "HoudiniEngineUnity", "HEU_GeneralUtility/SetAttributeArrayFunc`1");
