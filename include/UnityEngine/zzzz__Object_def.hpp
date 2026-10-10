#pragma once
// IWYU pragma private; include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
template <typename T> struct ReadOnlySpan_1;
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
template <typename T> class AsyncInstantiateOperation_1;
}
namespace UnityEngine {
struct EntityId;
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
MARK_REF_T(::UnityEngine::Object*);
MARK_REF_T(::UnityEngine::Object_MarshalledUnityObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Object*, "UnityEngine", "Object");
DEFINE_IL2CPP_CLASS(::UnityEngine::Object_MarshalledUnityObject*, "UnityEngine", "Object/MarshalledUnityObject");
// [NativeHeader("Runtime/SceneManager/SceneManager.h")]
// [RequiredByNativeCode(GenerateProxy = true)]
// [NativeHeader("Runtime/GameCode/CloneObject.h")]
// [NativeHeader("Runtime/Export/Scripting/UnityEngineObject.bindings.h")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Object
class CORDL_TYPE Object : public ::System::Object {
public:
  // Declarations
  using MarshalledUnityObject = ::UnityEngine::Object_MarshalledUnityObject;

  /// @brief Field OffsetOfInstanceIDInCPlusPlusObject, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_OffsetOfInstanceIDInCPlusPlusObject, put = setStaticF_OffsetOfInstanceIDInCPlusPlusObject)) int32_t OffsetOfInstanceIDInCPlusPlusObject;

  __declspec(property(get = get_hideFlags, put = set_hideFlags)) ::UnityEngine::HideFlags hideFlags;

  /// @brief Field m_CachedPtr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedPtr, put = __cordl_internal_set_m_CachedPtr)) ::System::IntPtr m_CachedPtr;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  /// @brief Method CheckNullArgument, addr 0x6f43568, size 0x4c, virtual false, abstract: false, final false
  static inline void CheckNullArgument(::System::Object* arg, ::StringW message);

  /// @brief Method CompareBaseObjects, addr 0x6f42ea8, size 0xb0, virtual false, abstract: false, final false
  static inline bool CompareBaseObjects(::UnityEngine::Object* lhs, ::UnityEngine::Object* rhs);

  /// [NativeMethod(Name = "CurrentThreadIsMainThread", IsFreeFunction = true, IsThreadSafe = true)]
  /// @brief Method CurrentThreadIsMainThread, addr 0x6f43098, size 0x28, virtual false, abstract: false, final false
  static inline bool CurrentThreadIsMainThread();

  /// [ExcludeFromDocs]
  /// @brief Method Destroy, addr 0x6f44458, size 0x5c, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// [NativeMethod(Name = "Scripting::DestroyObjectFromScripting", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method Destroy, addr 0x6f44354, size 0xb8, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj, /* [DefaultValue("0.0F")] */ float_t t);

  /// [ExcludeFromDocs]
  /// @brief Method DestroyImmediate, addr 0x6f445b0, size 0x5c, virtual false, abstract: false, final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj);

  /// [NativeMethod(Name = "Scripting::DestroyObjectFromScriptingImmediate", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method DestroyImmediate, addr 0x6f444b4, size 0xb8, virtual false, abstract: false, final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj, /* [DefaultValue("false")] */ bool allowDestroyingAssets);

  /// @brief Method DestroyImmediate_Injected, addr 0x6f4456c, size 0x44, virtual false, abstract: false, final false
  static inline void DestroyImmediate_Injected(::System::IntPtr obj, /* [DefaultValue("false")] */ bool allowDestroyingAssets);

  /// [ExcludeFromDocs]
  /// [Obsolete("use Object.Destroy instead.")]
  /// @brief Method DestroyObject, addr 0x6f44b6c, size 0x5c, virtual false, abstract: false, final false
  static inline void DestroyObject(::UnityEngine::Object* obj);

  /// [Obsolete("use Object.Destroy instead.")]
  /// @brief Method DestroyObject, addr 0x6f44b04, size 0x68, virtual false, abstract: false, final false
  static inline void DestroyObject(::UnityEngine::Object* obj, /* [DefaultValue("0.0F")] */ float_t t);

  /// @brief Method Destroy_Injected, addr 0x6f4440c, size 0x4c, virtual false, abstract: false, final false
  static inline void Destroy_Injected(::System::IntPtr obj, /* [DefaultValue("0.0F")] */ float_t t);

