#pragma once
// IWYU pragma private; include "UnityEngine/GameObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct PrimitiveType;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class GameObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GameObject);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GameObject
class CORDL_TYPE GameObject : public ::UnityEngine::Object {
public:
  // Declarations
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

  /// @brief Method AddComponent, addr 0x48b8f3c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> AddComponent(::System::Type* componentType);

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T AddComponent();

  /// @brief Method AddComponentInternal, addr 0x48b8eb4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> AddComponentInternal(::StringW className);

  /// @brief Method BroadcastMessage, addr 0x48b95ec, size 0x4c, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName);

  /// @brief Method BroadcastMessage, addr 0x48b8e00, size 0x58, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage, addr 0x48b9594, size 0x58, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter);

  /// @brief Method BroadcastMessage, addr 0x48b8e58, size 0x5c, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options);

  /// @brief Method CompareTag, addr 0x48b693c, size 0x44, virtual false, abstract: false, final false
  inline bool CompareTag(::StringW tag);

  /// @brief Method CreatePrimitive, addr 0x48b8894, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreatePrimitive(::UnityEngine::PrimitiveType type);

  /// @brief Method Find, addr 0x48b98a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Find(::StringW name);

  /// @brief Method FindGameObjectWithTag, addr 0x48b8c5c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> FindGameObjectWithTag(::StringW tag);

  /// @brief Method FindGameObjectsWithTag, addr 0x48b9410, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> FindGameObjectsWithTag(::StringW tag);

  /// @brief Method FindWithTag, addr 0x48b8c20, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> FindWithTag(::StringW tag);

  /// @brief Method GetComponent, addr 0x48b89bc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::StringW type);

  /// @brief Method GetComponent, addr 0x48b6000, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type* type);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetComponentAtIndex, addr 0x48b9000, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentAtIndex(int32_t index);

  /// @brief Method GetComponentAtIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentAtIndex(int32_t index);

  /// @brief Method GetComponentByName, addr 0x48b8924, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentByName(::StringW type);

  /// @brief Method GetComponentByNameWithCase, addr 0x48b8968, size 0x54, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentByNameWithCase(::StringW type, bool caseSensitive);

  /// @brief Method GetComponentCount, addr 0x48b8f80, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetComponentCount();

