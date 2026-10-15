#pragma once
// IWYU pragma private; include "UnityEngine/GameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObject)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Array;
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
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct PrimitiveType;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
struct TagHandle;
}
namespace UnityEngine {
struct TransformHandle;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class GameObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::GameObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GameObject*, "UnityEngine", "GameObject");
// [ExcludeFromPreset]
// [UsedByNativeCode]
// [NativeHeader("Runtime/Export/Scripting/GameObject.bindings.h")]
// Dependencies UnityEngine.Component, UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GameObject
class CORDL_TYPE GameObject : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief [Obsolete("GameObject.active is obsolete. Use GameObject.SetActive(), GameObject.activeSelf or GameObject.activeInHierarchy.")]
  __declspec(property(get = get_active, put = set_active)) bool active;

  __declspec(property(get = get_activeInHierarchy)) bool activeInHierarchy;

  __declspec(property(get = get_activeSelf)) bool activeSelf;

  __declspec(property(get = get_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  __declspec(property(get = get_isStatic, put = set_isStatic)) bool isStatic;

  __declspec(property(get = get_isStaticBatchable)) bool isStaticBatchable;

  __declspec(property(get = get_layer, put = set_layer)) int32_t layer;

  __declspec(property(get = get_scene)) ::UnityEngine::SceneManagement::Scene scene;

  __declspec(property(get = get_sceneCullingMask)) uint64_t sceneCullingMask;

  __declspec(property(get = get_tag, put = set_tag)) ::StringW tag;

  __declspec(property(get = get_transform)) ::UnityW<::UnityEngine::Transform> transform;

  __declspec(property(get = get_transformHandle)) ::UnityEngine::TransformHandle transformHandle;

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// @brief Method AddComponent, addr 0x6f78d38, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> AddComponent(::System::Type* componentType);

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
  inline T AddComponent();

  /// [FreeFunction(Name = "MonoAddComponent", HasExplicitThis = true)]
  /// @brief Method AddComponentInternal, addr 0x6f788c0, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> AddComponentInternal(::StringW className);

  /// @brief Method AddComponentInternal_Injected, addr 0x6f78b58, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr AddComponentInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> className);

  /// [ExcludeFromDocs]
  /// @brief Method BroadcastMessage, addr 0x6f7a360, size 0xc, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName);

  /// @brief Method BroadcastMessage, addr 0x6f78730, size 0xc, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// [ExcludeFromDocs]
  /// @brief Method BroadcastMessage, addr 0x6f7a358, size 0x8, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter);

  /// [FreeFunction(Name = "Scripting::BroadcastScriptingMessage", HasExplicitThis = true)]
  /// @brief Method BroadcastMessage, addr 0x6f7873c, size 0x184, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, /* [DefaultValue("null")] */ ::System::Object* parameter,
                               /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage_Injected, addr 0x6f7a2fc, size 0x5c, virtual false, abstract: false, final false
  static inline void BroadcastMessage_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, /* [DefaultValue("null")] */ ::System::Object* parameter,
                                               /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions options);

  /// @brief Method CompareTag, addr 0x6f7528c, size 0x4, virtual false, abstract: false, final false
  inline bool CompareTag(::StringW tag);

  /// @brief Method CompareTag, addr 0x6f79f50, size 0x8, virtual false, abstract: false, final false
  inline bool CompareTag(::UnityEngine::TagHandle tag);

  /// [FreeFunction(Name = "GameObjectBindings::CompareTagHandle", HasExplicitThis = true)]
  /// @brief Method CompareTagHandle_Internal, addr 0x6f79f58, size 0x98, virtual false, abstract: false, final false
  inline bool CompareTagHandle_Internal(::UnityEngine::TagHandle tag);

  /// @brief Method CompareTagHandle_Internal_Injected, addr 0x6f7a034, size 0x44, virtual false, abstract: false, final false
  static inline bool CompareTagHandle_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::TagHandle const> tag);

  /// [FreeFunction(Name = "GameObjectBindings::CompareTag", HasExplicitThis = true)]
  /// @brief Method CompareTag_Internal, addr 0x6f79dd8, size 0x178, virtual false, abstract: false, final false
  inline bool CompareTag_Internal(::StringW tag);

  /// @brief Method CompareTag_Internal_Injected, addr 0x6f79ff0, size 0x44, virtual false, abstract: false, final false
  static inline bool CompareTag_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag);

  /// [FreeFunction("GameObjectBindings::CreatePrimitive")]
  /// @brief Method CreatePrimitive, addr 0x6f77308, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreatePrimitive(::UnityEngine::PrimitiveType type);

  /// @brief Method CreatePrimitive_Injected, addr 0x6f77428, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreatePrimitive_Injected(::UnityEngine::PrimitiveType type);

  /// [FreeFunction(Name = "GameObjectBindings::Find")]
  /// @brief Method Find, addr 0x6f7a660, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Find(::StringW name);

  /// [FreeFunction(Name = "GameObjectBindings::FindGameObjectWithTag", ThrowsException = true)]
  /// @brief Method FindGameObjectWithTag, addr 0x6f78020, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> FindGameObjectWithTag(::StringW tag);

  /// @brief Method FindGameObjectWithTag_Injected, addr 0x6f7a078, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindGameObjectWithTag_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag);

  /// [FreeFunction(Name = "GameObjectBindings::FindGameObjectsWithTag", ThrowsException = true)]
  /// @brief Method FindGameObjectsWithTag, addr 0x6f7a0b4, size 0x12c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> FindGameObjectsWithTag(::StringW tag);

  /// @brief Method FindGameObjectsWithTag, addr 0x6f7840c, size 0x4, virtual false, abstract: false, final false
  static inline void FindGameObjectsWithTag(::StringW tag, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* results);

  /// [FreeFunction(Name = "GameObjectBindings::FindGameObjectsWithTagForListInternal", ThrowsException = true)]
  /// @brief Method FindGameObjectsWithTagForListInternal, addr 0x6f78294, size 0x134, virtual false, abstract: false, final false
  static inline void FindGameObjectsWithTagForListInternal(::StringW tag, ::System::Object* results);

  /// @brief Method FindGameObjectsWithTagForListInternal_Injected, addr 0x6f783c8, size 0x44, virtual false, abstract: false, final false
  static inline void FindGameObjectsWithTagForListInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, ::System::Object* results);

  /// @brief Method FindGameObjectsWithTag_Injected, addr 0x6f7a1e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> FindGameObjectsWithTag_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag);

  /// @brief Method FindWithTag, addr 0x6f7801c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> FindWithTag(::StringW tag);

  /// @brief Method Find_Injected, addr 0x6f7a8d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Find_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetComponent, addr 0x6f77b64, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::StringW type);

  /// [FreeFunction(Name = "GameObjectBindings::GetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// @brief Method GetComponent, addr 0x6f74798, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type* type);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetComponentAtIndex, addr 0x6f78f94, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentAtIndex(int32_t index);

  /// @brief Method GetComponentAtIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
  inline T GetComponentAtIndex(int32_t index);

  /// [FreeFunction(Name = "Scripting::GetScriptingWrapperOfComponentOfGameObject", HasExplicitThis = true)]
  /// @brief Method GetComponentByName, addr 0x6f77594, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentByName(::StringW type);

  /// [FreeFunction(Name = "Scripting::GetScriptingWrapperOfComponentOfGameObjectWithCase", HasExplicitThis = true)]
  /// @brief Method GetComponentByNameWithCase, addr 0x6f77870, size 0x2a0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentByNameWithCase(::StringW type, bool caseSensitive);

  /// @brief Method GetComponentByNameWithCase_Injected, addr 0x6f77b10, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentByNameWithCase_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> type, bool caseSensitive);

  /// @brief Method GetComponentByName_Injected, addr 0x6f7782c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentByName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> type);

  /// @brief Method GetComponentCount, addr 0x6f78d3c, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetComponentCount();

  /// @brief Method GetComponentCount_Injected, addr 0x6f78dbc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetComponentCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "GameObjectBindings::GetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetComponentFastPath, addr 0x6f774a8, size 0x98, virtual false, abstract: false, final false
  inline void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method GetComponentFastPath_Injected, addr 0x6f77540, size 0x54, virtual false, abstract: false, final false
  static inline void GetComponentFastPath_Injected(::System::IntPtr _unity_self, ::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// @brief Method GetComponentInChildren, addr 0x6f77bbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* type);

  /// [FreeFunction(Name = "GameObjectBindings::GetComponentInChildren", HasExplicitThis = true, ThrowsException = true)]
  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// @brief Method GetComponentInChildren, addr 0x6f74ac0, size 0x160, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* type, bool includeInactive);

  /// [ExcludeFromDocs]
  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren();

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren(/* [DefaultValue("false")] */ bool includeInactive);

  /// @brief Method GetComponentInChildren_Injected, addr 0x6f77b68, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentInChildren_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool includeInactive);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// @brief Method GetComponentInParent, addr 0x6f77c18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* type);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// [FreeFunction(Name = "GameObjectBindings::GetComponentInParent", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetComponentInParent, addr 0x6f74d18, size 0x160, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* type, bool includeInactive);

  /// [ExcludeFromDocs]
  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent();

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent(/* [DefaultValue("false")] */ bool includeInactive);

  /// @brief Method GetComponentInParent_Injected, addr 0x6f77bc4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentInParent_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentIndex, addr 0x6f79024, size 0xc0, virtual false, abstract: false, final false
  inline int32_t GetComponentIndex(::UnityEngine::Component* component);

  /// @brief Method GetComponentIndex_Injected, addr 0x6f790e4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetComponentIndex_Injected(::System::IntPtr _unity_self, ::System::IntPtr component);

  /// @brief Method GetComponent_Injected, addr 0x6f77464, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponent_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method GetComponents, addr 0x6f74f60, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponents(::System::Type* type);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponents();

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponents(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponents, addr 0x6f77d6c, size 0x18, virtual false, abstract: false, final false
  inline void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* results);

  /// [ExcludeFromDocs]
  /// @brief Method GetComponentsInChildren, addr 0x6f77d84, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInChildren(::System::Type* type);

  /// @brief Method GetComponentsInChildren, addr 0x6f74c50, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInChildren(::System::Type* type, /* [DefaultValue("false")] */ bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInChildren();

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInChildren(bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results);

  /// [ExcludeFromDocs]
  /// @brief Method GetComponentsInParent, addr 0x6f77d8c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInParent(::System::Type* type);

  /// @brief Method GetComponentsInParent, addr 0x6f74ea8, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInParent(::System::Type* type, /* [DefaultValue("false")] */ bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInParent();

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInParent(bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// [FreeFunction(Name = "GameObjectBindings::GetComponentsInternal", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetComponentsInternal, addr 0x6f77c20, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Array* GetComponentsInternal(::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::System::Object* resultList);

  /// @brief Method GetComponentsInternal_Injected, addr 0x6f77ce8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Array* GetComponentsInternal_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive,
                                                                bool reverse, ::System::Object* resultList);

  /// @brief Method GetScene, addr 0x6f7b264, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetScene(::UnityEngine::EntityId entityId);

  /// [Obsolete("Obsolete. Please use GameObject.GetScene(EntityId entityId) instead.")]
  /// @brief Method GetScene, addr 0x6f7b1d0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetScene(int32_t instanceID);

  /// [FreeFunction(Name = "GameObjectBindings::GetSceneByEntityId")]
  /// @brief Method GetSceneInternal, addr 0x6f7b1d8, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneInternal(::UnityEngine::EntityId entityId);

  /// @brief Method GetSceneInternal_Injected, addr 0x6f7b220, size 0x44, virtual false, abstract: false, final false
  static inline void GetSceneInternal_Injected(::by_ref<::UnityEngine::EntityId const> entityId, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method InstantiateGameObjects, addr 0x6f7afdc, size 0x1f4, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects(::UnityEngine::EntityId sourceEntityId, int32_t count, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> newEntityIds,
                                            ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> newTransformEntityIds, ::UnityEngine::SceneManagement::Scene destinationScene);

  /// [FreeFunction("GameObjectBindings::InstantiateGameObjectsByInstanceID")]
  /// @brief Method InstantiateGameObjects, addr 0x6f7ad64, size 0x64, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects(::UnityEngine::EntityId sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                            ::UnityEngine::SceneManagement::Scene destinationScene);

  /// [Obsolete("Obsolete. Please use GameObject.InstantiateGameObjects(EntityId, int, NativeArray<EntityId>, NativeArray<EntityId>, Scene) instead.")]
  /// @brief Method InstantiateGameObjects, addr 0x6f7ae34, size 0x1a4, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects(int32_t sourceInstanceID, int32_t count, ::Unity::Collections::NativeArray_1<int32_t> newInstanceIDs,
                                            ::Unity::Collections::NativeArray_1<int32_t> newTransformInstanceIDs, ::UnityEngine::SceneManagement::Scene destinationScene);

  /// @brief Method InstantiateGameObjects_Injected, addr 0x6f7adc8, size 0x6c, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects_Injected(::by_ref<::UnityEngine::EntityId const> sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                                     ::by_ref<::UnityEngine::SceneManagement::Scene const> destinationScene);

  /// [FreeFunction(Name = "MonoAddComponentWithType", HasExplicitThis = true)]
  /// @brief Method Internal_AddComponentWithType, addr 0x6f78b9c, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> Internal_AddComponentWithType(::System::Type* componentType);

  /// @brief Method Internal_AddComponentWithType_Injected, addr 0x6f78cf4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_AddComponentWithType_Injected(::System::IntPtr _unity_self, ::System::Type* componentType);

  /// [FreeFunction(Name = "GameObjectBindings::Internal_CreateGameObject")]
  /// @brief Method Internal_CreateGameObject, addr 0x6f7a3d4, size 0x134, virtual false, abstract: false, final false
  static inline void Internal_CreateGameObject(/* [Writable] */ ::UnityEngine::GameObject* self, ::StringW name);

  /// @brief Method Internal_CreateGameObject_Injected, addr 0x6f7a61c, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateGameObject_Injected(/* [Writable] */ ::UnityEngine::GameObject* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  static inline ::UnityEngine::GameObject* New_ctor();

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name);

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name, /* [ParamArray] */ ::ArrayW<::System::Type*> components);

  /// [NativeName("QueryComponentAtIndex<Unity::Component>")]
  /// @brief Method QueryComponentAtIndex, addr 0x6f78df8, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> QueryComponentAtIndex(int32_t index);

  /// @brief Method QueryComponentAtIndex_Injected, addr 0x6f78f50, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr QueryComponentAtIndex_Injected(::System::IntPtr _unity_self, int32_t index);

  /// [ExcludeFromDocs]
  /// @brief Method SendMessage, addr 0x6f7a2f0, size 0xc, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName);

  /// @brief Method SendMessage, addr 0x6f785a0, size 0xc, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// [ExcludeFromDocs]
  /// @brief Method SendMessage, addr 0x6f7a2e8, size 0x8, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value);

  /// [FreeFunction(Name = "Scripting::SendScriptingMessage", HasExplicitThis = true)]
  /// @brief Method SendMessage, addr 0x6f785ac, size 0x184, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, /* [DefaultValue("null")] */ ::System::Object* value,
                          /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions options);

  /// [ExcludeFromDocs]
  /// @brief Method SendMessageUpwards, addr 0x6f7a280, size 0xc, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName);

  /// @brief Method SendMessageUpwards, addr 0x6f78410, size 0xc, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// [ExcludeFromDocs]
  /// @brief Method SendMessageUpwards, addr 0x6f7a278, size 0x8, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::System::Object* value);

  /// [FreeFunction(Name = "Scripting::SendScriptingMessageUpwards", HasExplicitThis = true)]
  /// @brief Method SendMessageUpwards, addr 0x6f7841c, size 0x184, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, /* [DefaultValue("null")] */ ::System::Object* value,
                                 /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessageUpwards_Injected, addr 0x6f7a21c, size 0x5c, virtual false, abstract: false, final false
  static inline void SendMessageUpwards_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, /* [DefaultValue("null")] */ ::System::Object* value,
                                                 /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage_Injected, addr 0x6f7a28c, size 0x5c, virtual false, abstract: false, final false
  static inline void SendMessage_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, /* [DefaultValue("null")] */ ::System::Object* value,
                                          /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions options);

  /// [NativeMethod(Name = "SetSelfActive")]
  /// @brief Method SetActive, addr 0x6f796b0, size 0x90, virtual false, abstract: false, final false
  inline void SetActive(bool value);

  /// [NativeMethod(Name = "SetActiveRecursivelyDeprecated")]
  /// [Obsolete("gameObject.SetActiveRecursively() is obsolete. Use GameObject.SetActive(), which is now inherited by children.")]
  /// @brief Method SetActiveRecursively, addr 0x6f798fc, size 0x90, virtual false, abstract: false, final false
  inline void SetActiveRecursively(bool state);

  /// @brief Method SetActiveRecursively_Injected, addr 0x6f7998c, size 0x44, virtual false, abstract: false, final false
  static inline void SetActiveRecursively_Injected(::System::IntPtr _unity_self, bool state);

  /// @brief Method SetActive_Injected, addr 0x6f79740, size 0x44, virtual false, abstract: false, final false
  static inline void SetActive_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method SetGameObjectsActive, addr 0x6f7ac68, size 0xfc, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::System::ReadOnlySpan_1<::UnityEngine::EntityId> entityIds, bool active);

  /// @brief Method SetGameObjectsActive, addr 0x6f7aa68, size 0x154, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> entityIds, bool active);

  /// [Obsolete("Obsolete. Please use GameObject.SetGameObjectsActive(ReadOnlySpan<EntityId>, bool) instead.")]
  /// @brief Method SetGameObjectsActive, addr 0x6f7abbc, size 0xac, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::System::ReadOnlySpan_1<int32_t> instanceIDs, bool active);

  /// [Obsolete("Obsolete. Please use GameObject.SetGameObjectsActive(NativeArray<EntityId>, bool) instead.")]
  /// @brief Method SetGameObjectsActive, addr 0x6f7a964, size 0x104, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::Unity::Collections::NativeArray_1<int32_t> instanceIDs, bool active);

  /// [FreeFunction(Name = "GameObjectBindings::SetGameObjectsActiveByInstanceID")]
  /// @brief Method SetGameObjectsActive, addr 0x6f7a910, size 0x54, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::System::IntPtr instanceIds, int32_t instanceCount, bool active);

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(::by_ref<T> component);

  /// @brief Method TryGetComponent, addr 0x6f74a0c, size 0x84, virtual false, abstract: false, final false
  inline bool TryGetComponent(::System::Type* type, ::by_ref<::UnityEngine::Component*> component);

  /// [FreeFunction(Name = "GameObjectBindings::TryGetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method TryGetComponentFastPath, addr 0x6f77f30, size 0x98, virtual false, abstract: false, final false
  inline void TryGetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method TryGetComponentFastPath_Injected, addr 0x6f77fc8, size 0x54, virtual false, abstract: false, final false
  static inline void TryGetComponentFastPath_Injected(::System::IntPtr _unity_self, ::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// [FreeFunction(Name = "GameObjectBindings::TryGetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// @brief Method TryGetComponentInternal, addr 0x6f77d94, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> TryGetComponentInternal(::System::Type* type);

  /// @brief Method TryGetComponentInternal_Injected, addr 0x6f77eec, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr TryGetComponentInternal_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method .ctor, addr 0x6f7a508, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6f7a36c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x6f7a564, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, /* [ParamArray] */ ::ArrayW<::System::Type*> components);

  /// [NativeMethod(Name = "IsActive")]
  /// @brief Method get_active, addr 0x6f79520, size 0x80, virtual false, abstract: false, final false
  inline bool get_active();

  /// [NativeMethod(Name = "IsActive")]
  /// @brief Method get_activeInHierarchy, addr 0x6f79840, size 0x80, virtual false, abstract: false, final false
  inline bool get_activeInHierarchy();

  /// @brief Method get_activeInHierarchy_Injected, addr 0x6f798c0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_activeInHierarchy_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod(Name = "IsSelfActive")]
  /// @brief Method get_activeSelf, addr 0x6f79784, size 0x80, virtual false, abstract: false, final false
  inline bool get_activeSelf();

  /// @brief Method get_activeSelf_Injected, addr 0x6f79804, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_activeSelf_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_active_Injected, addr 0x6f795a0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_active_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gameObject, addr 0x6f7b404, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// [NativeMethod(Name = "GetIsStaticDeprecated")]
  /// @brief Method get_isStatic, addr 0x6f799d0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isStatic();

  /// [NativeMethod(Name = "IsStaticBatchable")]
  /// @brief Method get_isStaticBatchable, addr 0x6f79b60, size 0x80, virtual false, abstract: false, final false
  inline bool get_isStaticBatchable();

  /// @brief Method get_isStaticBatchable_Injected, addr 0x6f79be0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isStaticBatchable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isStatic_Injected, addr 0x6f79a50, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isStatic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layer, addr 0x6f79390, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_layer();

  /// @brief Method get_layer_Injected, addr 0x6f79410, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_layer_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("GameObjectBindings::GetScene", HasExplicitThis = true)]
  /// @brief Method get_scene, addr 0x6f7b26c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// [FreeFunction(Name = "GameObjectBindings::GetSceneCullingMask", HasExplicitThis = true)]
  /// @brief Method get_sceneCullingMask, addr 0x6f7b348, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_sceneCullingMask_Injected, addr 0x6f7b3c8, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_sceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_scene_Injected, addr 0x6f7b304, size 0x44, virtual false, abstract: false, final false
  static inline void get_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// [FreeFunction("GameObjectBindings::GetTag", HasExplicitThis = true)]
  /// @brief Method get_tag, addr 0x6f79c1c, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_tag();

  /// @brief Method get_tag_Injected, addr 0x6f79d50, size 0x44, virtual false, abstract: false, final false
  static inline void get_tag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("GameObjectBindings::GetTransform", HasExplicitThis = true)]
  /// @brief Method get_transform, addr 0x6f79128, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// [FreeFunction("GameObjectBindings::GetTransformHandle", HasExplicitThis = true)]
  /// @brief Method get_transformHandle, addr 0x6f792b4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::TransformHandle get_transformHandle();

  /// @brief Method get_transformHandle_Injected, addr 0x6f7934c, size 0x44, virtual false, abstract: false, final false
  static inline void get_transformHandle_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::TransformHandle> ret);

  /// @brief Method get_transform_Injected, addr 0x6f79278, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_transform_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod(Name = "SetSelfActive")]
  /// @brief Method set_active, addr 0x6f795dc, size 0x90, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_active_Injected, addr 0x6f7966c, size 0x44, virtual false, abstract: false, final false
  static inline void set_active_Injected(::System::IntPtr _unity_self, bool value);

  /// [NativeMethod(Name = "SetIsStaticDeprecated")]
  /// @brief Method set_isStatic, addr 0x6f79a8c, size 0x90, virtual false, abstract: false, final false
  inline void set_isStatic(bool value);

  /// @brief Method set_isStatic_Injected, addr 0x6f79b1c, size 0x44, virtual false, abstract: false, final false
  static inline void set_isStatic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_layer, addr 0x6f7944c, size 0x90, virtual false, abstract: false, final false
  inline void set_layer(int32_t value);

  /// @brief Method set_layer_Injected, addr 0x6f794dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_layer_Injected(::System::IntPtr _unity_self, int32_t value);

  /// [FreeFunction("GameObjectBindings::SetTag", HasExplicitThis = true)]
  /// @brief Method set_tag, addr 0x6f75104, size 0x168, virtual false, abstract: false, final false
  inline void set_tag(::StringW value);

  /// @brief Method set_tag_Injected, addr 0x6f79d94, size 0x44, virtual false, abstract: false, final false
  static inline void set_tag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObject(GameObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObject(GameObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GameObject) == 0x18, "Size mismatch!");

} // namespace UnityEngine