  /// [NativeMethod(Name = "UnityEngineObjectBindings::DoesObjectWithInstanceIDExist", IsFreeFunction = true, IsThreadSafe = true)]
  /// @brief Method DoesObjectWithInstanceIDExist, addr 0x6f45b50, size 0x80, virtual false, abstract: false, final false
  static inline bool DoesObjectWithInstanceIDExist(::UnityEngine::EntityId instanceID);

  /// @brief Method DoesObjectWithInstanceIDExist_Injected, addr 0x6f45bd0, size 0x3c, virtual false, abstract: false, final false
  static inline bool DoesObjectWithInstanceIDExist_Injected(::by_ref<::UnityEngine::EntityId const> instanceID);

  /// [FreeFunction("GetSceneManager().DontDestroyOnLoad", ThrowsException = true)]
  /// @brief Method DontDestroyOnLoad, addr 0x6f447ac, size 0xb8, virtual false, abstract: false, final false
  static inline void DontDestroyOnLoad(/* [NotNull] */ ::UnityEngine::Object* target);

  /// @brief Method DontDestroyOnLoad_Injected, addr 0x6f448b4, size 0x3c, virtual false, abstract: false, final false
  static inline void DontDestroyOnLoad_Injected(::System::IntPtr target);

  /// @brief Method EnsureRunningOnMainThread, addr 0x6f42fdc, size 0xbc, virtual false, abstract: false, final false
  inline void EnsureRunningOnMainThread();

  /// @brief Method Equals, addr 0x6f42d40, size 0x100, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method FindAnyObjectByType, addr 0x6f44da8, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindAnyObjectByType(::System::Type* type);

  /// @brief Method FindAnyObjectByType, addr 0x6f44fac, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindAnyObjectByType(::System::Type* type, ::UnityEngine::FindObjectsInactive findObjectsInactive);

  /// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindAnyObjectByType();

  /// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindAnyObjectByType(::UnityEngine::FindObjectsInactive findObjectsInactive);

  /// @brief Method FindFirstObjectByType, addr 0x6f44d00, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindFirstObjectByType(::System::Type* type);

  /// @brief Method FindFirstObjectByType, addr 0x6f44ef8, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindFirstObjectByType(::System::Type* type, ::UnityEngine::FindObjectsInactive findObjectsInactive);

  /// @brief Method FindFirstObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindFirstObjectByType();

  /// @brief Method FindFirstObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindFirstObjectByType(::UnityEngine::FindObjectsInactive findObjectsInactive);

  /// [FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceID")]
  /// [VisibleToOtherModules]
  /// @brief Method FindObjectFromInstanceID, addr 0x6f45c0c, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceID(::UnityEngine::EntityId instanceID);

  /// [FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceIDThreadSafe", IsThreadSafe = true)]
  /// [VisibleToOtherModules]
  /// @brief Method FindObjectFromInstanceIDThreadSafe, addr 0x6f45d90, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceIDThreadSafe(::UnityEngine::EntityId instanceID);

  /// @brief Method FindObjectFromInstanceIDThreadSafe_Injected, addr 0x6f45e0c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceIDThreadSafe_Injected(::by_ref<::UnityEngine::EntityId const> instanceID);

  /// @brief Method FindObjectFromInstanceID_Injected, addr 0x6f45d54, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindObjectFromInstanceID_Injected(::by_ref<::UnityEngine::EntityId const> instanceID);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// [Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
  /// @brief Method FindObjectOfType, addr 0x6f44c64, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type* type);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// [Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
  /// @brief Method FindObjectOfType, addr 0x6f44e50, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type* type, bool includeInactive);

  /// [Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
  /// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindObjectOfType();

  /// [Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
  /// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindObjectOfType(bool includeInactive);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)2)]
  /// [FreeFunction("UnityEngineObjectBindings::FindObjectsByType")]
  /// @brief Method FindObjectsByType, addr 0x6f44758, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsByType(::System::Type* type, ::UnityEngine::FindObjectsInactive findObjectsInactive, ::UnityEngine::FindObjectsSortMode sortMode);

  /// @brief Method FindObjectsByType, addr 0x6f446cc, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsByType(::System::Type* type, ::UnityEngine::FindObjectsSortMode sortMode);

  /// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> FindObjectsByType(::UnityEngine::FindObjectsInactive findObjectsInactive, ::UnityEngine::FindObjectsSortMode sortMode);

  /// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> FindObjectsByType(::UnityEngine::FindObjectsSortMode sortMode);