  /// @brief Method GetComponentFastPath, addr 0x48b88d0, size 0x54, virtual false, abstract: false, final false
  inline void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method GetComponentInChildren, addr 0x48b8a00, size 0x48, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* type);

  /// @brief Method GetComponentInChildren, addr 0x48b6264, size 0x54, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren();

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren(bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x48b8a48, size 0x48, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* type);

  /// @brief Method GetComponentInParent, addr 0x48b6454, size 0x54, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent();

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent(bool includeInactive);

  /// @brief Method GetComponentIndex, addr 0x48b90d4, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetComponentIndex(::UnityEngine::Component* component);

  /// @brief Method GetComponents, addr 0x48b660c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponents(::System::Type* type);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponents();

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponents(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponents, addr 0x48b8b14, size 0x64, virtual false, abstract: false, final false
  inline void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* results);

  /// @brief Method GetComponentsInChildren, addr 0x48b8b78, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInChildren(::System::Type* type);

  /// @brief Method GetComponentsInChildren, addr 0x48b6318, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInChildren(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren();

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren(bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInParent, addr 0x48b8b80, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInParent(::System::Type* type);

  /// @brief Method GetComponentsInParent, addr 0x48b6508, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInParent(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent();

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent(bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInternal, addr 0x48b8a90, size 0x84, virtual false, abstract: false, final false
  inline ::System::Array* GetComponentsInternal(::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::System::Object* resultList);

  /// @brief Method GetScene, addr 0x48b9da4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetScene(int32_t instanceID);

  /// @brief Method GetScene_Injected, addr 0x48b9df0, size 0x44, virtual false, abstract: false, final false
  static inline void GetScene_Injected(int32_t instanceID, ::ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method InstantiateGameObjects, addr 0x48b9bd8, size 0x1cc, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects(int32_t sourceInstanceID, int32_t count, ::Unity::Collections::NativeArray_1<int32_t> newInstanceIDs,
                                            ::Unity::Collections::NativeArray_1<int32_t> newTransformInstanceIDs, ::UnityEngine::SceneManagement::Scene destinationScene);

  /// @brief Method InstantiateGameObjects, addr 0x48b9afc, size 0x70, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects(int32_t sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                            ::UnityEngine::SceneManagement::Scene destinationScene);

  /// @brief Method InstantiateGameObjects_Injected, addr 0x48b9b6c, size 0x6c, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects_Injected(int32_t sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                                     ::ByRef<::UnityEngine::SceneManagement::Scene> destinationScene);

  /// @brief Method Internal_AddComponentWithType, addr 0x48b8ef8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> Internal_AddComponentWithType(::System::Type* componentType);

  /// @brief Method Internal_CreateGameObject, addr 0x48b96c8, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateGameObject(::UnityEngine::GameObject* self, ::StringW name);

  static inline ::UnityEngine::GameObject* New_ctor();

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name);

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method QueryComponentAtIndex, addr 0x48b8fbc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> QueryComponentAtIndex(int32_t index);

  /// @brief Method SendMessage, addr 0x48b9548, size 0x4c, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName);

  /// @brief Method SendMessage, addr 0x48b8d4c, size 0x58, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage, addr 0x48b94f0, size 0x58, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value);

  /// @brief Method SendMessage, addr 0x48b8da4, size 0x5c, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessageUpwards, addr 0x48b94a4, size 0x4c, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName);

  /// @brief Method SendMessageUpwards, addr 0x48b8c98, size 0x58, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessageUpwards, addr 0x48b944c, size 0x58, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::System::Object* value);

  /// @brief Method SendMessageUpwards, addr 0x48b8cf0, size 0x5c, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SetActive, addr 0x48b9254, size 0x44, virtual false, abstract: false, final false
  inline void SetActive(bool value);

  /// @brief Method SetActiveRecursively, addr 0x48b9310, size 0x44, virtual false, abstract: false, final false
  inline void SetActiveRecursively(bool state);

  /// @brief Method SetGameObjectsActive, addr 0x48b9a48, size 0xb4, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::System::ReadOnlySpan_1<int32_t> instanceIDs, bool active);

  /// @brief Method SetGameObjectsActive, addr 0x48b9930, size 0x118, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::Unity::Collections::NativeArray_1<int32_t> instanceIDs, bool active);

  /// @brief Method SetGameObjectsActive, addr 0x48b98dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::System::IntPtr instanceIds, int32_t instanceCount, bool active);

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(::ByRef<T> component);

  /// @brief Method TryGetComponent, addr 0x48b60f8, size 0xa0, virtual false, abstract: false, final false
  inline bool TryGetComponent(::System::Type* type, ::ByRef<::UnityEngine::Component*> component);

  /// @brief Method TryGetComponentFastPath, addr 0x48b8bcc, size 0x54, virtual false, abstract: false, final false
  inline void TryGetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method TryGetComponentInternal, addr 0x48b8b88, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> TryGetComponentInternal(::System::Type* type);

  /// @brief Method .ctor, addr 0x48b970c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48b9638, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x48b9790, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method get_active, addr 0x48b91d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_activeInHierarchy, addr 0x48b92d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_activeInHierarchy();

  /// @brief Method get_activeSelf, addr 0x48b9298, size 0x3c, virtual false, abstract: false, final false
  inline bool get_activeSelf();

  /// @brief Method get_gameObject, addr 0x48b9f00, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_isStatic, addr 0x48b9354, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isStatic();

  /// @brief Method get_isStaticBatchable, addr 0x48b93d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isStaticBatchable();

  /// @brief Method get_layer, addr 0x48b9154, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_layer();

  /// @brief Method get_scene, addr 0x48b9e34, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method get_sceneCullingMask, addr 0x48b9ec4, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_scene_Injected, addr 0x48b9e80, size 0x44, virtual false, abstract: false, final false
  inline void get_scene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method get_tag, addr 0x48b67cc, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_tag();

  /// @brief Method get_transform, addr 0x48b9118, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method set_active, addr 0x48b9210, size 0x44, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_isStatic, addr 0x48b9390, size 0x44, virtual false, abstract: false, final false
  inline void set_isStatic(bool value);

  /// @brief Method set_layer, addr 0x48b9190, size 0x44, virtual false, abstract: false, final false
  inline void set_layer(int32_t value);

  /// @brief Method set_tag, addr 0x48b6880, size 0x44, virtual false, abstract: false, final false
  inline void set_tag(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObject(GameObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObject(GameObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GameObject, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GameObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GameObject*, "UnityEngine", "GameObject");
