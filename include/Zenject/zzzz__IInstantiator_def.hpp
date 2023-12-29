#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IInstantiator)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Zenject {
class IInstantiator;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IInstantiator);
// Type: Zenject::IInstantiator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11095))
// CS Name: ::Zenject::IInstantiator*
class CORDL_TYPE IInstantiator {
public:
  // Declarations
  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T Instantiate();

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T Instantiate(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* Instantiate(::System::Type* concreteType);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* Instantiate(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename TContract> inline TContract InstantiateComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename TContract> inline TContract InstantiateComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Component* InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject);

  /// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Component* InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                        ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiateComponentOnNewGameObject();

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiateComponentOnNewGameObject(::StringW gameObjectName);

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiateComponentOnNewGameObject(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiateComponentOnNewGameObject(::StringW gameObjectName, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefab addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::Object* prefab);

  /// @brief Method InstantiatePrefab addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefab addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResource addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* InstantiatePrefabResource(::StringW resourcePath);

  /// @brief Method InstantiatePrefabResource addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResource addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform,
                                         ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                         ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform,
                                                 ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* InstantiatePrefabResourceForComponent(::System::Type* concreteType, ::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                 ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiateScriptableObjectResource(::StringW resourcePath);

  /// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T InstantiateScriptableObjectResource(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath);

  /// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                               ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method CreateEmptyGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* CreateEmptyGameObject(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "IInstantiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInstantiator(IInstantiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInstantiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInstantiator(IInstantiator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IInstantiator*, "Zenject", "IInstantiator");