  /// [Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the
  /// results by InstanceID, but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
  /// @brief Method FindObjectsOfType, addr 0x6f4460c, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfType(::System::Type* type);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)2)]
  /// [FreeFunction("UnityEngineObjectBindings::FindObjectsOfType")]
  /// [Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the
  /// results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
  /// @brief Method FindObjectsOfType, addr 0x6f44688, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfType(::System::Type* type, bool includeInactive);

  /// [Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the
  /// results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
  /// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> FindObjectsOfType();

  /// [Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the
  /// results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
  /// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> FindObjectsOfType(bool includeInactive);

  /// [Obsolete("Please use Resources.FindObjectsOfTypeAll instead")]
  /// @brief Method FindObjectsOfTypeAll, addr 0x6f44c5c, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfTypeAll(::System::Type* type);

  /// [FreeFunction("UnityEngineObjectBindings::FindObjectsOfTypeIncludingAssets")]
  /// [Obsolete("use Resources.FindObjectsOfTypeAll instead.")]
  /// @brief Method FindObjectsOfTypeIncludingAssets, addr 0x6f44c20, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfTypeIncludingAssets(::System::Type* type);

  /// [Obsolete("Object.FindSceneObjectsOfType has been deprecated, Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindSceneObjectsOfType sorts
  /// the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
  /// @brief Method FindSceneObjectsOfType, addr 0x6f44bc8, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindSceneObjectsOfType(::System::Type* type);

  /// [FreeFunction("UnityEngineObjectBindings::ForceLoadFromInstanceID")]
  /// [VisibleToOtherModules]
  /// @brief Method ForceLoadFromInstanceID, addr 0x6f45f30, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> ForceLoadFromInstanceID(::UnityEngine::EntityId instanceID);

  /// @brief Method ForceLoadFromInstanceID_Injected, addr 0x6f46078, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ForceLoadFromInstanceID_Injected(::by_ref<::UnityEngine::EntityId const> instanceID);

  /// @brief Method GetCachedPtr, addr 0x6f430c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr GetCachedPtr();

  /// @brief Method GetEntityId, addr 0x6f42c44, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::EntityId GetEntityId();

  /// @brief Method GetHashCode, addr 0x6f42d2c, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInstanceID, addr 0x6f42cb8, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetInstanceID();

  /// [FreeFunction("UnityEngineObjectBindings::GetName", HasExplicitThis = true)]
  /// @brief Method GetName, addr 0x6f430cc, size 0x150, virtual false, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method GetName_Injected, addr 0x6f459c8, size 0x44, virtual false, abstract: false, final false
  static inline void GetName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [NativeMethod(Name = "Object::GetOffsetOfInstanceIdMember", IsFreeFunction = true, IsThreadSafe = true)]
  /// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject, addr 0x6f45260, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetOffsetOfInstanceIDInCPlusPlusObject();

  /// [FreeFunction("UnityEngineObjectBindings::GetPtrFromInstanceID")]
  /// @brief Method GetPtrFromInstanceID, addr 0x6f45e48, size 0x94, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetPtrFromInstanceID(::UnityEngine::EntityId instanceID, ::System::Type* objectType, ::by_ref<bool> isMonoBehaviour);

