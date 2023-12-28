#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObject)
namespace System {
class Object;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct PrimitiveType;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Array;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine {
class GameObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GameObject);
// Type: UnityEngine::GameObject
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10196))
// CS Name: ::UnityEngine::GameObject*
class CORDL_TYPE GameObject : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_transform))::UnityEngine::Transform* transform;

  __declspec(property(get = get_layer, put = set_layer)) int32_t layer;

  __declspec(property(get = get_active, put = set_active)) bool active;

  __declspec(property(get = get_activeSelf)) bool activeSelf;

  __declspec(property(get = get_activeInHierarchy)) bool activeInHierarchy;

  __declspec(property(get = get_isStatic, put = set_isStatic)) bool isStatic;

  __declspec(property(get = get_isStaticBatchable)) bool isStaticBatchable;

  __declspec(property(get = get_tag, put = set_tag))::StringW tag;

  __declspec(property(get = get_scene))::UnityEngine::SceneManagement::Scene scene;

  __declspec(property(get = get_sceneCullingMask)) uint64_t sceneCullingMask;

  __declspec(property(get = get_gameObject))::UnityEngine::GameObject* gameObject;

  /// @brief Method CreatePrimitive addr 0x2ccdbd4 size 0x3c virtual false final false
  static inline ::UnityEngine::GameObject* CreatePrimitive(::UnityEngine::PrimitiveType type);

  /// @brief Method GetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetComponent addr 0x2ccdc10 size 0x44 virtual false final false
  inline ::UnityEngine::Component* GetComponent(::System::Type* type);

  /// @brief Method GetComponentFastPath addr 0x2ccdc54 size 0x54 virtual false final false
  inline void GetComponentFastPath(::System::Type* type, void* oneFurtherThanResultValue);

  /// @brief Method GetComponentByName addr 0x2ccdca8 size 0x44 virtual false final false
  inline ::UnityEngine::Component* GetComponentByName(::StringW type);

  /// @brief Method GetComponent addr 0x2ccdcec size 0x44 virtual false final false
  inline ::UnityEngine::Component* GetComponent(::StringW type);

  /// @brief Method GetComponentInChildren addr 0x2ccdd30 size 0x54 virtual false final false
  inline ::UnityEngine::Component* GetComponentInChildren(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentInChildren addr 0x2ccdd84 size 0x48 virtual false final false
  inline ::UnityEngine::Component* GetComponentInChildren(::System::Type* type);

  /// @brief Method GetComponentInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetComponentInChildren();

  /// @brief Method GetComponentInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetComponentInChildren(bool includeInactive);

  /// @brief Method GetComponentInParent addr 0x2ccddcc size 0x54 virtual false final false
  inline ::UnityEngine::Component* GetComponentInParent(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentInParent addr 0x2ccde20 size 0x48 virtual false final false
  inline ::UnityEngine::Component* GetComponentInParent(::System::Type* type);

  /// @brief Method GetComponentInParent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetComponentInParent();

  /// @brief Method GetComponentInParent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetComponentInParent(bool includeInactive);

  /// @brief Method GetComponentsInternal addr 0x2ccde68 size 0x84 virtual false final false
  inline ::System::Array* GetComponentsInternal(::System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::System::Object* resultList);

  /// @brief Method GetComponents addr 0x2ccdeec size 0xa8 virtual false final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponents(::System::Type* type);

  /// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponents();

  /// @brief Method GetComponents addr 0x2ccdf94 size 0x64 virtual false final false
  inline void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* results);

  /// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void GetComponents(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInChildren addr 0x2ccdff8 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponentsInChildren(::System::Type* type);

  /// @brief Method GetComponentsInChildren addr 0x2cce000 size 0xb4 virtual false final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponentsInChildren(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren(bool includeInactive);

  /// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren();

  /// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInParent addr 0x2cce0b4 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponentsInParent(::System::Type* type);

  /// @brief Method GetComponentsInParent addr 0x2cce0bc size 0xb4 virtual false final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponentsInParent(::System::Type* type, bool includeInactive);

  /// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent(bool includeInactive);

  /// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent();

  /// @brief Method TryGetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool TryGetComponent(ByRef<T> component);

  /// @brief Method TryGetComponent addr 0x2cce170 size 0x9c virtual false final false
  inline bool TryGetComponent(::System::Type* type, ByRef<::UnityEngine::Component*> component);

  /// @brief Method TryGetComponentInternal addr 0x2cce20c size 0x44 virtual false final false
  inline ::UnityEngine::Component* TryGetComponentInternal(::System::Type* type);

  /// @brief Method TryGetComponentFastPath addr 0x2cce250 size 0x54 virtual false final false
  inline void TryGetComponentFastPath(::System::Type* type, void* oneFurtherThanResultValue);

  /// @brief Method FindWithTag addr 0x2cce2a4 size 0x3c virtual false final false
  static inline ::UnityEngine::GameObject* FindWithTag(::StringW tag);

  /// @brief Method SendMessageUpwards addr 0x2cce31c size 0x58 virtual false final false
  inline void SendMessageUpwards(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage addr 0x2cce3d0 size 0x58 virtual false final false
  inline void SendMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage addr 0x2cce484 size 0x58 virtual false final false
  inline void BroadcastMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method AddComponentInternal addr 0x2cce538 size 0x44 virtual false final false
  inline ::UnityEngine::Component* AddComponentInternal(::StringW className);

  /// @brief Method Internal_AddComponentWithType addr 0x2cce57c size 0x44 virtual false final false
  inline ::UnityEngine::Component* Internal_AddComponentWithType(::System::Type* componentType);

  /// @brief Method AddComponent addr 0x2cce5c0 size 0x44 virtual false final false
  inline ::UnityEngine::Component* AddComponent(::System::Type* componentType);

  /// @brief Method AddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T AddComponent();

  /// @brief Method get_transform addr 0x2cce604 size 0x3c virtual false final false
  inline ::UnityEngine::Transform* get_transform();

  /// @brief Method get_layer addr 0x2cce640 size 0x3c virtual false final false
  inline int32_t get_layer();

  /// @brief Method set_layer addr 0x2cce67c size 0x44 virtual false final false
  inline void set_layer(int32_t value);

  /// @brief Method get_active addr 0x2cce6c0 size 0x3c virtual false final false
  inline bool get_active();

  /// @brief Method set_active addr 0x2cce6fc size 0x44 virtual false final false
  inline void set_active(bool value);

  /// @brief Method SetActive addr 0x2cce740 size 0x44 virtual false final false
  inline void SetActive(bool value);

  /// @brief Method get_activeSelf addr 0x2cce784 size 0x3c virtual false final false
  inline bool get_activeSelf();

  /// @brief Method get_activeInHierarchy addr 0x2cce7c0 size 0x3c virtual false final false
  inline bool get_activeInHierarchy();

  /// @brief Method SetActiveRecursively addr 0x2cce7fc size 0x44 virtual false final false
  inline void SetActiveRecursively(bool state);

  /// @brief Method get_isStatic addr 0x2cce840 size 0x3c virtual false final false
  inline bool get_isStatic();

  /// @brief Method set_isStatic addr 0x2cce87c size 0x44 virtual false final false
  inline void set_isStatic(bool value);

  /// @brief Method get_isStaticBatchable addr 0x2cce8c0 size 0x3c virtual false final false
  inline bool get_isStaticBatchable();

  /// @brief Method get_tag addr 0x2cce8fc size 0x3c virtual false final false
  inline ::StringW get_tag();

  /// @brief Method set_tag addr 0x2cce938 size 0x44 virtual false final false
  inline void set_tag(::StringW value);

  /// @brief Method CompareTag addr 0x2cce97c size 0x44 virtual false final false
  inline bool CompareTag(::StringW tag);

  /// @brief Method FindGameObjectWithTag addr 0x2cce2e0 size 0x3c virtual false final false
  static inline ::UnityEngine::GameObject* FindGameObjectWithTag(::StringW tag);

  /// @brief Method FindGameObjectsWithTag addr 0x2cce9c0 size 0x3c virtual false final false
  static inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> FindGameObjectsWithTag(::StringW tag);

  /// @brief Method SendMessageUpwards addr 0x2cce374 size 0x5c virtual false final false
  inline void SendMessageUpwards(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessageUpwards addr 0x2cce9fc size 0x58 virtual false final false
  inline void SendMessageUpwards(::StringW methodName, ::System::Object* value);

  /// @brief Method SendMessageUpwards addr 0x2ccea54 size 0x4c virtual false final false
  inline void SendMessageUpwards(::StringW methodName);

  /// @brief Method SendMessage addr 0x2cce428 size 0x5c virtual false final false
  inline void SendMessage(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage addr 0x2cceaa0 size 0x58 virtual false final false
  inline void SendMessage(::StringW methodName, ::System::Object* value);

  /// @brief Method SendMessage addr 0x2cceaf8 size 0x4c virtual false final false
  inline void SendMessage(::StringW methodName);

  /// @brief Method BroadcastMessage addr 0x2cce4dc size 0x5c virtual false final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage addr 0x2cceb44 size 0x58 virtual false final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter);

  /// @brief Method BroadcastMessage addr 0x2cceb9c size 0x4c virtual false final false
  inline void BroadcastMessage(::StringW methodName);

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x2ccebe8 size 0x90 virtual false final false
  inline void _ctor(::StringW name);

  static inline ::UnityEngine::GameObject* New_ctor();

  /// @brief Method .ctor addr 0x2ccecc4 size 0x84 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::GameObject* New_ctor(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method .ctor addr 0x2cced48 size 0x110 virtual false final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method Internal_CreateGameObject addr 0x2ccec80 size 0x44 virtual false final false
  static inline void Internal_CreateGameObject(::UnityEngine::GameObject* self, ::StringW name);

  /// @brief Method Find addr 0x2ccee58 size 0x3c virtual false final false
  static inline ::UnityEngine::GameObject* Find(::StringW name);

  /// @brief Method get_scene addr 0x2ccee94 size 0x4c virtual false final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method get_sceneCullingMask addr 0x2ccef24 size 0x3c virtual false final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_gameObject addr 0x2ccef60 size 0x4 virtual false final false
  inline ::UnityEngine::GameObject* get_gameObject();

  /// @brief Method get_scene_Injected addr 0x2cceee0 size 0x44 virtual false final false
  inline void get_scene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> ret);

  // Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObject(GameObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObject(GameObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObject();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GameObject, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GameObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GameObject*, "UnityEngine", "GameObject");
