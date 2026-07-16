#pragma once
// IWYU pragma private; include "UnityEngine/GameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
struct PrimitiveType;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
struct TagHandle;
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

  /// @brief Method AddComponent, addr 0x6ade7c4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> AddComponent(::System::Type* componentType);

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T AddComponent();

  /// @brief Method AddComponentInternal, addr 0x6ade34c, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> AddComponentInternal(::StringW className);

  /// @brief Method AddComponentInternal_Injected, addr 0x6ade5e4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr AddComponentInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> className);

  /// @brief Method BroadcastMessage, addr 0x6adfd10, size 0xc, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName);

  /// @brief Method BroadcastMessage, addr 0x6ade1bc, size 0xc, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage, addr 0x6adfd08, size 0x8, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter);

  /// @brief Method BroadcastMessage, addr 0x6ade1c8, size 0x184, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage_Injected, addr 0x6adfcac, size 0x5c, virtual false, abstract: false, final false
  static inline void BroadcastMessage_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* parameter,
                                               ::UnityEngine::SendMessageOptions options);

  /// @brief Method CompareTag, addr 0x6adaca0, size 0x4, virtual false, abstract: false, final false
  inline bool CompareTag(::StringW tag);

  /// @brief Method CompareTag, addr 0x6adf900, size 0x8, virtual false, abstract: false, final false
  inline bool CompareTag(::UnityEngine::TagHandle tag);

  /// @brief Method CompareTagHandle_Internal, addr 0x6adf908, size 0x98, virtual false, abstract: false, final false
  inline bool CompareTagHandle_Internal(::UnityEngine::TagHandle tag);

  /// @brief Method CompareTagHandle_Internal_Injected, addr 0x6adf9e4, size 0x44, virtual false, abstract: false, final false
  static inline bool CompareTagHandle_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::TagHandle> tag);

  /// @brief Method CompareTag_Internal, addr 0x6adf788, size 0x178, virtual false, abstract: false, final false
  inline bool CompareTag_Internal(::StringW tag);

  /// @brief Method CompareTag_Internal_Injected, addr 0x6adf9a0, size 0x44, virtual false, abstract: false, final false
  static inline bool CompareTag_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag);

  /// @brief Method CreatePrimitive, addr 0x6adcd20, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreatePrimitive(::UnityEngine::PrimitiveType type);

  /// @brief Method CreatePrimitive_Injected, addr 0x6adce40, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreatePrimitive_Injected(::UnityEngine::PrimitiveType type);

  /// @brief Method Find, addr 0x6ae0010, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Find(::StringW name);

  /// @brief Method FindGameObjectWithTag, addr 0x6addaac, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> FindGameObjectWithTag(::StringW tag);

  /// @brief Method FindGameObjectWithTag_Injected, addr 0x6adfa28, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindGameObjectWithTag_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag);

  /// @brief Method FindGameObjectsWithTag, addr 0x6adfa64, size 0x12c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> FindGameObjectsWithTag(::StringW tag);

  /// @brief Method FindGameObjectsWithTag, addr 0x6adde98, size 0x4, virtual false, abstract: false, final false
  static inline void FindGameObjectsWithTag(::StringW tag, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* results);

  /// @brief Method FindGameObjectsWithTagForListInternal, addr 0x6addd20, size 0x134, virtual false, abstract: false, final false
  static inline void FindGameObjectsWithTagForListInternal(::StringW tag, ::System::Object* results);

  /// @brief Method FindGameObjectsWithTagForListInternal_Injected, addr 0x6adde54, size 0x44, virtual false, abstract: false, final false
  static inline void FindGameObjectsWithTagForListInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, ::System::Object* results);

  /// @brief Method FindGameObjectsWithTag_Injected, addr 0x6adfb90, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> FindGameObjectsWithTag_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag);

  /// @brief Method FindWithTag, addr 0x6addaa8, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> FindWithTag(::StringW tag);

  /// @brief Method Find_Injected, addr 0x6ae0284, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Find_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetComponent, addr 0x6add57c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::StringW type);

  /// @brief Method GetComponent, addr 0x6ada1b0, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type* type);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetComponentAtIndex, addr 0x6adea20, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentAtIndex(int32_t index);

  /// @brief Method GetComponentAtIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentAtIndex(int32_t index);

  /// @brief Method GetComponentByName, addr 0x6adcfac, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentByName(::StringW type);

  /// @brief Method GetComponentByNameWithCase, addr 0x6add288, size 0x2a0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentByNameWithCase(::StringW type, bool caseSensitive);

  /// @brief Method GetComponentByNameWithCase_Injected, addr 0x6add528, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentByNameWithCase_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> type, bool caseSensitive);

  /// @brief Method GetComponentByName_Injected, addr 0x6add244, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentByName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> type);

  /// @brief Method GetComponentCount, addr 0x6ade7c8, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetComponentCount();

  /// @brief Method GetComponentCount_Injected, addr 0x6ade848, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetComponentCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetComponentFastPath, addr 0x6adcec0, size 0x98, virtual false, abstract: false, final false
  inline void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method GetComponentFastPath_Injected, addr 0x6adcf58, size 0x54, virtual false, abstract: false, final false
  static inline void GetComponentFastPath_Injected(::System::IntPtr _unity_self, ::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method GetComponentInChildren, addr 0x6add5d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* type);

  /// @brief Method GetComponentInChildren, addr 0x6ada4d4, size 0x160, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren();

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren(bool includeInactive);

  /// @brief Method GetComponentInChildren_Injected, addr 0x6add580, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentInChildren_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x6add630, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* type);

  /// @brief Method GetComponentInParent, addr 0x6ada72c, size 0x160, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent();

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent(bool includeInactive);

  /// @brief Method GetComponentInParent_Injected, addr 0x6add5dc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponentInParent_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentIndex, addr 0x6adeab0, size 0xc0, virtual false, abstract: false, final false
  inline int32_t GetComponentIndex(::UnityEngine::Component* component);

  /// @brief Method GetComponentIndex_Injected, addr 0x6adeb70, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetComponentIndex_Injected(::System::IntPtr _unity_self, ::System::IntPtr component);

  /// @brief Method GetComponent_Injected, addr 0x6adce7c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponent_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method GetComponents, addr 0x6ada974, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponents(::System::Type* type);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponents();

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponents(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponents, addr 0x6add784, size 0x18, virtual false, abstract: false, final false
  inline void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* results);

  /// @brief Method GetComponentsInChildren, addr 0x6add79c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInChildren(::System::Type* type);

  /// @brief Method GetComponentsInChildren, addr 0x6ada664, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInChildren(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInChildren();

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInChildren(bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInParent, addr 0x6add7a4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInParent(::System::Type* type);

  /// @brief Method GetComponentsInParent, addr 0x6ada8bc, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInParent(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInParent();

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetComponentsInParent(bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInternal, addr 0x6add638, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Array* GetComponentsInternal(::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::System::Object* resultList);

  /// @brief Method GetComponentsInternal_Injected, addr 0x6add700, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Array* GetComponentsInternal_Injected(::System::IntPtr _unity_self, ::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive,
                                                                bool reverse, ::System::Object* resultList);

  /// @brief Method GetScene, addr 0x6ae0744, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetScene(int32_t instanceID);

  /// @brief Method GetScene_Injected, addr 0x6ae0790, size 0x44, virtual false, abstract: false, final false
  static inline void GetScene_Injected(int32_t instanceID, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method InstantiateGameObjects, addr 0x6ae05a0, size 0x1a4, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects(int32_t sourceInstanceID, int32_t count, ::Unity::Collections::NativeArray_1<int32_t> newInstanceIDs,
                                            ::Unity::Collections::NativeArray_1<int32_t> newTransformInstanceIDs, ::UnityEngine::SceneManagement::Scene destinationScene);

  /// @brief Method InstantiateGameObjects, addr 0x6ae04c4, size 0x70, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects(int32_t sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                            ::UnityEngine::SceneManagement::Scene destinationScene);

  /// @brief Method InstantiateGameObjects_Injected, addr 0x6ae0534, size 0x6c, virtual false, abstract: false, final false
  static inline void InstantiateGameObjects_Injected(int32_t sourceInstanceID, ::System::IntPtr newInstanceIDs, ::System::IntPtr newTransformInstanceIDs, int32_t count,
                                                     ::by_ref<::UnityEngine::SceneManagement::Scene> destinationScene);

  /// @brief Method Internal_AddComponentWithType, addr 0x6ade628, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> Internal_AddComponentWithType(::System::Type* componentType);

  /// @brief Method Internal_AddComponentWithType_Injected, addr 0x6ade780, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_AddComponentWithType_Injected(::System::IntPtr _unity_self, ::System::Type* componentType);

  /// @brief Method Internal_CreateGameObject, addr 0x6adfd84, size 0x134, virtual false, abstract: false, final false
  static inline void Internal_CreateGameObject(::UnityEngine::GameObject* self, ::StringW name);

  /// @brief Method Internal_CreateGameObject_Injected, addr 0x6adffcc, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateGameObject_Injected(::UnityEngine::GameObject* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  static inline ::UnityEngine::GameObject* New_ctor();

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name);

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name, ::ArrayW<::System::Type*> components);

  /// @brief Method QueryComponentAtIndex, addr 0x6ade884, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> QueryComponentAtIndex(int32_t index);

  /// @brief Method QueryComponentAtIndex_Injected, addr 0x6ade9dc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr QueryComponentAtIndex_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method SendMessage, addr 0x6adfca0, size 0xc, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName);

  /// @brief Method SendMessage, addr 0x6ade02c, size 0xc, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage, addr 0x6adfc98, size 0x8, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value);

  /// @brief Method SendMessage, addr 0x6ade038, size 0x184, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessageUpwards, addr 0x6adfc30, size 0xc, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName);

  /// @brief Method SendMessageUpwards, addr 0x6adde9c, size 0xc, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessageUpwards, addr 0x6adfc28, size 0x8, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::System::Object* value);

  /// @brief Method SendMessageUpwards, addr 0x6addea8, size 0x184, virtual false, abstract: false, final false
  inline void SendMessageUpwards(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessageUpwards_Injected, addr 0x6adfbcc, size 0x5c, virtual false, abstract: false, final false
  static inline void SendMessageUpwards_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* value,
                                                 ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage_Injected, addr 0x6adfc3c, size 0x5c, virtual false, abstract: false, final false
  static inline void SendMessage_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* value,
                                          ::UnityEngine::SendMessageOptions options);

  /// @brief Method SetActive, addr 0x6adf060, size 0x90, virtual false, abstract: false, final false
  inline void SetActive(bool value);

  /// @brief Method SetActiveRecursively, addr 0x6adf2ac, size 0x90, virtual false, abstract: false, final false
  inline void SetActiveRecursively(bool state);

  /// @brief Method SetActiveRecursively_Injected, addr 0x6adf33c, size 0x44, virtual false, abstract: false, final false
  static inline void SetActiveRecursively_Injected(::System::IntPtr _unity_self, bool state);

  /// @brief Method SetActive_Injected, addr 0x6adf0f0, size 0x44, virtual false, abstract: false, final false
  static inline void SetActive_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method SetGameObjectsActive, addr 0x6ae0418, size 0xac, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::System::ReadOnlySpan_1<int32_t> instanceIDs, bool active);

  /// @brief Method SetGameObjectsActive, addr 0x6ae0314, size 0x104, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::Unity::Collections::NativeArray_1<int32_t> instanceIDs, bool active);

  /// @brief Method SetGameObjectsActive, addr 0x6ae02c0, size 0x54, virtual false, abstract: false, final false
  static inline void SetGameObjectsActive(::System::IntPtr instanceIds, int32_t instanceCount, bool active);

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(::by_ref<T> component);

  /// @brief Method TryGetComponent, addr 0x6ada424, size 0x80, virtual false, abstract: false, final false
  inline bool TryGetComponent(::System::Type* type, ::by_ref<::UnityEngine::Component*> component);

  /// @brief Method TryGetComponentFastPath, addr 0x6add9bc, size 0x98, virtual false, abstract: false, final false
  inline void TryGetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method TryGetComponentFastPath_Injected, addr 0x6adda54, size 0x54, virtual false, abstract: false, final false
  static inline void TryGetComponentFastPath_Injected(::System::IntPtr _unity_self, ::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method TryGetComponentInternal, addr 0x6add7ac, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> TryGetComponentInternal(::System::Type* type);

  /// @brief Method TryGetComponentInternal_Injected, addr 0x6add978, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr TryGetComponentInternal_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method .ctor, addr 0x6adfeb8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6adfd1c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x6adff14, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Type*> components);

  /// @brief Method get_active, addr 0x6adeed0, size 0x80, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_activeInHierarchy, addr 0x6adf1f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_activeInHierarchy();

  /// @brief Method get_activeInHierarchy_Injected, addr 0x6adf270, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_activeInHierarchy_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_activeSelf, addr 0x6adf134, size 0x80, virtual false, abstract: false, final false
  inline bool get_activeSelf();

  /// @brief Method get_activeSelf_Injected, addr 0x6adf1b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_activeSelf_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_active_Injected, addr 0x6adef50, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_active_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gameObject, addr 0x6ae096c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_isStatic, addr 0x6adf380, size 0x80, virtual false, abstract: false, final false
  inline bool get_isStatic();

  /// @brief Method get_isStaticBatchable, addr 0x6adf510, size 0x80, virtual false, abstract: false, final false
  inline bool get_isStaticBatchable();

  /// @brief Method get_isStaticBatchable_Injected, addr 0x6adf590, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isStaticBatchable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isStatic_Injected, addr 0x6adf400, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isStatic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layer, addr 0x6aded40, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_layer();

  /// @brief Method get_layer_Injected, addr 0x6adedc0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_layer_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_scene, addr 0x6ae07d4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method get_sceneCullingMask, addr 0x6ae08b0, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_sceneCullingMask_Injected, addr 0x6ae0930, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_sceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_scene_Injected, addr 0x6ae086c, size 0x44, virtual false, abstract: false, final false
  static inline void get_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method get_tag, addr 0x6adf5cc, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_tag();

  /// @brief Method get_tag_Injected, addr 0x6adf700, size 0x44, virtual false, abstract: false, final false
  static inline void get_tag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_transform, addr 0x6adebb4, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method get_transform_Injected, addr 0x6aded04, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_transform_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_active, addr 0x6adef8c, size 0x90, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_active_Injected, addr 0x6adf01c, size 0x44, virtual false, abstract: false, final false
  static inline void set_active_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_isStatic, addr 0x6adf43c, size 0x90, virtual false, abstract: false, final false
  inline void set_isStatic(bool value);

  /// @brief Method set_isStatic_Injected, addr 0x6adf4cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_isStatic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_layer, addr 0x6adedfc, size 0x90, virtual false, abstract: false, final false
  inline void set_layer(int32_t value);

  /// @brief Method set_layer_Injected, addr 0x6adee8c, size 0x44, virtual false, abstract: false, final false
  static inline void set_layer_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_tag, addr 0x6adab18, size 0x168, virtual false, abstract: false, final false
  inline void set_tag(::StringW value);

  /// @brief Method set_tag_Injected, addr 0x6adf744, size 0x44, virtual false, abstract: false, final false
  static inline void set_tag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10319 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GameObject) == 0x18, "Size mismatch!");

} // namespace UnityEngine
