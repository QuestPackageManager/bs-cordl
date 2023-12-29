#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FindUnityObjectsHelper)
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FindUnityObjectsHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FindUnityObjectsHelper);
// Type: ::FindUnityObjectsHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13803))
// CS Name: ::FindUnityObjectsHelper*
class CORDL_TYPE FindUnityObjectsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMonoBehavioursInLoadedScenes addr 0x1f90824 size 0x60 virtual false final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* GetMonoBehavioursInLoadedScenes();

  /// @brief Method GetAllRootGameObjectsInLoadedScenes addr 0x1f90ac8 size 0x10c virtual false final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllRootGameObjectsInLoadedScenes();

  /// @brief Method GetAllGameObjectsInGameObject addr 0x1f90bd4 size 0x1e0 virtual false final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllGameObjectsInGameObject(::UnityEngine::GameObject* go);

  /// @brief Method GetAllGameObjectsInLoadedScenes addr 0x1f90884 size 0x244 virtual false final false
  static inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GetAllGameObjectsInLoadedScenes();

  /// @brief Method GetComponentsInGameObjects addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* GetComponentsInGameObjects(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* gameObjects);

  /// @brief Method GetComponentsInScene addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* GetComponentsInScene(::UnityEngine::SceneManagement::Scene scene, bool includeInactive);

  /// @brief Method GetComponentInScene addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T GetComponentInScene(::UnityEngine::SceneManagement::Scene scene, bool includeInactive);

  // Ctor Parameters [CppParam { name: "", ty: "FindUnityObjectsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FindUnityObjectsHelper(FindUnityObjectsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FindUnityObjectsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FindUnityObjectsHelper(FindUnityObjectsHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FindUnityObjectsHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FindUnityObjectsHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FindUnityObjectsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FindUnityObjectsHelper*, "", "FindUnityObjectsHelper");
