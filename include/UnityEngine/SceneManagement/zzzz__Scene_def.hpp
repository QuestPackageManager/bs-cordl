#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::Scene);
// Type: UnityEngine.SceneManagement::Scene
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: ::UnityEngine.SceneManagement::Scene
struct CORDL_TYPE Scene {
public:
  // Declarations
  __declspec(property(get = get_handle)) int32_t handle;

  __declspec(property(get = get_isLoaded)) bool isLoaded;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_rootCount)) int32_t rootCount;

  /// @brief Method Equals, addr 0x346c6dc, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x346c6d4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIsLoadedInternal, addr 0x346c1e4, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetIsLoadedInternal(int32_t sceneHandle);

  /// @brief Method GetNameInternal, addr 0x346c1a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetNameInternal(int32_t sceneHandle);

  /// @brief Method GetRootCountInternal, addr 0x346c220, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRootCountInternal(int32_t sceneHandle);

  /// @brief Method GetRootGameObjects, addr 0x346c398, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> GetRootGameObjects();

  /// @brief Method GetRootGameObjects, addr 0x346c470, size 0x258, virtual false, abstract: false, final false
  inline void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* rootGameObjects);

  /// @brief Method GetRootGameObjectsInternal, addr 0x346c25c, size 0x44, virtual false, abstract: false, final false
  static inline void GetRootGameObjectsInternal(int32_t sceneHandle, ::System::Object* resultRootList);

  /// @brief Method IsValid, addr 0x346c2a8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValidInternal, addr 0x346c16c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValidInternal(int32_t sceneHandle);

  /// @brief Method get_handle, addr 0x346c2a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_handle();

  /// @brief Method get_isLoaded, addr 0x346c320, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isLoaded();

  /// @brief Method get_name, addr 0x346c2e4, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_rootCount, addr 0x346c35c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_rootCount();

  /// @brief Method op_Equality, addr 0x346c6c8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::SceneManagement::Scene lhs, ::UnityEngine::SceneManagement::Scene rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scene();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Scene(int32_t m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::Scene, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SceneManagement::Scene, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
