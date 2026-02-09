#pragma once
// IWYU pragma private; include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Object)
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
template<typename T>
class AsyncInstantiateOperation_1;
}
namespace UnityEngine {
struct FindObjectsInactive;
}
namespace UnityEngine {
struct FindObjectsSortMode;
}
namespace UnityEngine {
struct HideFlags;
}
namespace UnityEngine {
struct InstantiateParameters;
}
namespace UnityEngine {
class Object_MarshalledUnityObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Object_MarshalledUnityObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Object);
MARK_REF_PTR_T(::UnityEngine::Object_MarshalledUnityObject);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Object/MarshalledUnityObject
class CORDL_TYPE Object_MarshalledUnityObject : public ::System::Object {
public:
// Declarations
/// @brief Method Marshal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr Marshal(T  obj) ;

/// @brief Method MarshalNotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr MarshalNotNull(T  obj) ;

/// @brief Method TryThrowEditorNullExceptionObject, addr 0x69211f0, size 0x4, virtual false, abstract: false, final false
static inline void TryThrowEditorNullExceptionObject(::UnityEngine::Object*  unityObj, ::StringW  paramterName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Object_MarshalledUnityObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Object_MarshalledUnityObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Object_MarshalledUnityObject(Object_MarshalledUnityObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Object_MarshalledUnityObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Object_MarshalledUnityObject(Object_MarshalledUnityObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10362};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Object_MarshalledUnityObject, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Object
class CORDL_TYPE Object : public ::System::Object {
public:
// Declarations
using MarshalledUnityObject = ::UnityEngine::Object_MarshalledUnityObject;

/// @brief Field OffsetOfInstanceIDInCPlusPlusObject, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OffsetOfInstanceIDInCPlusPlusObject, put=setStaticF_OffsetOfInstanceIDInCPlusPlusObject)) int32_t  OffsetOfInstanceIDInCPlusPlusObject;

 __declspec(property(get=get_hideFlags, put=set_hideFlags)) ::UnityEngine::HideFlags  hideFlags;

/// @brief Field m_CachedPtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedPtr, put=__cordl_internal_set_m_CachedPtr)) ::System::IntPtr  m_CachedPtr;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Method CheckNullArgument, addr 0x691e724, size 0x4c, virtual false, abstract: false, final false
static inline void CheckNullArgument(::System::Object*  arg, ::StringW  message) ;

/// @brief Method CompareBaseObjects, addr 0x691e054, size 0xb0, virtual false, abstract: false, final false
static inline bool CompareBaseObjects(::UnityEngine::Object*  lhs, ::UnityEngine::Object*  rhs) ;

/// @brief Method CurrentThreadIsMainThread, addr 0x691e244, size 0x28, virtual false, abstract: false, final false
static inline bool CurrentThreadIsMainThread() ;

/// @brief Method Destroy, addr 0x691f6a0, size 0x5c, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method Destroy, addr 0x691f59c, size 0xb8, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj, float_t  t) ;

/// @brief Method DestroyImmediate, addr 0x691f7f8, size 0x5c, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyImmediate, addr 0x691f6fc, size 0xb8, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj, bool  allowDestroyingAssets) ;

/// @brief Method DestroyImmediate_Injected, addr 0x691f7b4, size 0x44, virtual false, abstract: false, final false
static inline void DestroyImmediate_Injected(::System::IntPtr  obj, bool  allowDestroyingAssets) ;

/// @brief Method DestroyObject, addr 0x691fd44, size 0x5c, virtual false, abstract: false, final false
static inline void DestroyObject(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyObject, addr 0x691fcdc, size 0x68, virtual false, abstract: false, final false
static inline void DestroyObject(::UnityEngine::Object*  obj, float_t  t) ;

/// @brief Method Destroy_Injected, addr 0x691f654, size 0x4c, virtual false, abstract: false, final false
static inline void Destroy_Injected(::System::IntPtr  obj, float_t  t) ;

/// @brief Method DoesObjectWithInstanceIDExist, addr 0x6920d08, size 0x3c, virtual false, abstract: false, final false
static inline bool DoesObjectWithInstanceIDExist(int32_t  instanceID) ;

/// @brief Method DontDestroyOnLoad, addr 0x691f9f4, size 0xcc, virtual false, abstract: false, final false
static inline void DontDestroyOnLoad(::UnityEngine::Object*  target) ;

/// @brief Method DontDestroyOnLoad_Injected, addr 0x691fac0, size 0x3c, virtual false, abstract: false, final false
static inline void DontDestroyOnLoad_Injected(::System::IntPtr  target) ;

/// @brief Method EnsureRunningOnMainThread, addr 0x691e188, size 0xbc, virtual false, abstract: false, final false
inline void EnsureRunningOnMainThread() ;

/// @brief Method Equals, addr 0x691df54, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method FindAnyObjectByType, addr 0x691ff7c, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindAnyObjectByType(::System::Type*  type) ;

/// @brief Method FindAnyObjectByType, addr 0x6920180, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindAnyObjectByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindAnyObjectByType() ;

/// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindAnyObjectByType(::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindFirstObjectByType, addr 0x691fed4, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindFirstObjectByType(::System::Type*  type) ;

/// @brief Method FindFirstObjectByType, addr 0x69200cc, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindFirstObjectByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindFirstObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindFirstObjectByType() ;

/// @brief Method FindFirstObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindFirstObjectByType(::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindObjectFromInstanceID, addr 0x6920d44, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceID(int32_t  instanceID) ;

/// @brief Method FindObjectFromInstanceID_Injected, addr 0x6920e8c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FindObjectFromInstanceID_Injected(int32_t  instanceID) ;

/// @brief Method FindObjectOfType, addr 0x691fe38, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type*  type) ;

/// @brief Method FindObjectOfType, addr 0x6920024, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindObjectOfType() ;

/// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindObjectOfType(bool  includeInactive) ;

/// @brief Method FindObjectsByType, addr 0x691f9a0, size 0x54, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x691f914, size 0x8c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsByType(::System::Type*  type, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsByType(::UnityEngine::FindObjectsInactive  findObjectsInactive, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsByType(::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsOfType, addr 0x691f854, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfType(::System::Type*  type) ;

/// @brief Method FindObjectsOfType, addr 0x691f8d0, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsOfType() ;

/// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsOfType(bool  includeInactive) ;

/// @brief Method FindObjectsOfTypeAll, addr 0x691fe34, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeAll(::System::Type*  type) ;

/// @brief Method FindObjectsOfTypeIncludingAssets, addr 0x691fdf8, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeIncludingAssets(::System::Type*  type) ;

/// @brief Method FindSceneObjectsOfType, addr 0x691fda0, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindSceneObjectsOfType(::System::Type*  type) ;

/// @brief Method ForceLoadFromInstanceID, addr 0x6920f1c, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> ForceLoadFromInstanceID(int32_t  instanceID) ;

/// @brief Method ForceLoadFromInstanceID_Injected, addr 0x6921064, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr ForceLoadFromInstanceID_Injected(int32_t  instanceID) ;

/// @brief Method GetCachedPtr, addr 0x691e26c, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr GetCachedPtr() ;

/// @brief Method GetHashCode, addr 0x691df40, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInstanceID, addr 0x691decc, size 0x74, virtual false, abstract: false, final false
inline int32_t GetInstanceID() ;

/// @brief Method GetName, addr 0x691e278, size 0x15c, virtual false, abstract: false, final false
inline ::StringW GetName() ;

/// @brief Method GetName_Injected, addr 0x6920b78, size 0x44, virtual false, abstract: false, final false
static inline void GetName_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject, addr 0x69203c4, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetOffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method GetPtrFromInstanceID, addr 0x6920ec8, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetPtrFromInstanceID(int32_t  instanceID, ::System::Type*  objectType, ::ByRef<bool>  isMonoBehaviour) ;

/// @brief Method Instantiate, addr 0x691ecf8, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original) ;

/// @brief Method Instantiate, addr 0x691f1f8, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x691f264, size 0x130, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Instantiate, addr 0x691e568, size 0x1bc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x691e92c, size 0x1ac, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x691ef6c, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::InstantiateParameters  parameters) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::InstantiateParameters  parameters) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::InstantiateParameters  parameters, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>  rotations) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>  rotations, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::InstantiateParameters  parameters, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>  rotations) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>  rotations, ::UnityEngine::InstantiateParameters  parameters, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::InstantiateParameters  parameters, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::InstantiateParameters  parameters, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Internal_CloneSingle, addr 0x691edd0, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingle(::UnityEngine::Object*  data) ;

/// @brief Method Internal_CloneSingleWithParams, addr 0x692046c, size 0x1ac, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParams(::UnityEngine::Object*  data, ::UnityEngine::InstantiateParameters  parameters) ;

/// @brief Method Internal_CloneSingleWithParams_Injected, addr 0x6920618, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_CloneSingleWithParams_Injected(::System::IntPtr  data, ::ByRef<::UnityEngine::InstantiateParameters>  parameters) ;

/// @brief Method Internal_CloneSingleWithParent, addr 0x691f394, size 0x208, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Internal_CloneSingleWithParent_Injected, addr 0x692087c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_CloneSingleWithParent_Injected(::System::IntPtr  data, ::System::IntPtr  parent, bool  worldPositionStays) ;

/// @brief Method Internal_CloneSingleWithScene, addr 0x691f054, size 0x1a4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithScene(::UnityEngine::Object*  data, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method Internal_CloneSingleWithScene_Injected, addr 0x6920428, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_CloneSingleWithScene_Injected(::System::IntPtr  data, ::ByRef<::UnityEngine::SceneManagement::Scene>  scene) ;

/// @brief Method Internal_CloneSingle_Injected, addr 0x69203ec, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_CloneSingle_Injected(::System::IntPtr  data) ;

/// @brief Method Internal_InstantiateAsyncWithParams, addr 0x69208d0, size 0x128, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_InstantiateAsyncWithParams(::UnityEngine::Object*  original, int32_t  count, ::UnityEngine::InstantiateParameters  parameters, ::System::IntPtr  positions, int32_t  positionsCount, ::System::IntPtr  rotations, int32_t  rotationsCount, bool  hasManagedCancellationToken) ;

/// @brief Method Internal_InstantiateAsyncWithParams_Injected, addr 0x69209f8, size 0x8c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_InstantiateAsyncWithParams_Injected(::System::IntPtr  original, int32_t  count, ::ByRef<::UnityEngine::InstantiateParameters>  parameters, ::System::IntPtr  positions, int32_t  positionsCount, ::System::IntPtr  rotations, int32_t  rotationsCount, bool  hasManagedCancellationToken) ;

/// @brief Method Internal_InstantiateSingle, addr 0x691e770, size 0x1bc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle(::UnityEngine::Object*  data, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParams, addr 0x692065c, size 0x1c4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParams(::UnityEngine::Object*  data, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::InstantiateParameters  parameters) ;

/// @brief Method Internal_InstantiateSingleWithParams_Injected, addr 0x6920820, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_InstantiateSingleWithParams_Injected(::System::IntPtr  data, ::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Quaternion>  rotation, ::ByRef<::UnityEngine::InstantiateParameters>  parameters) ;

/// @brief Method Internal_InstantiateSingleWithParent, addr 0x691ead8, size 0x220, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParent_Injected, addr 0x6920ad8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_InstantiateSingleWithParent_Injected(::System::IntPtr  data, ::System::IntPtr  parent, ::ByRef<::UnityEngine::Vector3>  pos, ::ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method Internal_InstantiateSingle_Injected, addr 0x6920a84, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_InstantiateSingle_Injected(::System::IntPtr  data, ::ByRef<::UnityEngine::Vector3>  pos, ::ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method IsNativeObjectAlive, addr 0x691e16c, size 0x1c, virtual false, abstract: false, final false
static inline bool IsNativeObjectAlive(::UnityEngine::Object*  o) ;

/// @brief Method IsPersistent, addr 0x6920bbc, size 0xcc, virtual false, abstract: false, final false
static inline bool IsPersistent(::UnityEngine::Object*  obj) ;

/// @brief Method IsPersistent_Injected, addr 0x6920c88, size 0x3c, virtual false, abstract: false, final false
static inline bool IsPersistent_Injected(::System::IntPtr  obj) ;

/// @brief Method MarkDirty, addr 0x69210a0, size 0xa8, virtual false, abstract: false, final false
inline void MarkDirty() ;

/// @brief Method MarkDirty_Injected, addr 0x6921148, size 0x3c, virtual false, abstract: false, final false
static inline void MarkDirty_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Object* New_ctor() ;

/// @brief Method SetName, addr 0x691e3d8, size 0x190, virtual false, abstract: false, final false
inline void SetName(::StringW  name) ;

/// @brief Method SetName_Injected, addr 0x6920cc4, size 0x44, virtual false, abstract: false, final false
static inline void SetName_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method ToString, addr 0x6920234, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x692028c, size 0x138, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Object*  obj) ;

/// @brief Method ToString_Injected, addr 0x6920b34, size 0x44, virtual false, abstract: false, final false
static inline void ToString_Injected(::System::IntPtr  obj, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_CachedPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_CachedPtr() ;

constexpr void __cordl_internal_set_m_CachedPtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x6914358, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_OffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method get_hideFlags, addr 0x691fafc, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::HideFlags get_hideFlags() ;

/// @brief Method get_hideFlags_Injected, addr 0x691fba4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::HideFlags get_hideFlags_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_name, addr 0x691e274, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method op_Equality, addr 0x691a1b8, size 0x68, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

/// @brief Method op_Implicit, addr 0x691e104, size 0x68, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::UnityEngine::Object*  exists) ;

/// @brief Method op_Inequality, addr 0x6916bf8, size 0x74, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

static inline void setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t  value) ;

/// @brief Method set_hideFlags, addr 0x691fbe0, size 0xb8, virtual false, abstract: false, final false
inline void set_hideFlags(::UnityEngine::HideFlags  value) ;

/// @brief Method set_hideFlags_Injected, addr 0x691fc98, size 0x44, virtual false, abstract: false, final false
static inline void set_hideFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::HideFlags  value) ;

/// @brief Method set_name, addr 0x691e3d4, size 0x4, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Object() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Object(Object && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Object(Object const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10363};

/// @brief Field cloneDestroyedMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  cloneDestroyedMessage{u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake."};

/// @brief Field kInstanceID_None offset 0xffffffff size 0x4
static constexpr int32_t  kInstanceID_None{static_cast<int32_t>(0x0)};

/// @brief Field objectIsNullMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  objectIsNullMessage{u"The Object you want to instantiate is null."};

/// @brief Field m_CachedPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_CachedPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Object, ___m_CachedPtr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Object, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object*, "UnityEngine", "Object");
NEED_NO_BOX(::UnityEngine::Object_MarshalledUnityObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object_MarshalledUnityObject*, "UnityEngine", "Object/MarshalledUnityObject");
