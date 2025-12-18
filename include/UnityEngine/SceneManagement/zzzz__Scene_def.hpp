#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::Scene);
// Dependencies
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.Scene
struct CORDL_TYPE Scene {
public:
  // Declarations
  __declspec(property(get = get_guid)) ::StringW guid;

  __declspec(property(get = get_handle)) int32_t handle;

  __declspec(property(get = get_isLoaded)) bool isLoaded;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_path)) ::StringW path;

  __declspec(property(get = get_rootCount)) int32_t rootCount;

  /// @brief Method Equals, addr 0x6934adc, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetGUIDInternal, addr 0x69344b8, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetGUIDInternal(int32_t sceneHandle);

  /// @brief Method GetGUIDInternal_Injected, addr 0x6934580, size 0x44, virtual false, abstract: false, final false
  static inline void GetGUIDInternal_Injected(int32_t sceneHandle, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetHashCode, addr 0x6934ad4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIsLoadedInternal, addr 0x69345c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetIsLoadedInternal(int32_t sceneHandle);

  /// @brief Method GetNameInternal, addr 0x69343ac, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetNameInternal(int32_t sceneHandle);

  /// @brief Method GetNameInternal_Injected, addr 0x6934474, size 0x44, virtual false, abstract: false, final false
  static inline void GetNameInternal_Injected(int32_t sceneHandle, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPathInternal, addr 0x69342a0, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetPathInternal(int32_t sceneHandle);

  /// @brief Method GetPathInternal_Injected, addr 0x6934368, size 0x44, virtual false, abstract: false, final false
  static inline void GetPathInternal_Injected(int32_t sceneHandle, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetRootCountInternal, addr 0x6934600, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRootCountInternal(int32_t sceneHandle);

  /// @brief Method GetRootGameObjects, addr 0x6934754, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> GetRootGameObjects();

  /// @brief Method GetRootGameObjects, addr 0x6934830, size 0x298, virtual false, abstract: false, final false
  inline void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* rootGameObjects);

  /// @brief Method GetRootGameObjectsInternal, addr 0x693463c, size 0x44, virtual false, abstract: false, final false
  static inline void GetRootGameObjectsInternal(int32_t sceneHandle, ::System::Object* resultRootList);

  /// @brief Method IsValid, addr 0x6934690, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValidInternal, addr 0x6934264, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValidInternal(int32_t sceneHandle);

  /// @brief Method get_guid, addr 0x6934688, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_guid();

  /// @brief Method get_handle, addr 0x6934680, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_handle();

  /// @brief Method get_isLoaded, addr 0x69346dc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isLoaded();

  /// @brief Method get_name, addr 0x69346d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_path, addr 0x69346cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_rootCount, addr 0x6934718, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_rootCount();

  /// @brief Method op_Equality, addr 0x6934ac8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::SceneManagement::Scene lhs, ::UnityEngine::SceneManagement::Scene rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scene();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Scene(int32_t m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10463 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::Scene, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::Scene, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