  /// @brief Method GetPtrFromInstanceID_Injected, addr 0x6f45edc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetPtrFromInstanceID_Injected(::by_ref<::UnityEngine::EntityId const> instanceID, ::System::Type* objectType, ::by_ref<bool> isMonoBehaviour);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)3)]
  /// @brief Method Instantiate, addr 0x6f43afc, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)3)]
  /// @brief Method Instantiate, addr 0x6f43fdc, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)3)]
  /// @brief Method Instantiate, addr 0x6f44048, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)3)]
  /// @brief Method Instantiate, addr 0x6f433a8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)3)]
  /// @brief Method Instantiate, addr 0x6f4375c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)3)]
  /// @brief Method Instantiate, addr 0x6f43d60, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::InstantiateParameters parameters);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::InstantiateParameters parameters);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::InstantiateParameters parameters,
                                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 position,
                                                                                ::UnityEngine::Quaternion rotation);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 position,
                                                                                ::UnityEngine::Quaternion rotation, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                                                                ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                                                                ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations,
                                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                ::UnityEngine::InstantiateParameters parameters, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                                                                ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, int32_t count, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                                                                ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations, ::UnityEngine::InstantiateParameters parameters,
                                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, ::UnityEngine::InstantiateParameters parameters, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, ::UnityEngine::Transform* parent);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                ::UnityEngine::InstantiateParameters parameters, ::System::Threading::CancellationToken cancellationToken);

  /// [NativeMethod(Name = "CloneObject", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method Internal_CloneSingle, addr 0x6f43bd8, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingle(/* [NotNull] */ ::UnityEngine::Object* data);

  /// [FreeFunction("CloneObjectWithParams")]
  /// @brief Method Internal_CloneSingleWithParams, addr 0x6f45308, size 0x198, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParams(/* [NotNull] */ ::UnityEngine::Object* data, ::UnityEngine::InstantiateParameters parameters);

  /// @brief Method Internal_CloneSingleWithParams_Injected, addr 0x6f454a0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_CloneSingleWithParams_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::InstantiateParameters const> parameters);

  /// [FreeFunction("CloneObject")]
  /// @brief Method Internal_CloneSingleWithParent, addr 0x6f4417c, size 0x1d8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParent(/* [NotNull] */ ::UnityEngine::Object* data, /* [NotNull] */ ::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method Internal_CloneSingleWithParent_Injected, addr 0x6f456f0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_CloneSingleWithParent_Injected(::System::IntPtr data, ::System::IntPtr parent, bool worldPositionStays);

  /// [FreeFunction("CloneObjectToScene")]
  /// @brief Method Internal_CloneSingleWithScene, addr 0x6f43e4c, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithScene(/* [NotNull] */ ::UnityEngine::Object* data, ::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method Internal_CloneSingleWithScene_Injected, addr 0x6f452c4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_CloneSingleWithScene_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::SceneManagement::Scene const> scene);

  /// @brief Method Internal_CloneSingle_Injected, addr 0x6f45288, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_CloneSingle_Injected(::System::IntPtr data);

  /// [FreeFunction("InstantiateAsyncObjects")]
  /// @brief Method Internal_InstantiateAsyncWithParams, addr 0x6f45744, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_InstantiateAsyncWithParams(/* [NotNull] */ ::UnityEngine::Object* original, int32_t count, ::UnityEngine::InstantiateParameters parameters,
                                                                     ::System::IntPtr positions, int32_t positionsCount, ::System::IntPtr rotations, int32_t rotationsCount);

  /// @brief Method Internal_InstantiateAsyncWithParams_Injected, addr 0x6f45850, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_InstantiateAsyncWithParams_Injected(::System::IntPtr original, int32_t count, ::by_ref<::UnityEngine::InstantiateParameters const> parameters,
                                                                              ::System::IntPtr positions, int32_t positionsCount, ::System::IntPtr rotations, int32_t rotationsCount);

  /// [FreeFunction("InstantiateObject")]
  /// @brief Method Internal_InstantiateSingle, addr 0x6f435b4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle(/* [NotNull] */ ::UnityEngine::Object* data, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// [FreeFunction("InstantiateObjectWithParams")]
  /// @brief Method Internal_InstantiateSingleWithParams, addr 0x6f454e4, size 0x1b0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParams(/* [NotNull] */ ::UnityEngine::Object* data, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                     ::UnityEngine::InstantiateParameters parameters);

  /// @brief Method Internal_InstantiateSingleWithParams_Injected, addr 0x6f45694, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_InstantiateSingleWithParams_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::Vector3 const> position,
                                                                               ::by_ref<::UnityEngine::Quaternion const> rotation, ::by_ref<::UnityEngine::InstantiateParameters const> parameters);

  /// [FreeFunction("InstantiateObject")]
  /// @brief Method Internal_InstantiateSingleWithParent, addr 0x6f4390c, size 0x1f0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent(/* [NotNull] */ ::UnityEngine::Object* data, /* [NotNull] */ ::UnityEngine::Transform* parent,
                                                                                     ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method Internal_InstantiateSingleWithParent_Injected, addr 0x6f45928, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_InstantiateSingleWithParent_Injected(::System::IntPtr data, ::System::IntPtr parent, ::by_ref<::UnityEngine::Vector3 const> pos,
                                                                               ::by_ref<::UnityEngine::Quaternion const> rot);

  /// @brief Method Internal_InstantiateSingle_Injected, addr 0x6f458d4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_InstantiateSingle_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::Vector3 const> pos, ::by_ref<::UnityEngine::Quaternion const> rot);

  /// @brief Method IsNativeObjectAlive, addr 0x6f42fc0, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNativeObjectAlive(::UnityEngine::Object* o);

  /// [FreeFunction("UnityEngineObjectBindings::IsPersistent")]
  /// @brief Method IsPersistent, addr 0x6f45a0c, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsPersistent(/* [NotNull] */ ::UnityEngine::Object* obj);

  /// @brief Method IsPersistent_Injected, addr 0x6f45ac4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsPersistent_Injected(::System::IntPtr obj);

  /// [FreeFunction("UnityEngineObjectBindings::MarkObjectDirty", HasExplicitThis = true)]
  /// @brief Method MarkDirty, addr 0x6f460b4, size 0xa0, virtual false, abstract: false, final false
  inline void MarkDirty();

  /// @brief Method MarkDirty_Injected, addr 0x6f46154, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkDirty_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Object* New_ctor();

  /// [FreeFunction("UnityEngineObjectBindings::SetName", HasExplicitThis = true)]
  /// @brief Method SetName, addr 0x6f43220, size 0x188, virtual false, abstract: false, final false
  inline void SetName(::StringW name);

  /// @brief Method SetName_Injected, addr 0x6f45b0c, size 0x44, virtual false, abstract: false, final false
  static inline void SetName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method ToString, addr 0x6f45060, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [FreeFunction("UnityEngineObjectBindings::ToString")]
  /// @brief Method ToString, addr 0x6f450b8, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW ToString(::UnityEngine::Object* obj);

  /// @brief Method ToString_Injected, addr 0x6f45984, size 0x44, virtual false, abstract: false, final false
  static inline void ToString_Injected(::System::IntPtr obj, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_CachedPtr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_CachedPtr();

  constexpr void __cordl_internal_set_m_CachedPtr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6f46190, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_OffsetOfInstanceIDInCPlusPlusObject();

  /// @brief Method get_hideFlags, addr 0x6f448f0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::HideFlags get_hideFlags();

  /// @brief Method get_hideFlags_Injected, addr 0x6f449d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::HideFlags get_hideFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_name, addr 0x6f430c8, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method op_Equality, addr 0x6f42e40, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Object* x, ::UnityEngine::Object* y);

  /// @brief Method op_Implicit, addr 0x6f42f58, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(/* [MaybeNullWhen(false)] [NotNullWhen(true)] */ ::UnityEngine::Object* exists);

  /// @brief Method op_Inequality, addr 0x6f451ec, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Object* x, ::UnityEngine::Object* y);

  static inline void setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t value);

  /// @brief Method set_hideFlags, addr 0x6f44a10, size 0xb0, virtual false, abstract: false, final false
  inline void set_hideFlags(::UnityEngine::HideFlags value);

  /// @brief Method set_hideFlags_Injected, addr 0x6f44ac0, size 0x44, virtual false, abstract: false, final false
  static inline void set_hideFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::HideFlags value);

  /// @brief Method set_name, addr 0x6f4321c, size 0x4, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Object();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Object(Object&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Object(Object const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9967 };

  /// @brief Field cloneDestroyedMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString cloneDestroyedMessage{ u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake." };

  /// @brief Field kInstanceID_None offset 0xffffffff size 0x4
  static constexpr int32_t kInstanceID_None{ static_cast<int32_t>(0x0) };

  /// @brief Field objectIsNullMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString objectIsNullMessage{ u"The Object you want to instantiate is null." };

  /// @brief Field m_CachedPtr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_CachedPtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Object, ___m_CachedPtr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Object) == 0x18, "Size mismatch!");

} // namespace UnityEngine
// [VisibleToOtherModules]
// Dependencies System.Object, UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Object/MarshalledUnityObject
class CORDL_TYPE Object_MarshalledUnityObject : public ::System::Object {
public:
  // Declarations
  /// @brief Method Marshal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  static inline ::System::IntPtr Marshal(T obj);

  /// @brief Method MarshalNotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  static inline ::System::IntPtr MarshalNotNull(T obj);

  /// @brief Method TryThrowEditorNullExceptionObject, addr 0x6f46200, size 0x4, virtual false, abstract: false, final false
  static inline void TryThrowEditorNullExceptionObject(::UnityEngine::Object* unityObj, ::StringW paramterName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Object_MarshalledUnityObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Object_MarshalledUnityObject", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Object_MarshalledUnityObject(Object_MarshalledUnityObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Object_MarshalledUnityObject", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Object_MarshalledUnityObject(Object_MarshalledUnityObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9966 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Object_MarshalledUnityObject) == 0x10, "Size mismatch!");

} // namespace UnityEngine
