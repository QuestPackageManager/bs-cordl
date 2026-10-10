#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__SceneHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scene)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::SceneManagement {
struct SceneHandle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::Scene);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
// [NativeHeader("Runtime/Export/SceneManager/Scene.bindings.h")]
// Dependencies UnityEngine.SceneManagement.SceneHandle
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.Scene
struct CORDL_TYPE Scene {
public:
  // Declarations
  __declspec(property(get = get_guid)) ::StringW guid;

  __declspec(property(get = get_handle)) ::UnityEngine::SceneManagement::SceneHandle handle;

  __declspec(property(get = get_isLoaded)) bool isLoaded;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_path)) ::StringW path;

  __declspec(property(get = get_rootCount)) int32_t rootCount;

  /// @brief Method Equals, addr 0x6f5ae30, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetGUIDInternal, addr 0x6f5a630, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetGUIDInternal(::UnityEngine::SceneManagement::SceneHandle sceneHandle);

  /// @brief Method GetGUIDInternal_Injected, addr 0x6f5a6f8, size 0x44, virtual false, abstract: false, final false
  static inline void GetGUIDInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle const> sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetHashCode, addr 0x6f5ad60, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetIsLoadedInternal, addr 0x6f5a73c, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIsLoadedInternal(::UnityEngine::SceneManagement::SceneHandle sceneHandle);

  /// @brief Method GetIsLoadedInternal_Injected, addr 0x6f5a780, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetIsLoadedInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle const> sceneHandle);

  /// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetNameInternal, addr 0x6f5a524, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetNameInternal(::UnityEngine::SceneManagement::SceneHandle sceneHandle);

  /// @brief Method GetNameInternal_Injected, addr 0x6f5a5ec, size 0x44, virtual false, abstract: false, final false
  static inline void GetNameInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle const> sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetPathInternal, addr 0x6f5a418, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetPathInternal(::UnityEngine::SceneManagement::SceneHandle sceneHandle);

  /// @brief Method GetPathInternal_Injected, addr 0x6f5a4e0, size 0x44, virtual false, abstract: false, final false
  static inline void GetPathInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle const> sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetRootCountInternal, addr 0x6f5a7bc, size 0x40, virtual false, abstract: false, final false
  static inline int32_t GetRootCountInternal(::UnityEngine::SceneManagement::SceneHandle sceneHandle);

  /// @brief Method GetRootCountInternal_Injected, addr 0x6f5a7fc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRootCountInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle const> sceneHandle);

  /// @brief Method GetRootGameObjects, addr 0x6f5a9b8, size 0xec, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> GetRootGameObjects();

  /// @brief Method GetRootGameObjects, addr 0x6f5aaa4, size 0x2a4, virtual false, abstract: false, final false
  inline void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* rootGameObjects);

  /// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetRootGameObjectsInternal, addr 0x6f5a838, size 0x48, virtual false, abstract: false, final false
  static inline void GetRootGameObjectsInternal(::UnityEngine::SceneManagement::SceneHandle sceneHandle, ::System::Object* resultRootList);

  /// @brief Method GetRootGameObjectsInternal_Injected, addr 0x6f5a880, size 0x44, virtual false, abstract: false, final false
  static inline void GetRootGameObjectsInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle const> sceneHandle, ::System::Object* resultRootList);

  /// @brief Method IsValid, addr 0x6f5a8d4, size 0x48, virtual false, abstract: false, final false
  inline bool IsValid();

  /// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method IsValidInternal, addr 0x6f5a398, size 0x44, virtual false, abstract: false, final false
  static inline bool IsValidInternal(::UnityEngine::SceneManagement::SceneHandle sceneHandle);

  /// @brief Method IsValidInternal_Injected, addr 0x6f5a3dc, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValidInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle const> sceneHandle);

  /// @brief Method get_guid, addr 0x6f5a8cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_guid();

  /// @brief Method get_handle, addr 0x6f5a8c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::SceneHandle get_handle();

  /// @brief Method get_isLoaded, addr 0x6f5a92c, size 0x48, virtual false, abstract: false, final false
  inline bool get_isLoaded();

  /// @brief Method get_name, addr 0x6f5a924, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_path, addr 0x6f5a91c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_rootCount, addr 0x6f5a974, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_rootCount();

  /// @brief Method op_Equality, addr 0x6f5ad48, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::SceneManagement::Scene lhs, ::UnityEngine::SceneManagement::Scene rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scene();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::SceneManagement::SceneHandle", modifiers: "", def_value: None, comment: None }]
  constexpr Scene(::UnityEngine::SceneManagement::SceneHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10076 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// [HideInInspector]
  /// [SerializeField]
  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::SceneHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::Scene, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
